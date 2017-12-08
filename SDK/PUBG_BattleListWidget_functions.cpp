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

// Function BattleListWidget.BattleListWidget_C.SetBattleListSubTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 SubTitle                       (CPF_Parm, CPF_ZeroConstructor)

void UBattleListWidget_C::SetBattleListSubTitle(int Index, const struct FString& SubTitle)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x33751bf);

	UBattleListWidget_C_SetBattleListSubTitle_Params params;
	params.Index = Index;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ClearBattleList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::ClearBattleList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5797b624);

	UBattleListWidget_C_ClearBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.CollapseAllPlayerInfos
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::CollapseAllPlayerInfos()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x78926f43);

	UBattleListWidget_C_CollapseAllPlayerInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.SetPlayerInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayerInfoWidget_C*     PlayerInfo                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::SetPlayerInfo(class ATslCharacter* TslCharacter, class UPlayerInfoWidget_C** PlayerInfo)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x53ad4d4a);

	UBattleListWidget_C_SetPlayerInfo_Params params;
	params.TslCharacter = TslCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function BattleListWidget.BattleListWidget_C.DestructPlayerInfoPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::DestructPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb6bfde28);

	UBattleListWidget_C_DestructPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ConstructPlayerInfoPool
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::ConstructPlayerInfoPool()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x899c66fb);

	UBattleListWidget_C_ConstructPlayerInfoPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindCharacterByShortcutNum
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ShortcutNum                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::FindCharacterByShortcutNum(int ShortcutNum, class ATslCharacter** Character)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb5bfde2e);

	UBattleListWidget_C_FindCharacterByShortcutNum_Params params;
	params.ShortcutNum = ShortcutNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BattleListWidget.BattleListWidget_C.AddSubTitle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SubTitle                       (CPF_Parm, CPF_ZeroConstructor)

void UBattleListWidget_C::AddSubTitle(const struct FString& SubTitle)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x632646cc);

	UBattleListWidget_C_AddSubTitle_Params params;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.IsSameTeam
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character1                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character2                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           retVal                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbc31e99a);

	UBattleListWidget_C_IsSameTeam_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function BattleListWidget.BattleListWidget_C.SetNearbyPlayerIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::SetNearbyPlayerIndex(int Index)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd7c17ed1);

	UBattleListWidget_C_SetNearbyPlayerIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter10
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter10()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc4f4d007);

	UBattleListWidget_C_BattleListSetCharacter10_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter9
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter9()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9ed38a55);

	UBattleListWidget_C_BattleListSetCharacter9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter8
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter8()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x78d10fec);

	UBattleListWidget_C_BattleListSetCharacter8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter7
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter7()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x22bac23b);

	UBattleListWidget_C_BattleListSetCharacter7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter6
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter6()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xfcb847d2);

	UBattleListWidget_C_BattleListSetCharacter6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter5
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter5()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd6b5cd69);

	UBattleListWidget_C_BattleListSetCharacter5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter4
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter4()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb0b35300);

	UBattleListWidget_C_BattleListSetCharacter4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter3
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter3()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbac4abdf);

	UBattleListWidget_C_BattleListSetCharacter3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter2
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter2()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x94c23176);

	UBattleListWidget_C_BattleListSetCharacter2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BattleListSetCharacter1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BattleListSetCharacter1()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6ebfb70d);

	UBattleListWidget_C_BattleListSetCharacter1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.BindKeyBattleList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::BindKeyBattleList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbaba15f9);

	UBattleListWidget_C_BindKeyBattleList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.UpdateEngagedEnemiesList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::UpdateEngagedEnemiesList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4f5f2065);

	UBattleListWidget_C_UpdateEngagedEnemiesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindSpectateOrFollowCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATslCharacter*           TslCharacter                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x96fd7d64);

	UBattleListWidget_C_FindSpectateOrFollowCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslCharacter != nullptr)
		*TslCharacter = params.TslCharacter;
}


// Function BattleListWidget.BattleListWidget_C.UpdateNearbyPlayersList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::UpdateNearbyPlayersList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x21915dc1);

	UBattleListWidget_C_UpdateNearbyPlayersList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.FindCharacterByPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::FindCharacterByPlayerState(class APlayerState* PlayerState, class ATslCharacter** Character)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x87364a62);

	UBattleListWidget_C_FindCharacterByPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BattleListWidget.BattleListWidget_C.UpdateOtherEngagementsList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::UpdateOtherEngagementsList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe913c8b2);

	UBattleListWidget_C_UpdateOtherEngagementsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.RefreshPlayerList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::RefreshPlayerList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x465f6c3b);

	UBattleListWidget_C_RefreshPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBattleListWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd330a2d2);

	UBattleListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::CustomTick()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x42e20f15);

	UBattleListWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.TimerCheckUpdateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBattleListWidget_C::TimerCheckUpdateList()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x447a2c35);

	UBattleListWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBattleListWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5f7c5c9);

	UBattleListWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleListWidget.BattleListWidget_C.ExecuteUbergraph_BattleListWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBattleListWidget_C::ExecuteUbergraph_BattleListWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7ce29b89);

	UBattleListWidget_C_ExecuteUbergraph_BattleListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
