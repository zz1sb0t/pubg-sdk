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

// BlueprintGeneratedClass DefaultPistolSetting.DefaultPistolSetting_C
// 0x0000 (0x0CE8 - 0x0CE8)
class ADefaultPistolSetting_C : public ATslWeapon_Trajectory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x238f9029);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
