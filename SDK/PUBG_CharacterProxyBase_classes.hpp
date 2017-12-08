#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterProxyBase.CharacterProxyBase_C
// 0x0038 (0x0848 - 0x0810)
class ACharacterProxyBase_C : public ATslCharacterProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0810(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0818(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Thrown;                                              // 0x0820(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Melee;                                               // 0x0828(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_SideArm;                                             // 0x0830(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Secondary;                                           // 0x0838(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      Slot_Primary;                                             // 0x0840(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x8abd20cd);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CharacterProxyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
