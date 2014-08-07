/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2014 Thomas Daede
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

/* welcome to the example rockbox plugin */

/* mandatory include for all plugins */
#include "plugin.h"
#include "sha256.h"

/* adapted from bitcoin core */
static const char* pszBase58 = "123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz";

int EncodeBase58(const unsigned char* pbegin, const unsigned char* pend, char *str) {
    // Skip & count leading zeroes.
    int zeroes = 0;
    while (pbegin != pend && *pbegin == 0) {
        pbegin++;
        zeroes++;
    }
    unsigned char b58[100];
    memset(b58,0,100);
    // Allocate enough space in big-endian base58 representation.
    int b58_len = ((pend - pbegin) * 138 / 100 + 1); // log(256) / log(58), rounded up.
    
    if (b58_len > 100) return 0;
    // Process the bytes.
    while (pbegin != pend) {
        int carry = *pbegin;
        // Apply "b58 = b58 * 256 + ch".
        for (unsigned char* it = b58+b58_len-1; it >= b58; it--) {
            carry += 256 * (*it);
            *it = carry % 58;
            carry /= 58;
        }
        pbegin++;
    }
    // Skip leading zeroes in base58 result.
    unsigned char* it = b58;
    while (it != (b58 + b58_len) && *it == 0)
        it++;
    // Translate the result into a string.
    int i;
    for (i = 0; i < zeroes; i++) {
      str[i] = '1';
    }
    while (it != (b58 + b58_len)) {
        str[i] = pszBase58[*(it++)];
        i++;
    }
    str[i] = 0;
    return i;
}

typedef struct {
  uint32_t version;
  uint8_t in_count;
} tx_t;

typedef struct {
  int64_t value;
  uint8_t script_length;
  uint8_t script[0x19];
  char addr[40];
} tx_out_t;

uint8_t read_varint(int fp) {
  uint8_t num;
  rb->read(fp, &num, 1);
  if (num >= 0xfd) {
    rb->splash(HZ, "Varint too large.");
  }
  return num;
}


/* this is the plugin entry point */
enum plugin_status plugin_start(const void* parameter)
{
    /* if you don't use the parameter, you can do like
       this to avoid the compiler warning about it */
    (void)parameter;
    
    int fp;
    
    uint32_t tx_version;
    
    uint8_t tx_in_count;
    uint8_t tx_in_script_length;
    
    uint8_t tx_out_count;
    
    tx_out_t tx_out[2];

    /* "rb->" marks a plugin api call. Rockbox offers many of its built-in
     * functions to plugins */
    /* now go ahead and have fun! */
    rb->splash(HZ, "Bitcoin Wallet");
    

    
    fp = rb->open("/transaction", O_RDONLY);
    if (fp < 0) {
      rb->splash(HZ, "No transaction file!");
      return PLUGIN_ERROR;
    }
    rb->read(fp, &tx_version, 4);
    rb->read(fp, &tx_in_count,1);
    if (tx_in_count > 1) {
      rb->splash(HZ, "Only 1 input supported");
      return PLUGIN_ERROR;
    }
    // skip past tx origin
    rb->lseek(fp, 36, SEEK_CUR);
    tx_in_script_length = read_varint(fp);
    if (tx_in_script_length >= 0xfd) {
      rb->splash(HZ, "TX in script length too long!");
      return PLUGIN_ERROR;
    }
    rb->lseek(fp, tx_in_script_length,SEEK_CUR);
    // skip past transaction ver
    rb->lseek(fp, 4, SEEK_CUR);
    rb->read(fp, &tx_out_count, 1);
    if (tx_out_count > 2) {
      rb->splash(HZ, "Only <3 outputs supported");
      return PLUGIN_ERROR;
    }
    for (int i = 0; i < tx_out_count; i++) {
      rb->read(fp, &tx_out[i].value, 8);
      rb->read(fp, &tx_out[i].script_length, 1);
      if (tx_out[i].script_length != 0x19) {
        rb->splash(HZ, "Script not supported");
        return PLUGIN_ERROR;
      }
      rb->read(fp, tx_out[i].script, tx_out[i].script_length);
      if ((tx_out[i].script[0] != 0x76) ||
          (tx_out[i].script[1] != 0xA9) ||
          (tx_out[i].script[2] != 0x14)) {
        rb->splash(HZ, "Script not supported");
        return PLUGIN_ERROR;
      }
      unsigned char address_bin[25];
      unsigned char sha256_tmp[32];
      address_bin[0] = 0;
      memcpy(&address_bin[1], tx_out[i].script + 3, 20);
      sha256(address_bin, 21, sha256_tmp);
      sha256(sha256_tmp, 32, sha256_tmp);
      memcpy(&address_bin[21], sha256_tmp, 4);
      EncodeBase58(address_bin, address_bin+25, tx_out[i].addr);
    }
    
    rb->lcd_clear_display();
    rb->lcd_putsf(0,0,"Value 1: %d mBTC",tx_out[0].value/10000);
    rb->lcd_putsf(0,1,"Addr  1: %s",tx_out[0].addr);
    rb->lcd_putsf(0,2,"Value 2: %d mBTC",tx_out[1].value/10000);
    rb->lcd_putsf(0,3,"Addr  2: %s",tx_out[1].addr);
    rb->lcd_putsf(0,4,"Push select to sign tx.");
    rb->lcd_putsf(0,5,"Push back to exit.");
    rb->lcd_update();
    
    int button = rb->button_get(true);
    if (button == BUTTON_SELECT) {
      rb->splash(HZ, "Signing not implemented");
    }

    rb->close(fp);
    /* tell Rockbox that we have completed successfully */
    return PLUGIN_OK;
}
