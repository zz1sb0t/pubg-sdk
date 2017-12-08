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

// BlueprintGeneratedClass Item_Boost_EnergyDrink.Item_Boost_EnergyDrink_C
// 0x0014 (0x0214 - 0x0200)
class UItem_Boost_EnergyDrink_C : public UCastableItem
{
public:
	class ATslCharacter*                               Character;                                                // 0x0200(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PrintTime;                                                // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               isProcessing;                                             // 0x020C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x020D(0x0003) MISSED OFFSET
	float                                              BoostGaugeAmount;                                         // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x81332181);
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
