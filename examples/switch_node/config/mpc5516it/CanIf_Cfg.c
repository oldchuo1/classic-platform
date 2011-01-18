/*
 * Configuration of module CanIf (CanIf_Cfg.c)
 *
 * Created by: ArcCore AB
 * Configured for (MCU): MPC551x
 *
 * Module vendor: ArcCore
 * Module version: 2.0.4
 *
 * Copyright ArcCore AB 2010
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Jan 17 12:24:21 CET 2011
 */


 
#include "CanIf.h"
#if defined(USE_CANTP)
#include "CanTp.h"
#include "CanTp_Cbk.h"
#endif
#if defined(USE_PDUR)
#include "PduR.h"
#endif
#if defined(USE_CANNM)
#include "CanNm_Cbk.h"
#endif
#include <stdlib.h>


// Imported structs from Can_Lcfg.c
extern const Can_ControllerConfigType CanControllerConfigData[];
extern const Can_ConfigSetType CanConfigSetData;



// Contains the mapping from CanIf-specific Channels to Can Controllers
const CanControllerIdType CanIf_Arc_ChannelToControllerMap[CANIF_CHANNEL_CNT] = {
	FLEXCAN_A, // CHANNEL_0
};

const uint8 CanIf_Arc_ChannelDefaultConfIndex[CANIF_CHANNEL_CNT] = {
	CANIF_CHANNEL_0_CONFIG_0,
};

// Container that gets slamed into CanIf_InitController()
// Inits ALL controllers
// Multiplicity 1..*
const CanIf_ControllerConfigType CanIfControllerConfig[] = {
	// This is the ConfigurationIndex in CanIf_InitController()
	
	
	{ 
		.WakeupSupport = CANIF_WAKEUP_SUPPORT_NO_WAKEUP,
		.CanIfControllerIdRef = CANIF_CHANNEL_0,
		.CanIfDriverNameRef = "FLEXCAN",  // Not used
		.CanIfInitControllerRef = &CanControllerConfigData[0],
	},
	
};

// Function callbacks for higher layers
const CanIf_DispatchConfigType CanIfDispatchConfig =
{
  .CanIfBusOffNotification = NULL,
  .CanIfWakeUpNotification = NULL,        // Not used
  .CanIfWakeupValidNotification = NULL,   // Not used
  .CanIfErrorNotificaton = NULL,
};


// Data for init configuration CanIfInitConfiguration

		

const CanIf_HthConfigType CanIfHthConfigData_Hoh_1[] =
{
		
  { 
    .CanIfHthType = CAN_ARC_HANDLE_TYPE_BASIC,
    .CanIfCanControllerIdRef = CANIF_CHANNEL_0,
    .CanIfHthIdSymRef = HWObj_1,
    .CanIf_Arc_EOL = 1,
  },
};

const CanIf_HrhConfigType CanIfHrhConfigData_Hoh_1[] =
{
};


const CanIf_InitHohConfigType CanIfHohConfigData[] = { 
		
	{
		.CanConfigSet = &CanConfigSetData,
		.CanIfHrhConfig = CanIfHrhConfigData_Hoh_1,
	    .CanIfHthConfig = CanIfHthConfigData_Hoh_1,
    	.CanIf_Arc_EOL = 1,
	},
};
	  
const CanIf_TxPduConfigType CanIfTxPduConfigData[] = {	
  {
    .CanIfTxPduId = PDUR_SOURCE_PDU_ID_LedCommandTx,
    .CanIfCanTxPduIdCanId = 291,
    .CanIfCanTxPduIdDlc = 8,
    .CanIfCanTxPduType = CANIF_PDU_TYPE_STATIC,
#if ( CANIF_READTXPDU_NOTIFY_STATUS_API == STD_ON )
    .CanIfReadTxPduNotifyStatus = true, 
#endif
    .CanIfTxPduIdCanIdType = CANIF_CAN_ID_TYPE_29,
    .CanIfUserTxConfirmation = PduR_CanIfTxConfirmation,
    .CanIfCanTxPduHthRef = &CanIfHthConfigData_Hoh_1[0],
    .PduIdRef = NULL,
  },  
};

const CanIf_RxPduConfigType CanIfRxPduConfigData[] = {  
};

// This container contains the init parameters of the CAN
// Multiplicity 1..*
const CanIf_InitConfigType CanIfInitConfig =
{
  .CanIfConfigSet = 0, // Not used
  .CanIfNumberOfCanRxPduIds = sizeof(CanIfRxPduConfigData)/sizeof(CanIf_RxPduConfigType),
  .CanIfNumberOfCanTXPduIds = sizeof(CanIfTxPduConfigData)/sizeof(CanIf_TxPduConfigType),
  .CanIfNumberOfDynamicCanTXPduIds = 0, // Not used

  // Containers
  .CanIfHohConfigPtr = CanIfHohConfigData,
  .CanIfRxPduConfigPtr = CanIfRxPduConfigData,
  .CanIfTxPduConfigPtr = CanIfTxPduConfigData,
};

	// This container includes all necessary configuration sub-containers
// according the CAN Interface configuration structure.
CanIf_ConfigType CanIf_Config =
{
  .ControllerConfig = CanIfControllerConfig,
  .DispatchConfig = &CanIfDispatchConfig,
  .InitConfig = &CanIfInitConfig,
  .TransceiverConfig = NULL, // Not used
  .Arc_ChannelToControllerMap = CanIf_Arc_ChannelToControllerMap,  
  .Arc_ChannelDefaultConfIndex = CanIf_Arc_ChannelDefaultConfIndex,
};

