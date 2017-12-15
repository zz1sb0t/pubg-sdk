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

// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimelineDBNOEventItem_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x44e233e4);

	UReplayTimelineDBNOEventItem_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UReplayTimelineDBNOEventItem_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xcab55c05);

	UReplayTimelineDBNOEventItem_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.GetToolTipText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UReplayTimelineDBNOEventItem_C::GetToolTipText()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa0ff366b);

	UReplayTimelineDBNOEventItem_C_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.OnGotoTimelineDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayTimelineDBNOEventItem_C::OnGotoTimelineDone()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x659d1f0c);

	UReplayTimelineDBNOEventItem_C_OnGotoTimelineDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimelineDBNOEventItem.ReplayTimelineDBNOEventItem_C.ExecuteUbergraph_ReplayTimelineDBNOEventItem
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayTimelineDBNOEventItem_C::ExecuteUbergraph_ReplayTimelineDBNOEventItem(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa01aac4d);

	UReplayTimelineDBNOEventItem_C_ExecuteUbergraph_ReplayTimelineDBNOEventItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
