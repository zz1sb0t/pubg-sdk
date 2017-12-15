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

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTagManagerWidget_C::CustomTick()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x998b407b);

	UObserverTagManagerWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.TimerCheckUpdateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTagManagerWidget_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x458d0743);

	UObserverTagManagerWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObserverTagManagerWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6e3167e0);

	UObserverTagManagerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTagManagerWidget_C::ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc9894462);

	UObserverTagManagerWidget_C_ExecuteUbergraph_ObserverTagManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
