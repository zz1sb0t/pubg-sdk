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

// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.On_StanceManagerCanvas_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_StanceManagerWidget_C::On_StanceManagerCanvas_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe6eb709d);

	UBP_StanceManagerWidget_C_On_StanceManagerCanvas_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerShow
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_StanceManagerWidget_C::SetStanceManagerShow()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7ae727d);

	UBP_StanceManagerWidget_C_SetStanceManagerShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.SetStanceManagerHide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_StanceManagerWidget_C::SetStanceManagerHide()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9e7e7b5e);

	UBP_StanceManagerWidget_C_SetStanceManagerHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnDriver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_StanceManagerWidget_C::OnDriver()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5bb07a3e);

	UBP_StanceManagerWidget_C_OnDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.OnRider
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_StanceManagerWidget_C::OnRider()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8741007c);

	UBP_StanceManagerWidget_C_OnRider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StanceManagerWidget.BP_StanceManagerWidget_C.ExecuteUbergraph_BP_StanceManagerWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_StanceManagerWidget_C::ExecuteUbergraph_BP_StanceManagerWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa1aca4c9);

	UBP_StanceManagerWidget_C_ExecuteUbergraph_BP_StanceManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
