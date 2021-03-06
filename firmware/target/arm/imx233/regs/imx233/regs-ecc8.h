/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: imx233:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
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
#ifndef __HEADERGEN__IMX233__ECC8__H__
#define __HEADERGEN__IMX233__ECC8__H__

#define REGS_ECC8_BASE (0x80008000)

#define REGS_ECC8_VERSION "3.2.0"

/**
 * Register: HW_ECC8_CTRL
 * Address: 0
 * SCT: yes
*/
#define HW_ECC8_CTRL                        (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x0 + 0x0))
#define HW_ECC8_CTRL_SET                    (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x0 + 0x4))
#define HW_ECC8_CTRL_CLR                    (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x0 + 0x8))
#define HW_ECC8_CTRL_TOG                    (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x0 + 0xc))
#define BP_ECC8_CTRL_SFTRST                 31
#define BM_ECC8_CTRL_SFTRST                 0x80000000
#define BV_ECC8_CTRL_SFTRST__RUN            0x0
#define BV_ECC8_CTRL_SFTRST__RESET          0x1
#define BF_ECC8_CTRL_SFTRST(v)              (((v) << 31) & 0x80000000)
#define BF_ECC8_CTRL_SFTRST_V(v)            ((BV_ECC8_CTRL_SFTRST__##v << 31) & 0x80000000)
#define BP_ECC8_CTRL_CLKGATE                30
#define BM_ECC8_CTRL_CLKGATE                0x40000000
#define BV_ECC8_CTRL_CLKGATE__RUN           0x0
#define BV_ECC8_CTRL_CLKGATE__NO_CLKS       0x1
#define BF_ECC8_CTRL_CLKGATE(v)             (((v) << 30) & 0x40000000)
#define BF_ECC8_CTRL_CLKGATE_V(v)           ((BV_ECC8_CTRL_CLKGATE__##v << 30) & 0x40000000)
#define BP_ECC8_CTRL_AHBM_SFTRST            29
#define BM_ECC8_CTRL_AHBM_SFTRST            0x20000000
#define BV_ECC8_CTRL_AHBM_SFTRST__RUN       0x0
#define BV_ECC8_CTRL_AHBM_SFTRST__RESET     0x1
#define BF_ECC8_CTRL_AHBM_SFTRST(v)         (((v) << 29) & 0x20000000)
#define BF_ECC8_CTRL_AHBM_SFTRST_V(v)       ((BV_ECC8_CTRL_AHBM_SFTRST__##v << 29) & 0x20000000)
#define BP_ECC8_CTRL_RSRVD2                 28
#define BM_ECC8_CTRL_RSRVD2                 0x10000000
#define BF_ECC8_CTRL_RSRVD2(v)              (((v) << 28) & 0x10000000)
#define BP_ECC8_CTRL_THROTTLE               24
#define BM_ECC8_CTRL_THROTTLE               0xf000000
#define BF_ECC8_CTRL_THROTTLE(v)            (((v) << 24) & 0xf000000)
#define BP_ECC8_CTRL_RSRVD1                 11
#define BM_ECC8_CTRL_RSRVD1                 0xfff800
#define BF_ECC8_CTRL_RSRVD1(v)              (((v) << 11) & 0xfff800)
#define BP_ECC8_CTRL_DEBUG_STALL_IRQ_EN     10
#define BM_ECC8_CTRL_DEBUG_STALL_IRQ_EN     0x400
#define BF_ECC8_CTRL_DEBUG_STALL_IRQ_EN(v)  (((v) << 10) & 0x400)
#define BP_ECC8_CTRL_DEBUG_WRITE_IRQ_EN     9
#define BM_ECC8_CTRL_DEBUG_WRITE_IRQ_EN     0x200
#define BF_ECC8_CTRL_DEBUG_WRITE_IRQ_EN(v)  (((v) << 9) & 0x200)
#define BP_ECC8_CTRL_COMPLETE_IRQ_EN        8
#define BM_ECC8_CTRL_COMPLETE_IRQ_EN        0x100
#define BF_ECC8_CTRL_COMPLETE_IRQ_EN(v)     (((v) << 8) & 0x100)
#define BP_ECC8_CTRL_RSRVD0                 4
#define BM_ECC8_CTRL_RSRVD0                 0xf0
#define BF_ECC8_CTRL_RSRVD0(v)              (((v) << 4) & 0xf0)
#define BP_ECC8_CTRL_BM_ERROR_IRQ           3
#define BM_ECC8_CTRL_BM_ERROR_IRQ           0x8
#define BF_ECC8_CTRL_BM_ERROR_IRQ(v)        (((v) << 3) & 0x8)
#define BP_ECC8_CTRL_DEBUG_STALL_IRQ        2
#define BM_ECC8_CTRL_DEBUG_STALL_IRQ        0x4
#define BF_ECC8_CTRL_DEBUG_STALL_IRQ(v)     (((v) << 2) & 0x4)
#define BP_ECC8_CTRL_DEBUG_WRITE_IRQ        1
#define BM_ECC8_CTRL_DEBUG_WRITE_IRQ        0x2
#define BF_ECC8_CTRL_DEBUG_WRITE_IRQ(v)     (((v) << 1) & 0x2)
#define BP_ECC8_CTRL_COMPLETE_IRQ           0
#define BM_ECC8_CTRL_COMPLETE_IRQ           0x1
#define BF_ECC8_CTRL_COMPLETE_IRQ(v)        (((v) << 0) & 0x1)

