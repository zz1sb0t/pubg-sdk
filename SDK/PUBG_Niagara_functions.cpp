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

// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInRenderingEnabled            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2727c393);

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (CPF_Parm, CPF_ZeroConstructor)
// struct FVector4                InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x785b9c7d);

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (CPF_Parm, CPF_ZeroConstructor)
// struct FVector                 InValue                        (CPF_Parm, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6542d42);

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (CPF_Parm, CPF_ZeroConstructor)
// struct FVector2D                 InValue                        (CPF_Parm, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2c56a7ab);

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (CPF_Parm, CPF_ZeroConstructor)
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6c478463);

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (CPF_Parm, CPF_ZeroConstructor)
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x23f781bb);

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraStaticMeshDataInterfaceActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (CPF_Parm, CPF_ZeroConstructor)
// class AActor*                  InSource                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraStaticMeshDataInterfaceActor(const struct FString& InVariableName, class AActor* InSource)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x764c29ba);

	UNiagaraComponent_SetNiagaraStaticMeshDataInterfaceActor_Params params;
	params.InVariableName = InVariableName;
	params.InSource = InSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraEmitterSpawnRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (CPF_Parm, CPF_ZeroConstructor)
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UNiagaraComponent::SetNiagaraEmitterSpawnRate(const struct FString& InEmitterName, float InValue)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbd1a0152);

	UNiagaraComponent_SetNiagaraEmitterSpawnRate_Params params;
	params.InEmitterName = InEmitterName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ResetEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNiagaraComponent::ResetEffect()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x15d367b6);

	UNiagaraComponent_ResetEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ReinitializeEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UNiagaraComponent::ReinitializeEffect()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3ed6e056);

	UNiagaraComponent_ReinitializeEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UNiagaraEffect*          EffectTemplate                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                  Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoDestroy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2b01b7d6);

	UNiagaraFunctionLibrary_SpawnEffectAttached_Params params;
	params.EffectTemplate = EffectTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNiagaraEffect*          EffectTemplate                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                  Rotation                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           bAutoDestroy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1a979ce8);

	UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EffectTemplate = EffectTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
