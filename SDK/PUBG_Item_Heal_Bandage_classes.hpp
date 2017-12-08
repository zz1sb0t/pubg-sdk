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

// BlueprintGeneratedClass Item_Heal_Bandage.Item_Heal_Bandage_C
// 0x0004 (0x020C - 0x0208)
class UItem_Heal_Bandage_C : public UHealOverTimeItem
{
public:
	int                                                PrintTime;                                                // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x9f726449);
		return ptr;
	}


	void PrintCastingTime();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
