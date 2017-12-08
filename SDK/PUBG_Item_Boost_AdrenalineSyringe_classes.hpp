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

// BlueprintGeneratedClass Item_Boost_AdrenalineSyringe.Item_Boost_AdrenalineSyringe_C
// 0x000D (0x020D - 0x0200)
class UItem_Boost_AdrenalineSyringe_C : public UCastableItem
{
public:
	class ATslCharacter*                               Character;                                                // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PrintTime;                                                // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               isProcessing;                                             // 0x020C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xe6535705);
		return ptr;
	}


	void BoostGaugeUp();
	bool IsCastable(class ATslCharacter** Character);
	void PrintCastingTime();
	bool UseBy(class ATslCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