/**
 * Register: HW_ECC8_STATUS0
 * Address: 0x10
 * SCT: no
*/
#define HW_ECC8_STATUS0                                 (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x10))
#define BP_ECC8_STATUS0_HANDLE                          20
#define BM_ECC8_STATUS0_HANDLE                          0xfff00000
#define BF_ECC8_STATUS0_HANDLE(v)                       (((v) << 20) & 0xfff00000)
#define BP_ECC8_STATUS0_COMPLETED_CE                    16
#define BM_ECC8_STATUS0_COMPLETED_CE                    0xf0000
#define BF_ECC8_STATUS0_COMPLETED_CE(v)                 (((v) << 16) & 0xf0000)
#define BP_ECC8_STATUS0_RS8ECC_ENC_PRESENT              15
#define BM_ECC8_STATUS0_RS8ECC_ENC_PRESENT              0x8000
#define BF_ECC8_STATUS0_RS8ECC_ENC_PRESENT(v)           (((v) << 15) & 0x8000)
#define BP_ECC8_STATUS0_RS8ECC_DEC_PRESENT              14
#define BM_ECC8_STATUS0_RS8ECC_DEC_PRESENT              0x4000
#define BF_ECC8_STATUS0_RS8ECC_DEC_PRESENT(v)           (((v) << 14) & 0x4000)
#define BP_ECC8_STATUS0_RS4ECC_ENC_PRESENT              13
#define BM_ECC8_STATUS0_RS4ECC_ENC_PRESENT              0x2000
#define BF_ECC8_STATUS0_RS4ECC_ENC_PRESENT(v)           (((v) << 13) & 0x2000)
#define BP_ECC8_STATUS0_RS4ECC_DEC_PRESENT              12
#define BM_ECC8_STATUS0_RS4ECC_DEC_PRESENT              0x1000
#define BF_ECC8_STATUS0_RS4ECC_DEC_PRESENT(v)           (((v) << 12) & 0x1000)
#define BP_ECC8_STATUS0_STATUS_AUX                      8
#define BM_ECC8_STATUS0_STATUS_AUX                      0xf00
#define BV_ECC8_STATUS0_STATUS_AUX__NO_ERRORS           0x0
#define BV_ECC8_STATUS0_STATUS_AUX__ONE_CORRECTABLE     0x1
#define BV_ECC8_STATUS0_STATUS_AUX__TWO_CORRECTABLE     0x2
#define BV_ECC8_STATUS0_STATUS_AUX__THREE_CORRECTABLE   0x3
#define BV_ECC8_STATUS0_STATUS_AUX__FOUR_CORRECTABLE    0x4
#define BV_ECC8_STATUS0_STATUS_AUX__NOT_CHECKED         0xc
#define BV_ECC8_STATUS0_STATUS_AUX__UNCORRECTABLE       0xe
#define BV_ECC8_STATUS0_STATUS_AUX__ALL_ONES            0xf
#define BF_ECC8_STATUS0_STATUS_AUX(v)                   (((v) << 8) & 0xf00)
#define BF_ECC8_STATUS0_STATUS_AUX_V(v)                 ((BV_ECC8_STATUS0_STATUS_AUX__##v << 8) & 0xf00)
#define BP_ECC8_STATUS0_RSVD1                           5
#define BM_ECC8_STATUS0_RSVD1                           0xe0
#define BF_ECC8_STATUS0_RSVD1(v)                        (((v) << 5) & 0xe0)
#define BP_ECC8_STATUS0_ALLONES                         4
#define BM_ECC8_STATUS0_ALLONES                         0x10
#define BF_ECC8_STATUS0_ALLONES(v)                      (((v) << 4) & 0x10)
#define BP_ECC8_STATUS0_CORRECTED                       3
#define BM_ECC8_STATUS0_CORRECTED                       0x8
#define BF_ECC8_STATUS0_CORRECTED(v)                    (((v) << 3) & 0x8)
#define BP_ECC8_STATUS0_UNCORRECTABLE                   2
#define BM_ECC8_STATUS0_UNCORRECTABLE                   0x4
#define BF_ECC8_STATUS0_UNCORRECTABLE(v)                (((v) << 2) & 0x4)
#define BP_ECC8_STATUS0_RSVD0                           0
#define BM_ECC8_STATUS0_RSVD0                           0x3
#define BF_ECC8_STATUS0_RSVD0(v)                        (((v) << 0) & 0x3)

