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

// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::On_TeamList_Prepass_2(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x564b6980);

	UObserverTeamInfoList_C_On_TeamList_Prepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CollapseAllSquadPlayerInfos
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::CollapseAllSquadPlayerInfos()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x27e709a1);

	UObserverTeamInfoList_C_CollapseAllSquadPlayerInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.SetSquadPlayerInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USquadPlayerInfoWidget_C* SquadPlayerInfo                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::SetSquadPlayerInfo(int Index, class ATslCharacter* TslCharacter, class USquadPlayerInfoWidget_C** SquadPlayerInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xcda2c588);

	UObserverTeamInfoList_C_SetSquadPlayerInfo_Params params;
	params.Index = Index;
	params.TslCharacter = TslCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SquadPlayerInfo != nullptr)
		*SquadPlayerInfo = params.SquadPlayerInfo;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.DestructSquadPlayerInfoPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::DestructSquadPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8acf26fa);

	UObserverTeamInfoList_C_DestructSquadPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ConstructSquadPlayerInfoPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::ConstructSquadPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb6f5a89f);

	UObserverTeamInfoList_C_ConstructSquadPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.On_TeamList_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::On_TeamList_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc852d8bb);

	UObserverTeamInfoList_C_On_TeamList_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.IsSameTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character1                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character2                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           retVal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x95b7ef44);

	UObserverTeamInfoList_C_IsSameTeam_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.FindSpectateOrFollowCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x317fec0a);

	UObserverTeamInfoList_C_FindSpectateOrFollowCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.UpdateTeamList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::UpdateTeamList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x36a69865);

	UObserverTeamInfoList_C_UpdateTeamList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7653f610);

	UObserverTeamInfoList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xcea94322);

	UObserverTeamInfoList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::CustomTick()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x31c7a4ab);

	UObserverTeamInfoList_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.TimerCheckUpdateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x62afab13);

	UObserverTeamInfoList_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObserverTeamInfoList_C::Destruct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa2b159df);

	UObserverTeamInfoList_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTeamInfoList.ObserverTeamInfoList_C.ExecuteUbergraph_ObserverTeamInfoList
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTeamInfoList_C::ExecuteUbergraph_ObserverTeamInfoList(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x79c93e20);

	UObserverTeamInfoList_C_ExecuteUbergraph_ObserverTeamInfoList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
