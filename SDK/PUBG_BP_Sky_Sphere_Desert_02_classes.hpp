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

// BlueprintGeneratedClass BP_Sky_Sphere_Desert_02.BP_Sky_Sphere_Desert_02_C
// 0x00A0 (0x0450 - 0x03B0)
class ABP_Sky_Sphere_Desert_02_C : public AActor
{
public:
	class UStaticMeshComponent*                        Sky_Sphere_mesh;                                          // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             Base;                                                     // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sky_material;                                             // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               Refresh_material;                                         // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class ADirectionalLight*                           Directional_light_actor;                                  // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	bool                                               Colors_determined_by_sun_position;                        // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              Sun_height;                                               // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sun_brightness;                                           // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Horizon_falloff;                                          // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Zenith_color;                                             // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Horizon_color;                                            // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Cloud_color;                                              // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                Overall_Color;                                            // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              Cloud_speed;                                              // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Cloud_opacity;                                            // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Stars_brightness;                                         // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           Horizon_color_curve;                                      // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveLinearColor*                           Zenith_color_curve;                                       // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveLinearColor*                           Cloud_color_curve;                                        // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xcc9411a1);
		return ptr;
	}


	void UpdateSunDirection();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