/**
 * Register: HW_ECC8_STATUS1
 * Address: 0x20
 * SCT: no
*/
#define HW_ECC8_STATUS1                                     (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x20))
#define BP_ECC8_STATUS1_STATUS_PAYLOAD7                     28
#define BM_ECC8_STATUS1_STATUS_PAYLOAD7                     0xf0000000
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD7__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD7(v)                  (((v) << 28) & 0xf0000000)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD7_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD7__##v << 28) & 0xf0000000)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD6                     24
#define BM_ECC8_STATUS1_STATUS_PAYLOAD6                     0xf000000
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD6__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD6(v)                  (((v) << 24) & 0xf000000)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD6_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD6__##v << 24) & 0xf000000)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD5                     20
#define BM_ECC8_STATUS1_STATUS_PAYLOAD5                     0xf00000
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD5__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD5(v)                  (((v) << 20) & 0xf00000)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD5_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD5__##v << 20) & 0xf00000)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD4                     16
#define BM_ECC8_STATUS1_STATUS_PAYLOAD4                     0xf0000
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD4__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD4(v)                  (((v) << 16) & 0xf0000)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD4_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD4__##v << 16) & 0xf0000)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD3                     12
#define BM_ECC8_STATUS1_STATUS_PAYLOAD3                     0xf000
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD3__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD3(v)                  (((v) << 12) & 0xf000)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD3_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD3__##v << 12) & 0xf000)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD2                     8
#define BM_ECC8_STATUS1_STATUS_PAYLOAD2                     0xf00
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD2__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD2(v)                  (((v) << 8) & 0xf00)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD2_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD2__##v << 8) & 0xf00)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD1                     4
#define BM_ECC8_STATUS1_STATUS_PAYLOAD1                     0xf0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD1__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD1(v)                  (((v) << 4) & 0xf0)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD1_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD1__##v << 4) & 0xf0)
#define BP_ECC8_STATUS1_STATUS_PAYLOAD0                     0
#define BM_ECC8_STATUS1_STATUS_PAYLOAD0                     0xf
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__NO_ERRORS          0x0
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__ONE_CORRECTABLE    0x1
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__TWO_CORRECTABLE    0x2
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__THREE_CORRECTABLE  0x3
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__FOUR_CORRECTABLE   0x4
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__FIVE_CORRECTABLE   0x5
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__SIX_CORRECTABLE    0x6
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__SEVEN_CORRECTABLE  0x7
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__EIGHT_CORRECTABLE  0x8
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__NOT_CHECKED        0xc
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__UNCORRECTABLE      0xe
#define BV_ECC8_STATUS1_STATUS_PAYLOAD0__ALL_ONES           0xf
#define BF_ECC8_STATUS1_STATUS_PAYLOAD0(v)                  (((v) << 0) & 0xf)
#define BF_ECC8_STATUS1_STATUS_PAYLOAD0_V(v)                ((BV_ECC8_STATUS1_STATUS_PAYLOAD0__##v << 0) & 0xf)

