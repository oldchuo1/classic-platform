/*
 * Configuration of module Com (Com_Cfg.h)
 *
 * Created by: ArcCore AB
 * Configured for (MCU): MPC551x
 *
 * Module vendor: ArcCore
 * Module version: 2.0.5
 *
 * Copyright ArcCore AB 2010
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Jan 17 12:24:21 CET 2011
 */


#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 1)) )
#error "Com: Configuration file version differs from BSW version."
#endif


#ifndef COM_CFG_H
#define COM_CFG_H

#define COM_MODULE_ID 20
#define COM_INSTANCE_ID 1

//#define COM_DEV_ERROR_DETECT

#define COM_N_IPDUS 1
#define COM_N_SIGNALS 1
#define COM_N_GROUP_SIGNALS 0

#define COM_E_INVALID_FILTER_CONFIGURATION 101
#define COM_E_INITIALIZATION_FAILED 102
#define COM_E_INVALID_SIGNAL_CONFIGURATION 103
#define COM_INVALID_PDU_ID 104
#define COM_ERROR_SIGNAL_IS_SIGNALGROUP 105

#define COM_E_TOO_MANY_IPDU 106
#define COM_E_TOO_MANY_SIGNAL 107
#define COM_E_TOO_MANY_GROUPSIGNAL 108

#define CPU_ENDIANESS COM_BIG_ENDIAN

#define ComConfigurationTimeBase 0.0
#define ComVersionInfoApi

#endif /*COM_CFG_H*/
