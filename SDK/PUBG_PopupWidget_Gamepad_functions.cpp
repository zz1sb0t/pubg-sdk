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

// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.SetPopup
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPopupWidget_Gamepad_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5cea21e9);

	UPopupWidget_Gamepad_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2a55dc62);

	UPopupWidget_Gamepad_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb53d06e3);

	UPopupWidget_Gamepad_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4bf3d2fe);

	UPopupWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Custom Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::Custom_Event_1()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xfa610252);

	UPopupWidget_Gamepad_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::Destruct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x45e25bbd);

	UPopupWidget_Gamepad_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.XBoxOneOk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::XBoxOneOk()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8a411ffa);

	UPopupWidget_Gamepad_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.Custom Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::Custom_Event_2()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd45e87e9);

	UPopupWidget_Gamepad_C_Custom_Event_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.XBoxOneCancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopupWidget_Gamepad_C::XBoxOneCancel()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7e0f5a62);

	UPopupWidget_Gamepad_C_XBoxOneCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.ExecuteUbergraph_PopupWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidget_Gamepad_C::ExecuteUbergraph_PopupWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5ae52f1b);

	UPopupWidget_Gamepad_C_ExecuteUbergraph_PopupWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget_Gamepad.PopupWidget_Gamepad_C.ButtonClickDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidget_Gamepad_C::ButtonClickDispatcher__DelegateSignature(EPopupButtonID NewParam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x183b2b39);

	UPopupWidget_Gamepad_C_ButtonClickDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
