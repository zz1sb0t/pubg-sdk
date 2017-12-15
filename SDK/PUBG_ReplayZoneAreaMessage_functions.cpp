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

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayZoneAreaMessage_C::UpdateReplayZoneAreaMessage()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x56fb4d81);

	UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReplayZoneAreaMessage_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8b30e0ca);

	UReplayZoneAreaMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayZoneAreaMessage_C::CustomTick()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x959d14fd);

	UReplayZoneAreaMessage_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.TimerCheckReplayZoneArea
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayZoneAreaMessage_C::TimerCheckReplayZoneArea()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd81dc40a);

	UReplayZoneAreaMessage_C_TimerCheckReplayZoneArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayZoneAreaMessage_C::ExecuteUbergraph_ReplayZoneAreaMessage(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x618ec270);

	UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
