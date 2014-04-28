/****************************************************************************
 *
 *      Copyright (c) DiBcom SA.  All rights reserved.
 *
 *      THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 *      KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 *      IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
 *      PURPOSE.
 *
 ****************************************************************************/



#include "DibConfig.h" /* Must be first include of all SDK files - Defines compilation options */

#if (USE_DRAGONFLY == 1)

#include "DibFirmwareSelection.h"

/* Here we include all the octocode binaries */
#if DIB_CMMB_STD == 1
#include "../Firmware/octopus-hw11-spal3-cmmb-bin.h"
#include "../Firmware/octopus-hw11-spal3-cmmb-4096_data-bin.h"
#include "../Firmware/octopus-hw12-spal3-cmmb-bin.h"
#include "../Firmware/octopus-hw12-spal3-cmmb-4096_data-bin.h"
#include "../Firmware/reflex_cmmb-bin.h"
#endif
#if DIB_DVB_STD == 1
#include "../Firmware/octopus-hw11-dvbt-bin.h"
#include "../Firmware/octopus-hw11-dvbt_data-bin.h"
#include "../Firmware/octopus-hw11-dvbt-2048_data-bin.h"
#include "../Firmware/octopus-hw11-dvbt-4096_data-bin.h"
#include "../Firmware/octopus-hw12-dvbt-8192-bin.h"
#include "../Firmware/octopus-hw12-dvbt-8192_data-bin.h"
#include "../Firmware/reflex_dvbt-bin.h"
#endif

#if DIB_ISDBT_STD == 1
#include "../Firmware/octopus-hw11-spal3-isdbt-bin.h"
#include "../Firmware/octopus-hw11-spal3-isdbt-2061_data-bin.h"
#include "../Firmware/octopus-hw11-spal3-isdbt-8193_data-bin.h"
#include "../Firmware/octopus-hw11-spal3-isdbt-8195_data-bin.h"
#include "../Firmware/octopus-hw11-spal3-isdbt-8205_data-bin.h"
#include "../Firmware/octopus-hw11-spal3-isdbt-4109_data-bin.h"
#endif

#if DIB_DAB_STD == 1
#include "../Firmware/octopus-hw11-spal-dab-bin.h"
#include "../Firmware/octopus-hw11-spal-dab-tm-1_data-bin.h"
#include "../Firmware/octopus-hw11-spal-dab-tm-2_data-bin.h"
#include "../Firmware/octopus-hw11-spal-dab-tm-3_data-bin.h"
#include "../Firmware/octopus-hw11-spal-dab-tm-4_data-bin.h"
#endif

#if DIB_CTTB_STD == 1
#include "../Firmware/octopus-hw12-spal3-cttb-420-bin.h"
#include "../Firmware/octopus-hw12-spal3-cttb-420_data-bin.h"
#include "../Firmware/octopus-hw12-spal3-cttb-595-bin.h"
#include "../Firmware/octopus-hw12-spal3-cttb-595_data-bin.h"
#include "../Firmware/octopus-hw12-spal3-cttb-945-bin.h"
#include "../Firmware/octopus-hw12-spal3-cttb-945_data-bin.h"
#include "../Firmware/reflex_cttb-bin.h"
#endif

