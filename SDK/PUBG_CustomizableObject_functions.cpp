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

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bForceReuseResources           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bForceReuseResources)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x30bedefd);

	UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params params;
	params.bForceReuseResources = bForceReuseResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bForceReuseResources           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableSkeletalComponent::UpdateSkeletalMesh(bool bForceReuseResources)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd4b23d9f);

	UCustomizableSkeletalComponent_UpdateSkeletalMesh_Params params;
	params.bForceReuseResources = bForceReuseResources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCustomizableObjectInstance::SetRandomValues()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x73d113d3);

	UCustomizableObjectInstance_SetRandomValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
