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

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.QuitGame
struct UNewLobbySystemMenuWidget_C_QuitGame_Params
{
	EPopupButtonID                                     Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVersionText
struct UNewLobbySystemMenuWidget_C_GetVersionText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetMainCoherentWidget
struct UNewLobbySystemMenuWidget_C_GetMainCoherentWidget_Params
{
	class UCoherentUIGTWidget*                         Browser;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.LobbyReoload
struct UNewLobbySystemMenuWidget_C_LobbyReoload_Params
{
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.PreConstruct
struct UNewLobbySystemMenuWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Construct
struct UNewLobbySystemMenuWidget_C_Construct_Params
{
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Tick
struct UNewLobbySystemMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
struct UNewLobbySystemMenuWidget_C_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature
struct UNewLobbySystemMenuWidget_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature
struct UNewLobbySystemMenuWidget_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature
struct UNewLobbySystemMenuWidget_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.ExecuteUbergraph_NewLobbySystemMenuWidget
struct UNewLobbySystemMenuWidget_C_ExecuteUbergraph_NewLobbySystemMenuWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
