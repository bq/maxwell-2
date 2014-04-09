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
* @file "DibBridgeTargetDebug.h"
* @brief Target Specific.
*
***************************************************************************************************/
#ifndef DIB_BRIDGE_TARGET_DEBUG_H
#define DIB_BRIDGE_TARGET_DEBUG_H

#define DibBridgeTargetLogFunction    printf

#define DIB_ASSERT( foo ) { if( ! (foo) ) { printf(CRB "DIB_ASSERT FAILED in %s at line %d" CRA,__FILE__,__LINE__); } }

#endif
