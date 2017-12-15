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

// BlueprintGeneratedClass DefaultRifleSetting.DefaultRifleSetting_C
// 0x0090 (0x0D78 - 0x0CE8)
class ADefaultRifleSetting_C : public ATslWeapon_Trajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CE8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	bool                                               bDebugMuzzleVector;                                       // 0x0CF0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDebugRecoil;                                             // 0x0CF1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0CF2(0x0006) MISSED OFFSET
	struct FDebugFloatHistory                          History_RecoilTargetY;                                    // 0x0CF8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilTargetX;                                    // 0x0D18(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoveryTarget;                                   // 0x0D38(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDebugFloatHistory                          History_RecoilValue;                                      // 0x0D58(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x33fbbd0d);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_DefaultRifleSetting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
