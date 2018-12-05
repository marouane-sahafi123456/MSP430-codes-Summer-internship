#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/bios_6_73_00_12/packages
override XDCROOT = D:/USERDO~1/TexasInstrument/xdctools_3_50_05_12_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/bios_6_73_00_12/packages;D:/USERDO~1/TexasInstrument/xdctools_3_50_05_12_core/packages;..
HOSTOS = Windows
endif
