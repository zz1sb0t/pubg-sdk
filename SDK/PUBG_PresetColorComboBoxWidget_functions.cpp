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

// Function PresetColorComboBoxWidget.PresetColorComboBoxWidget_C.On_ComboBox_GenerateWidget_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString*                Item                           (CPF_Parm, CPF_ZeroConstructor)
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWidget* UPresetColorComboBoxWidget_C::On_ComboBox_GenerateWidget_1(struct FString* Item)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc2178b4);

	UPresetColorComboBoxWidget_C_On_ComboBox_GenerateWidget_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
