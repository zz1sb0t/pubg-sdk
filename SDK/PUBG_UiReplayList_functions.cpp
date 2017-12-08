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

// Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::ChangeCloseButtonForTest()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2e4b6ee0);

	UUiReplayList_C_ChangeCloseButtonForTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ResetRecorderStatistics
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::ResetRecorderStatistics()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd5e45b75);

	UUiReplayList_C_ResetRecorderStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ResetSummary
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::ResetSummary()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6b729712);

	UUiReplayList_C_ResetSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsReplayBusy                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiReplayList_C::CheckReplayBusyStatus(bool* bIsReplayBusy)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x22cc9e1b);

	UUiReplayList_C_CheckReplayBusyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReplayBusy != nullptr)
		*bIsReplayBusy = params.bIsReplayBusy;
}


// Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       inReplaySummary                (CPF_Parm)

void UUiReplayList_C::UpdateRecorderStatistics(const struct FTslReplaySummary& inReplaySummary)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbd97e125);

	UUiReplayList_C_UpdateRecorderStatistics_Params params;
	params.inReplaySummary = inReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.UpdateTeamText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       inReplaySummary                (CPF_Parm)

void UUiReplayList_C::UpdateTeamText(const struct FTslReplaySummary& inReplaySummary)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x34095754);

	UUiReplayList_C_UpdateTeamText_Params params;
	params.inReplaySummary = inReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.SetShouldKeep
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bShouldKeep                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiReplayList_C::SetShouldKeep(bool bShouldKeep)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x80d994e9);

	UUiReplayList_C_SetShouldKeep_Params params;
	params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.UpdateReplaySummary
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       ReplaySummary                  (CPF_Parm)

void UUiReplayList_C::UpdateReplaySummary(const struct FTslReplaySummary& ReplaySummary)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbb20eac9);

	UUiReplayList_C_UpdateReplaySummary_Params params;
	params.ReplaySummary = ReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.SetReplayItemToProcess
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (CPF_Parm, CPF_ZeroConstructor)
// struct FReplayItem             inReplayItem                   (CPF_Parm)

void UUiReplayList_C::SetReplayItemToProcess(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xcad05a9b);

	UUiReplayList_C_SetReplayItemToProcess_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.HidePageWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::HidePageWidget()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc8c08d54);

	UUiReplayList_C_HidePageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ShowPageWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::ShowPageWidget()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3f76ad9f);

	UUiReplayList_C_ShowPageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ClearReplayList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::ClearReplayList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x38614fc1);

	UUiReplayList_C_ClearReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb9fd68c8);

	UUiReplayList_C_BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd47abdd8);

	UUiReplayList_C_BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x174f788c);

	UUiReplayList_C_BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8504af1b);

	UUiReplayList_C_BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x24000c79);

	UUiReplayList_C_BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa0c6bce5);

	UUiReplayList_C_BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x62130c34);

	UUiReplayList_C_BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x952571b0);

	UUiReplayList_C_BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiReplayList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbec4a606);

	UUiReplayList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd8551a3b);

	UUiReplayList_C_BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xaa54e4f5);

	UUiReplayList_C_BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xcfe03efd);

	UUiReplayList_C_BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5003a2f5);

	UUiReplayList_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x789aab82);

	UUiReplayList_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xefe3e0ac);

	UUiReplayList_C_BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x70419e83);

	UUiReplayList_C_BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Remains                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiReplayList_C::OnKeepAndDeleteOldestReplaysDoneEvent(int Remains)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbb826bdc);

	UUiReplayList_C_OnKeepAndDeleteOldestReplaysDoneEvent_Params params;
	params.Remains = Remains;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       ReplaySummary                  (CPF_Parm)

void UUiReplayList_C::OnGetReplaySummaryEvent(const struct FTslReplaySummary& ReplaySummary)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb8975fb);

	UUiReplayList_C_OnGetReplaySummaryEvent_Params params;
	params.ReplaySummary = ReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUiReplayList_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf9dccc);

	UUiReplayList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiReplayList_C::ExecuteUbergraph_UiReplayList(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xaff7c56a);

	UUiReplayList_C_ExecuteUbergraph_UiReplayList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::DeleteReplayEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x211e5b2a);

	UUiReplayList_C_DeleteReplayEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::QuitApplicationEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x63dae0bd);

	UUiReplayList_C_QuitApplicationEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::GoPageEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf3b567f5);

	UUiReplayList_C_GoPageEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::PrevPageEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xceb88580);

	UUiReplayList_C_PrevPageEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUiReplayList_C::NextPageEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x48edfd0c);

	UUiReplayList_C_NextPageEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (CPF_Parm, CPF_ZeroConstructor)

void UUiReplayList_C::UpdateReplayList__DelegateSignature(const struct FString& RegionOrLocal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe1ab5876);

	UUiReplayList_C_UpdateReplayList__DelegateSignature_Params params;
	params.RegionOrLocal = RegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
