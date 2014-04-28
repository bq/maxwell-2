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

/**************************************************************************************************
* @file "DibBoardMod29098SHA.h"
* @brief MOD29098 board parameters.
*
***************************************************************************************************/
#include "DibConfig.h" /* Must be first include of all SDK files - Defines compilation options */

#if (DIB_BOARD_MOD29098SHA == 1)

#include "DibBoardSelection.h"
#include "../Firmware/firm_ram_voyager.h"
#include "../Firmware/subfirm_ram_voyager.h"
#include "DibMsgMac.h"

static struct DibDriverDragonflyRegisters  Map29098SHA = 
{
   /* JedecAddr       */ JEDEC_ADDR ,
   /* JedecValue      */ JEDEC_REG_VALUE ,
   /* TxRxBufAddr     */ MSG_API_BUF_ADDR ,
   /* FirmwareAddr    */ FIRMRAM_START_ADDR ,
   /* EntryPoint      */ ENTRY_POINT_ADDR ,
   /* SubFirmwareAddr */ SUBFIRMRAM_START_ADDR ,
   /* MainCounterAddr */ MAIN_COUNTER_ADDR ,
   /* CryptedDataAddr */ CRYPTED_DATA_ADDR ,
   /* CryptedKeyAddr  */ CRYPTED_KEY_ADDR ,
   /* CryptedIVAddr   */ CRYPTED_IV_ADDR ,
   /* DownloadModeReg */ DOWNLOAD_MODE_REG ,
   /* JumpAddressReg  */ JUMP_ADDRESS_REG ,
   /* FirmwareAddrReg */ FIRMWARE_ADDR_REG ,
   /* HostStatusReg   */ HOST_STATUS_REG ,
   /* FirmwareIdReg   */ FIRMWARE_ID_REG ,
   /* MacMbxSize      */ MAC_MBX_SIZE        ,
   /* MacMbxStart     */ MAC_MBX_START_ADDR ,
   /* MacMbxEnd       */ MAC_MBX_END_ADDR ,
   /* HostMbxSize     */ HOST_MBX_SIZE        ,
   /* HostMbxStart    */ HOST_MBX_START_ADDR ,
   /* HostMbxEnd      */ HOST_MBX_END_ADDR ,
   /* HostMbxRdPtrReg */ HOST_MBX_RD_PTR_REG ,
   /* HostMbxWrPtrReg */ HOST_MBX_WR_PTR_REG ,
   /* MacMbxRdPtrReg  */ MAC_MBX_RD_PTR_REG ,
   /* MacMbxWrPtrReg  */ MAC_MBX_WR_PTR_REG ,
};


struct DibDemodBoardConfig ConfigMod29098SHA =
{
   DIB_DEMOD_9000,
   DIB_TUNER_0090,
   DIB_VOYAGER,
   VERSION(1,0),
   2,          /* NbFrontends        */
   0,          /* SramDelayAddLatch  */
   1,          /* HBM only           */
   3,          /* Board Cfg          */
   0x0805,     /* RegSramCfg1805     */
   85,         /* DefAgcDynamicsDb   */
   0,          /* NO LNA             */
   0,          /* 0 Lna triggers     */
   NULL,       /* Lna Trigger table  */
   {0, 0},      /* Gpio default direction */
   {0, 0},      /* Gpio default value */
   NULL,        /* LayoutInit */
   {
      /* FeCfg */
      {
         /* FeCfg[0] */
         {
           /* UDemod */
           { 0 }, /* Dib7000 */
           /* Dib9000 */
           {
           sizeof(FirmRamArray), (const uint8_t *)FirmRamArray,
           sizeof(SubFirmRamArray), (const uint8_t *)SubFirmRamArray,
           &Map29098SHA,
           &DibPllConfig9080,
           /* AGCdrain AGC drv     AGC slew    I2C drv     I2C slew   IOCLK dr   IOCLK sl   HOST drv   HOST slew  SRAM drv   SRAM slew */
           (1 << 15) | (1 << 13) | (0 << 12) | (1 << 10) | (0 << 9) | (1 << 7) | (0 << 6) | (3 << 4) | (0 << 3) | (3 << 1) | (0),
           },
        },
        {   /* Gpio */
           { GPIO_FUNC_INIT,      0xffff, 0x001e, 0x0021 },
           { GPIO_FUNC_TUNER_ON,  0X0031, 0x0000, 0x0030 },
           { GPIO_FUNC_TUNER_OFF, 0X0031, 0x0000, 0x0021 },
        },
        {   /* SubBand */
           0, 0, 0,
           {
           { 0 }, /* subband[0] */
        }
      },
      18,
      0,  /* TunerI2CAdd */
      {   /* UTuner */
         {0},           /* Dib0070 */
         {0, 0, 30000}, /* Dib0080 */
      },
      0, /* No PMUIsPresent */
      {
         { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
      },
    },
    {    /* FeCfg[1] */
      {
         /* UDemod */
         {
            /* Dib7000 */
            0, NULL, /* No microcode on the slave */
            0, NULL, /* No microcode on the slave */
            0,       /* HostBusDiversity          */
            0,       /* TunerIsBaseband           */
            0,
            0,
            0,
         },
         {0}, /* Dib9000 */
      },
         {   /* Gpio */
            { GPIO_FUNC_INIT, 0, 0, 0},
            { GPIO_FUNC_INIT, 0, 0, 0},
            { GPIO_FUNC_INIT, 0, 0, 0},
            { GPIO_FUNC_INIT, 0, 0, 0}
         },
         {   /* SubBand */
            0, 0, 0,
            {
            {0}, /* SubBand[0] */
            }
         },
         0,
         0,
         {   /* UTuner */
         {0, 0, 0, 0, 0},  /* Dib0070 */
         {0},              /* Dib0080 */
         },
   },
}
};
#endif