struct DibFirmwareDescription    FirmwareList[] =
{
#if DIB_CMMB_STD == 1
    {"octopus-hw11-spal3-cmmb.bin"  , "cmmb standard only"        ,octopus_hw11_spal3_cmmb_bin         ,  sizeof(octopus_hw11_spal3_cmmb_bin)  },
    {"octopus-hw11-spal3-cmmb-4096_data.bin" , "cmmb standard only",octopus_hw11_spal3_cmmb_4096_data_bin  ,  sizeof(octopus_hw11_spal3_cmmb_4096_data_bin)  },
    {"octopus-hw12-spal3-cmmb.bin"  , "cmmb standard only"        ,octopus_hw12_spal3_cmmb_bin         ,  sizeof(octopus_hw12_spal3_cmmb_bin)  },
    {"octopus-hw12-spal3-cmmb-4096_data.bin" , "cmmb standard only",octopus_hw12_spal3_cmmb_4096_data_bin  ,  sizeof(octopus_hw12_spal3_cmmb_4096_data_bin)  },
    {"reflex_cmmb.bin",         "femtos for cmmb"                 ,reflex_cmmb,                    sizeof(reflex_cmmb)},
#endif
#if DIB_DVB_STD == 1
   {"octopus-hw11-dvbt.bin"            ,"dvb standard only 8K"             ,octopus_hw11_dvbt_bin           ,  sizeof(octopus_hw11_dvbt_bin)  },
   {"octopus-hw11-dvbt_data.bin"       ,"dvb standard modulation 8K"       ,octopus_hw11_dvbt_data_bin      ,  sizeof(octopus_hw11_dvbt_data_bin)  },
   {"octopus-hw11-dvbt-2048_data.bin"  ,"dvb standard modulation 2K"       ,octopus_hw11_dvbt_2048_data_bin ,  sizeof(octopus_hw11_dvbt_2048_data_bin)  },
   {"octopus-hw11-dvbt-4096_data.bin"  ,"dvb standard modulation 4K"       ,octopus_hw11_dvbt_4096_data_bin ,  sizeof(octopus_hw11_dvbt_4096_data_bin)  },
   {"octopus-hw12-dvbt-8192.bin"       ,"dvb standard modulation 8K"       ,octopus_hw12_dvbt_8192_bin      ,  sizeof(octopus_hw12_dvbt_8192_bin)  },
   {"octopus-hw12-dvbt-8192_data.bin"  ,"dvb standard modulation 8K"       ,octopus_hw12_dvbt_8192_data_bin ,  sizeof(octopus_hw12_dvbt_8192_data_bin)  },
   {"reflex_dvbt.bin",                "femtos for dvbt"                    ,reflex_dvbt,                       sizeof(reflex_dvbt)},
#endif
#if DIB_ISDBT_STD == 1
   {"octopus-hw11-spal3-isdbt.bin"  ,"isdbt standard only"                        ,  octopus_hw11_spal3_isdbt_bin          , sizeof(octopus_hw11_spal3_isdbt_bin)  },
   {"octopus-hw11-spal3-isdbt-8205_data.bin", "isdbt standard modulation 8K 13seg",  octopus_hw11_spal3_isdbt_8205_data_bin, sizeof(octopus_hw11_spal3_isdbt_8205_data_bin) },
   {"octopus-hw11-spal3-isdbt-8195_data.bin"  ,"isdbt standard modulation 8K 3 seg", octopus_hw11_spal3_isdbt_8195_data_bin, sizeof(octopus_hw11_spal3_isdbt_8195_data_bin)  },
   {"octopus-hw11-spal3-isdbt-8193_data.bin", "isdbt standard modulation 8K  1seg",  octopus_hw11_spal3_isdbt_8193_data_bin, sizeof(octopus_hw11_spal3_isdbt_8193_data_bin) },
   {"octopus-hw11-spal3-isdbt-4109_data.bin"  ,"isdbt standard modulation 4K 13seg", octopus_hw11_spal3_isdbt_4109_data_bin, sizeof(octopus_hw11_spal3_isdbt_4109_data_bin)  },
   {"octopus-hw11-spal3-isdbt-2061_data.bin"  ,"isdbt standard modulation 2K"     ,  octopus_hw11_spal3_isdbt_2061_data_bin, sizeof(octopus_hw11_spal3_isdbt_2061_data_bin)  },
#endif
#if DIB_DAB_STD == 1
   {"octopus-hw11-spal-dab.bin"           ,"dab standard code"             ,octopus_hw11_spal_dab_bin          ,  sizeof(octopus_hw11_spal_dab_bin)           },
   {"octopus-hw11-spal-dab-tm-1_data.bin" ,"dab standard TMODE-I (2K)"     ,octopus_hw11_spal_dab_tm_1_data_bin,  sizeof(octopus_hw11_spal_dab_tm_1_data_bin)  },
   {"octopus-hw11-spal-dab-tm-2_data.bin" ,"dab standard TMODE-II (1/2K)"  ,octopus_hw11_spal_dab_tm_2_data_bin,  sizeof(octopus_hw11_spal_dab_tm_2_data_bin)  },
   {"octopus-hw11-spal-dab-tm-3_data.bin" ,"dab standard TMODE-III (1/4K)" ,octopus_hw11_spal_dab_tm_3_data_bin,  sizeof(octopus_hw11_spal_dab_tm_3_data_bin)  },
   {"octopus-hw11-spal-dab-tm-4_data.bin" ,"dab standard TMODE-IV (2K)"    ,octopus_hw11_spal_dab_tm_4_data_bin,  sizeof(octopus_hw11_spal_dab_tm_4_data_bin)  },
#endif
#if DIB_CTTB_STD == 1
    {"octopus-hw12-spal3-cttb-420.bin"       , "cttb standard code Guard 420"              ,octopus_hw12_spal3_cttb_420_bin          ,  sizeof(octopus_hw12_spal3_cttb_420_bin)          },
    {"octopus-hw12-spal3-cttb-420_data.bin"  , "cttb standard data Guard 420"              ,octopus_hw12_spal3_cttb_420_data_bin     ,  sizeof(octopus_hw12_spal3_cttb_420_data_bin)     },
    {"octopus-hw12-spal3-cttb-595.bin"       , "cttb standard code Guard 595"              ,octopus_hw12_spal3_cttb_595_bin          ,  sizeof(octopus_hw12_spal3_cttb_595_bin)          },
    {"octopus-hw12-spal3-cttb-595_data.bin"  , "cttb standard data Guard 595"              ,octopus_hw12_spal3_cttb_595_data_bin     ,  sizeof(octopus_hw12_spal3_cttb_595_data_bin)     },
    {"octopus-hw12-spal3-cttb-945.bin"       , "cttb standard code Guard 945"              ,octopus_hw12_spal3_cttb_945_bin          ,  sizeof(octopus_hw12_spal3_cttb_945_bin)          },
    {"octopus-hw12-spal3-cttb-945_data.bin"  , "cttb standard data Guard 945"              ,octopus_hw12_spal3_cttb_945_data_bin     ,  sizeof(octopus_hw12_spal3_cttb_945_data_bin)     },
    {"reflex_cttb.bin"                       , "femtos for cttb"                           ,reflex_cttb                              ,  sizeof(reflex_cttb)                              },
#endif
    {""                             ,""                              ,0                             ,  0                                     }
};

#endif
