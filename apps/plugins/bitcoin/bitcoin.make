#             __________               __   ___.
#   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
#   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
#   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
#   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
#                     \/            \/     \/    \/            \/
# $Id$
#

BITCOIN_SRCDIR = $(APPSDIR)/plugins/bitcoin
BITCOIN_OBJDIR = $(BUILDDIR)/apps/plugins/bitcoin

BITCOIN_SRC := $(call preprocess, $(BITCOIN_SRCDIR)/SOURCES)
BITCOIN_OBJ := $(call c2obj, $(BITCOIN_SRC))

OTHER_SRC += $(BITCOIN_SRC)

ifndef APP_TYPE
ifneq (,$(strip $(foreach tgt,RECORDER ONDIO,$(findstring $(tgt),$(TARGET)))))
    ### lowmem targets
    ROCKS += $(BITCOIN_OBJDIR)/bitcoin.ovl
    BITCOIN_OUTLDS = $(BITCOIN_OBJDIR)/picutreflow.link
    BITCOIN_OVLFLAGS = -T$(BITCOIN_OUTLDS) -Wl,--gc-sections -Wl,-Map,$(basename $@).map
else
    ### all other targets
    ROCKS += $(BITCOIN_OBJDIR)/bitcoin.rock
endif
else
    ### simulator
    ROCKS += $(BITCOIN_OBJDIR)/bitcoin.rock
endif

ifeq ($(CPU),sh)
# sh need to retain its' -Os
BITCOINFLAGS = $(PLUGINFLAGS)
else
BITCOINFLAGS = $(filter-out -O%,$(PLUGINFLAGS)) -O2
endif

$(BITCOIN_OBJDIR)/bitcoin.rock: $(BITCOIN_OBJ)

$(BITCOIN_OBJDIR)/bitcoin.refmap: $(BITCOIN_OBJ)

$(BITCOIN_OUTLDS): $(PLUGIN_LDS) $(BITCOIN_OBJDIR)/bitcoin.refmap
	$(call PRINTS,PP $(@F))$(call preprocess2file,$<,$@,-DOVERLAY_OFFSET=$(shell \
		$(TOOLSDIR)/ovl_offset.pl $(BITCOIN_OBJDIR)/bitcoin.refmap))

$(BITCOIN_OBJDIR)/bitcoin.ovl: $(BITCOIN_OBJ) $(BITCOIN_OUTLDS)
	$(SILENT)$(CC) $(PLUGINFLAGS) -o $(basename $@).elf \
		$(filter %.o, $^) \
		$(filter %.a, $+) \
		-lgcc $(BITCOIN_OVLFLAGS)
	$(call PRINTS,LD $(@F))$(call objcopy,$(basename $@).elf,$@)

# special pattern rule for compiling bitcoin with extra flags
$(BITCOIN_OBJDIR)/%.o: $(BITCOIN_SRCDIR)/%.c $(BITCOIN_SRCDIR)/bitcoin.make
	$(SILENT)mkdir -p $(dir $@)
	$(call PRINTS,CC $(subst $(ROOTDIR)/,,$<))$(CC) -I$(dir $<) $(BITCOINFLAGS) -c $< -o $@
