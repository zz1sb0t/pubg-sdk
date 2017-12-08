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

// WidgetBlueprintGeneratedClass ObserverTagManagerWidget.ObserverTagManagerWidget_C
// 0x0018 (0x0258 - 0x0240)
class UObserverTagManagerWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	TArray<class UPlayerHeadWidget_C*>                 PlayerHeadWidgets;                                        // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xdea5de0b);
		return ptr;
	}


	void UpdateReplicateCharacter();
	void RemoveReplicateCharacter(TArray<class ATslCharacter*>* Characters);
	void AddReplicateCharacter(TArray<class ATslCharacter*>* Characters);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void CustomTick();
	void TimerCheckUpdateList();
	void ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
