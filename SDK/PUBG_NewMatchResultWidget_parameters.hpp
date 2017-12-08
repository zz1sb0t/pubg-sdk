#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NewMatchResultWidget.NewMatchResultWidget_C.OnPrepass_GamepadSpectaingButton
struct UNewMatchResultWidget_C_OnPrepass_GamepadSpectaingButton_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetBackground_2
struct UNewMatchResultWidget_C_GetBackground_2_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetBackground_1
struct UNewMatchResultWidget_C_GetBackground_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.SwapHumanZombieBoxPosition
struct UNewMatchResultWidget_C_SwapHumanZombieBoxPosition_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetText_2
struct UNewMatchResultWidget_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetText_1
struct UNewMatchResultWidget_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateZombieGroup
struct UNewMatchResultWidget_C_UpdateZombieGroup_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateHumanGroup
struct UNewMatchResultWidget_C_UpdateHumanGroup_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateZombieModeMatchResult
struct UNewMatchResultWidget_C_UpdateZombieModeMatchResult_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.Get_TextBlock_72_Text_1
struct UNewMatchResultWidget_C_Get_TextBlock_72_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.Get_ButtonKillcam_ToolTipText_1
struct UNewMatchResultWidget_C_Get_ButtonKillcam_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_ButtonKillcam_Prepass_1
struct UNewMatchResultWidget_C_On_ButtonKillcam_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetAliveTeamMemberCount
struct UNewMatchResultWidget_C_GetAliveTeamMemberCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetTslGameState
struct UNewMatchResultWidget_C_GetTslGameState_Params
{
	class ATslGameState*                               TslGameState;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GetTslPlayerState
struct UNewMatchResultWidget_C_GetTslPlayerState_Params
{
	class ATslPlayerState*                             PlayerState;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_ButtonReportPrepass_1
struct UNewMatchResultWidget_C_On_ButtonReportPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateObserverMatchResult
struct UNewMatchResultWidget_C_UpdateObserverMatchResult_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.IsGameOver
struct UNewMatchResultWidget_C_IsGameOver_Params
{
	bool                                               return_value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.SetResultScoreValues
struct UNewMatchResultWidget_C_SetResultScoreValues_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.SetReferences
struct UNewMatchResultWidget_C_SetReferences_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_MatchResultWindow_Prepass_1
struct UNewMatchResultWidget_C_On_MatchResultWindow_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_DetailScoreLayer_Prepass_1
struct UNewMatchResultWidget_C_On_DetailScoreLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_BigRankBox_Prepass_1
struct UNewMatchResultWidget_C_On_BigRankBox_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.SetResultDefaultValues
struct UNewMatchResultWidget_C_SetResultDefaultValues_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_ButtonSpectator_Prepass_1
struct UNewMatchResultWidget_C_On_ButtonSpectator_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.GoToLobby
struct UNewMatchResultWidget_C_GoToLobby_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.OnActionInput
struct UNewMatchResultWidget_C_OnActionInput_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.OnHiddenWidget
struct UNewMatchResultWidget_C_OnHiddenWidget_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.ShowLobbyPopup
struct UNewMatchResultWidget_C_ShowLobbyPopup_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.Destruct
struct UNewMatchResultWidget_C_Destruct_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UNewMatchResultWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
struct UNewMatchResultWidget_C_BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UNewMatchResultWidget_C_BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.Tick
struct UNewMatchResultWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
struct UNewMatchResultWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.XBoxOnOk
struct UNewMatchResultWidget_C_XBoxOnOk_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.Construct
struct UNewMatchResultWidget_C_Construct_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
struct UNewMatchResultWidget_C_BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonKillcam_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
struct UNewMatchResultWidget_C_BndEvt__ButtonKillcam_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.OnSpectator
struct UNewMatchResultWidget_C_OnSpectator_Params
{
};

// Function NewMatchResultWidget.NewMatchResultWidget_C.ExecuteUbergraph_NewMatchResultWidget
struct UNewMatchResultWidget_C_ExecuteUbergraph_NewMatchResultWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
