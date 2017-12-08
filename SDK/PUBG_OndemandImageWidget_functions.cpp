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

// Function OndemandImageWidget.OnDemandImageWidget_C.UnloadAndHideImage
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnDemandImageWidget_C::UnloadAndHideImage()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x46f4c2f0);

	UOnDemandImageWidget_C_UnloadAndHideImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.LoadAndShowImage
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnDemandImageWidget_C::LoadAndShowImage()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe565e52c);

	UOnDemandImageWidget_C_LoadAndShowImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.UpdateVisibility
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnDemandImageWidget_C::UpdateVisibility()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1810b7e0);

	UOnDemandImageWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.SetImagePath
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture>      TextureAsset                   (CPF_Parm)

void UOnDemandImageWidget_C::SetImagePath(TAssetPtr<class UTexture> TextureAsset)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb7dceff5);

	UOnDemandImageWidget_C_SetImagePath_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnDemandImageWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x991e802e);

	UOnDemandImageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnDemandImageWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x30e81474);

	UOnDemandImageWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnDemandImageWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x20bee1cd);

	UOnDemandImageWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.ExecuteUbergraph_OnDemandImageWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnDemandImageWidget_C::ExecuteUbergraph_OnDemandImageWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x15564584);

	UOnDemandImageWidget_C_ExecuteUbergraph_OnDemandImageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