/**
 * Register: HW_ECC8_DEBUG0
 * Address: 0x30
 * SCT: yes
*/
#define HW_ECC8_DEBUG0                                      (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x30 + 0x0))
#define HW_ECC8_DEBUG0_SET                                  (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x30 + 0x4))
#define HW_ECC8_DEBUG0_CLR                                  (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x30 + 0x8))
#define HW_ECC8_DEBUG0_TOG                                  (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x30 + 0xc))
#define BP_ECC8_DEBUG0_RSRVD1                               25
#define BM_ECC8_DEBUG0_RSRVD1                               0xfe000000
#define BF_ECC8_DEBUG0_RSRVD1(v)                            (((v) << 25) & 0xfe000000)
#define BP_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL            16
#define BM_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL            0x1ff0000
#define BV_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__NORMAL    0x0
#define BV_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__TEST_MODE 0x1
#define BF_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL(v)         (((v) << 16) & 0x1ff0000)
#define BF_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL_V(v)       ((BV_ECC8_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__##v << 16) & 0x1ff0000)
#define BP_ECC8_DEBUG0_KES_DEBUG_SHIFT_SYND                 15
#define BM_ECC8_DEBUG0_KES_DEBUG_SHIFT_SYND                 0x8000
#define BF_ECC8_DEBUG0_KES_DEBUG_SHIFT_SYND(v)              (((v) << 15) & 0x8000)
#define BP_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG               14
#define BM_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG               0x4000
#define BV_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__DATA         0x1
#define BV_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__AUX          0x1
#define BF_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG(v)            (((v) << 14) & 0x4000)
#define BF_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG_V(v)          ((BV_ECC8_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__##v << 14) & 0x4000)
#define BP_ECC8_DEBUG0_KES_DEBUG_MODE4K                     13
#define BM_ECC8_DEBUG0_KES_DEBUG_MODE4K                     0x2000
#define BV_ECC8_DEBUG0_KES_DEBUG_MODE4K__4k                 0x1
#define BV_ECC8_DEBUG0_KES_DEBUG_MODE4K__2k                 0x1
#define BF_ECC8_DEBUG0_KES_DEBUG_MODE4K(v)                  (((v) << 13) & 0x2000)
#define BF_ECC8_DEBUG0_KES_DEBUG_MODE4K_V(v)                ((BV_ECC8_DEBUG0_KES_DEBUG_MODE4K__##v << 13) & 0x2000)
#define BP_ECC8_DEBUG0_KES_DEBUG_KICK                       12
#define BM_ECC8_DEBUG0_KES_DEBUG_KICK                       0x1000
#define BF_ECC8_DEBUG0_KES_DEBUG_KICK(v)                    (((v) << 12) & 0x1000)
#define BP_ECC8_DEBUG0_KES_STANDALONE                       11
#define BM_ECC8_DEBUG0_KES_STANDALONE                       0x800
#define BV_ECC8_DEBUG0_KES_STANDALONE__NORMAL               0x0
#define BV_ECC8_DEBUG0_KES_STANDALONE__TEST_MODE            0x1
#define BF_ECC8_DEBUG0_KES_STANDALONE(v)                    (((v) << 11) & 0x800)
#define BF_ECC8_DEBUG0_KES_STANDALONE_V(v)                  ((BV_ECC8_DEBUG0_KES_STANDALONE__##v << 11) & 0x800)
#define BP_ECC8_DEBUG0_KES_DEBUG_STEP                       10
#define BM_ECC8_DEBUG0_KES_DEBUG_STEP                       0x400
#define BF_ECC8_DEBUG0_KES_DEBUG_STEP(v)                    (((v) << 10) & 0x400)
#define BP_ECC8_DEBUG0_KES_DEBUG_STALL                      9
#define BM_ECC8_DEBUG0_KES_DEBUG_STALL                      0x200
#define BV_ECC8_DEBUG0_KES_DEBUG_STALL__NORMAL              0x0
#define BV_ECC8_DEBUG0_KES_DEBUG_STALL__WAIT                0x1
#define BF_ECC8_DEBUG0_KES_DEBUG_STALL(v)                   (((v) << 9) & 0x200)
#define BF_ECC8_DEBUG0_KES_DEBUG_STALL_V(v)                 ((BV_ECC8_DEBUG0_KES_DEBUG_STALL__##v << 9) & 0x200)
#define BP_ECC8_DEBUG0_BM_KES_TEST_BYPASS                   8
#define BM_ECC8_DEBUG0_BM_KES_TEST_BYPASS                   0x100
#define BV_ECC8_DEBUG0_BM_KES_TEST_BYPASS__NORMAL           0x0
#define BV_ECC8_DEBUG0_BM_KES_TEST_BYPASS__TEST_MODE        0x1
#define BF_ECC8_DEBUG0_BM_KES_TEST_BYPASS(v)                (((v) << 8) & 0x100)
#define BF_ECC8_DEBUG0_BM_KES_TEST_BYPASS_V(v)              ((BV_ECC8_DEBUG0_BM_KES_TEST_BYPASS__##v << 8) & 0x100)
#define BP_ECC8_DEBUG0_RSRVD0                               6
#define BM_ECC8_DEBUG0_RSRVD0                               0xc0
#define BF_ECC8_DEBUG0_RSRVD0(v)                            (((v) << 6) & 0xc0)
#define BP_ECC8_DEBUG0_DEBUG_REG_SELECT                     0
#define BM_ECC8_DEBUG0_DEBUG_REG_SELECT                     0x3f
#define BF_ECC8_DEBUG0_DEBUG_REG_SELECT(v)                  (((v) << 0) & 0x3f)

