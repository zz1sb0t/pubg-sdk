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

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf4391ec5);

	USubmixEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bBypassed                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe1e7caba);

	UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            EntryIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3f265227);

	UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc10c7bf0);

	UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UAudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd97defcb);

	UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf1a7fd38);

	UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSourcePresetChain* PresetChain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSourceEffectChainEntry Entry                          (CPF_Parm, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x907a947f);

	UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundEffectSubmixPreset* SubmixEffectPreset             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4c5aabd3);

	UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UReverbEffect*           InReverbEffect                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          WetLevel                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5b43bac6);

	USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd9d1a1fd);

	USubmixEffectReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb7b46613);

	USubmixEffectSubmixEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Stop()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x40c51dc9);

	USynthComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Start
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponent::Start()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa933599b);

	USynthComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundSubmix*            Submix                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SendLevel                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USynthComponent::SetSubmixSend(class USoundSubmix* Submix, float SendLevel)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x881f2c6d);

	USynthComponent_SetSubmixSend_Params params;
	params.Submix = Submix;
	params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USynthComponent::IsPlaying()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4d8cfda9);

	USynthComponent_IsPlaying_Params params;

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
