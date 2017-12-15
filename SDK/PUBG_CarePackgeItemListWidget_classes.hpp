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

// WidgetBlueprintGeneratedClass CarePackgeItemListWidget.CarePackgeItemListWidget_C
// 0x0088 (0x02C8 - 0x0240)
class UCarePackgeItemListWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UScrollBox*                                  CarePackageItemList;                                      // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UBorder*                                     TextCarePackageEmptyBorder;                               // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	bool                                               IsShowCarePackageItemList;                                // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	TArray<class UItem*>                               Items;                                                    // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    EventDispatcher_ShowCarePackageItem;                      // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               IsLoop;                                                   // 0x0280(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	TArray<struct FText>                               ArrName;                                                  // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        ArrCount;                                                 // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                CustomTickCount;                                          // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	TArray<class UCarePackageItemSlotWidget_C*>        ArrItemSlot;                                              // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FTimerHandle                                CustomTimerHandle;                                        // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xd0b98aa7);
		return ptr;
	}


	void UpdateIconTexture();
	void FinishCarePackgeItemList();
	void PrepareCarePackgeItemList();
	void HideTextCarePackageEmpty();
	void SetCarePackgeItemList();
	void GetCarePackageItemIcons();
	void HideCarePackageItemList();
	void GetCarePackageItemWidget(class UTexture* ItemIcon, const struct FText& ItemName, int ItemCount, class UCarePackageItemSlotWidget_C** CarePackageItemSlotWidget);
	void ShowCarePackageItemList();
	void Construct();
	void ShowCarePackageItem();
	void CustomTick();
	void TimerCheckUpdateList();
	void ExecuteUbergraph_CarePackgeItemListWidget(int EntryPoint);
	void EventDispatcher_ShowCarePackageItem__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