/**
 * Register: HW_ECC8_DBGKESREAD
 * Address: 0x40
 * SCT: no
*/
#define HW_ECC8_DBGKESREAD              (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x40))
#define BP_ECC8_DBGKESREAD_VALUES       0
#define BM_ECC8_DBGKESREAD_VALUES       0xffffffff
#define BF_ECC8_DBGKESREAD_VALUES(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ECC8_DBGCSFEREAD
 * Address: 0x50
 * SCT: no
*/
#define HW_ECC8_DBGCSFEREAD             (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x50))
#define BP_ECC8_DBGCSFEREAD_VALUES      0
#define BM_ECC8_DBGCSFEREAD_VALUES      0xffffffff
#define BF_ECC8_DBGCSFEREAD_VALUES(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ECC8_DBGSYNDGENREAD
 * Address: 0x60
 * SCT: no
*/
#define HW_ECC8_DBGSYNDGENREAD              (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x60))
#define BP_ECC8_DBGSYNDGENREAD_VALUES       0
#define BM_ECC8_DBGSYNDGENREAD_VALUES       0xffffffff
#define BF_ECC8_DBGSYNDGENREAD_VALUES(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ECC8_DBGAHBMREAD
 * Address: 0x70
 * SCT: no
*/
#define HW_ECC8_DBGAHBMREAD             (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x70))
#define BP_ECC8_DBGAHBMREAD_VALUES      0
#define BM_ECC8_DBGAHBMREAD_VALUES      0xffffffff
#define BF_ECC8_DBGAHBMREAD_VALUES(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ECC8_BLOCKNAME
 * Address: 0x80
 * SCT: no
*/
#define HW_ECC8_BLOCKNAME           (*(volatile unsigned long *)(REGS_ECC8_BASE + 0x80))
#define BP_ECC8_BLOCKNAME_NAME      0
#define BM_ECC8_BLOCKNAME_NAME      0xffffffff
#define BF_ECC8_BLOCKNAME_NAME(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_ECC8_VERSION
 * Address: 0xa0
 * SCT: no
*/
#define HW_ECC8_VERSION             (*(volatile unsigned long *)(REGS_ECC8_BASE + 0xa0))
#define BP_ECC8_VERSION_MAJOR       24
#define BM_ECC8_VERSION_MAJOR       0xff000000
#define BF_ECC8_VERSION_MAJOR(v)    (((v) << 24) & 0xff000000)
#define BP_ECC8_VERSION_MINOR       16
#define BM_ECC8_VERSION_MINOR       0xff0000
#define BF_ECC8_VERSION_MINOR(v)    (((v) << 16) & 0xff0000)
#define BP_ECC8_VERSION_STEP        0
#define BM_ECC8_VERSION_STEP        0xffff
#define BF_ECC8_VERSION_STEP(v)     (((v) << 0) & 0xffff)

#endif /* __HEADERGEN__IMX233__ECC8__H__ */
