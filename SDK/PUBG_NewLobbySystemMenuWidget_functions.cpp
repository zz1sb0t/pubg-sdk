// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.QuitGame
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupButtonID                 Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewLobbySystemMenuWidget_C::QuitGame(EPopupButtonID Button)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5c719fcc);

	UNewLobbySystemMenuWidget_C_QuitGame_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVersionText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UNewLobbySystemMenuWidget_C::GetVersionText()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9d7ac766);

	UNewLobbySystemMenuWidget_C_GetVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetMainCoherentWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*     Browser                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewLobbySystemMenuWidget_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb9da9ac8);

	UNewLobbySystemMenuWidget_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Browser != nullptr)
		*Browser = params.Browser;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.LobbyReoload
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UNewLobbySystemMenuWidget_C::LobbyReoload()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1a2f2db5);

	UNewLobbySystemMenuWidget_C_LobbyReoload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewLobbySystemMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5da94385);

	UNewLobbySystemMenuWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UNewLobbySystemMenuWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc855641e);

	UNewLobbySystemMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewLobbySystemMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8bca66c4);

	UNewLobbySystemMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x711a58c);

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x55b16151);

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbbc136dd);

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa28167d4);

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.ExecuteUbergraph_NewLobbySystemMenuWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNewLobbySystemMenuWidget_C::ExecuteUbergraph_NewLobbySystemMenuWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe5de236b);

	UNewLobbySystemMenuWidget_C_ExecuteUbergraph_NewLobbySystemMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
