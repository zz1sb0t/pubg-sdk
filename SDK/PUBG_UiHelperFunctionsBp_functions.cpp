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

// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfputMode_Gamepad
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSelfPut                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_IsSelfputMode_Gamepad(class UUserWidget* Widget, class UObject* __WorldContext, bool* bIsSelfPut)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xcf3f9bd9);

	UUiHelperFunctionsBp_C_IsSelfputMode_Gamepad_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSelfPut != nullptr)
		*bIsSelfPut = params.bIsSelfPut;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSelfPutAttachment
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAttachableItem*         GamepadadSelectedAttachableItem (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetSelfPutAttachment(class UUserWidget* Widget, class UObject* __WorldContext, class UAttachableItem** GamepadadSelectedAttachableItem)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa1feba95);

	UUiHelperFunctionsBp_C_GetSelfPutAttachment_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GamepadadSelectedAttachableItem != nullptr)
		*GamepadadSelectedAttachableItem = params.GamepadadSelectedAttachableItem;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CancelSelfAttachmentPutMode
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_CancelSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x997144a2);

	UUiHelperFunctionsBp_C_CancelSelfAttachmentPutMode_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSelfAttachmentPutMode
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_IsSelfAttachmentPutMode(class UUserWidget* Widget, class UObject* __WorldContext, bool* bResult)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xdae56000);

	UUiHelperFunctionsBp_C_IsSelfAttachmentPutMode_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetInventoryWidget
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInventoryWidget_C*      InventoryWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetInventoryWidget(class UUserWidget* Widget, class UObject* __WorldContext, class UInventoryWidget_C** InventoryWidget)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9d279263);

	UUiHelperFunctionsBp_C_GetInventoryWidget_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryWidget != nullptr)
		*InventoryWidget = params.InventoryWidget;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.InventoryFocusingColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            NewParam                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_InventoryFocusingColor(class UObject* __WorldContext, struct FLinearColor* NewParam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc5c1054a);

	UUiHelperFunctionsBp_C_InventoryFocusingColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsXBoxOnePlatform
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_IsXBoxOnePlatform(class UObject* __WorldContext, bool* NewParam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe895020d);

	UUiHelperFunctionsBp_C_IsXBoxOnePlatform_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterLook
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Look                           (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetCharacterLook(class UUserWidget* Widget, class UObject* __WorldContext, struct FVector* Look)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x446aecf);

	UUiHelperFunctionsBp_C_GetCharacterLook_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterPosititon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Position                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetCharacterPosititon(class UUserWidget* Widget, class UObject* __WorldContext, struct FVector* Position)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x22e214ef);

	UUiHelperFunctionsBp_C_GetCharacterPosititon_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterAngle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetCharacterAngle(class UUserWidget* Widget, class UObject* __WorldContext, float* Angle)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x676027df);

	UUiHelperFunctionsBp_C_GetCharacterAngle_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneWarningTimeBp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          WarningTime                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetBluezoneWarningTimeBp(class UObject* WorldContextObject, class UObject* __WorldContext, float* WarningTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb5500670);

	UUiHelperFunctionsBp_C_GetBluezoneWarningTimeBp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WarningTime != nullptr)
		*WarningTime = params.WarningTime;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetBluezoneReleaseTimeBp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReleaseTime                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetBluezoneReleaseTimeBp(class UObject* WorldContextObject, class UObject* __WorldContext, float* ReleaseTime)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x40e39d23);

	UUiHelperFunctionsBp_C_GetBluezoneReleaseTimeBp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReleaseTime != nullptr)
		*ReleaseTime = params.ReleaseTime;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDistanceColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Distance                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetDistanceColor(float Distance, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x61468525);

	UUiHelperFunctionsBp_C_GetDistanceColor_Params params;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsLastSpectatorTeam
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsTeam                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_IsLastSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* __WorldContext, bool* bIsTeam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7efa170d);

	UUiHelperFunctionsBp_C_IsLastSpectatorTeam_Params params;
	params.Widget = Widget;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTeam != nullptr)
		*bIsTeam = params.bIsTeam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetTeamColor(class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1e6f554b);

	UUiHelperFunctionsBp_C_GetTeamColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.IsSpectatorTeam
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsTeam                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_IsSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character, class UObject* __WorldContext, bool* bIsTeam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x29d016c1);

	UUiHelperFunctionsBp_C_IsSpectatorTeam_Params params;
	params.Widget = Widget;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsTeam != nullptr)
		*bIsTeam = params.bIsTeam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByTeam
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATeam*                   Team                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetStateByTeam(class ATeam* Team, class UObject* __WorldContext, int* State)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x412924d4);

	UUiHelperFunctionsBp_C_GetStateByTeam_Params params;
	params.Team = Team;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetStateByCharacter
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATslCharacter*           Character                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            OutState                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetStateByCharacter(class ATslCharacter* Character, class UObject* __WorldContext, int* OutState)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xeba30180);

	UUiHelperFunctionsBp_C_GetStateByCharacter_Params params;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetSpectatorColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bISpectator                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetSpectatorColor(bool bISpectator, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3a9c9655);

	UUiHelperFunctionsBp_C_GetSpectatorColor_Params params;
	params.bISpectator = bISpectator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetCharacterStateIcon
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            State                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetCharacterStateIcon(int State, class UObject* __WorldContext, class UTexture2D** NewParam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x718c886);

	UUiHelperFunctionsBp_C_GetCharacterStateIcon_Params params;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTslCharacters_Bp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class ATslCharacter*>   OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUiHelperFunctionsBp_C::STATIC_GetTslCharacters_Bp(class UObject* WorldContextObject, class UObject* __WorldContext, TArray<class ATslCharacter*>* OutActors)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3a991ff3);

	UUiHelperFunctionsBp_C_GetTslCharacters_Bp_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.NotifyWidgetShowed
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 WidgetName                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_NotifyWidgetShowed(class UUserWidget* Widget, const struct FString& WidgetName, bool bShow, class UObject* __WorldContext)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xfb8046f0);

	UUiHelperFunctionsBp_C_NotifyWidgetShowed_Params params;
	params.Widget = Widget;
	params.WidgetName = WidgetName;
	params.bShow = bShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetTeamMarkerColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            MemberNumber                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            NewParam                       (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetTeamMarkerColor(int MemberNumber, class UObject* __WorldContext, struct FLinearColor* NewParam)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x727f1ea9);

	UUiHelperFunctionsBp_C_GetTeamMarkerColor_Params params;
	params.MemberNumber = MemberNumber;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.CreateAndSetMaterial
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstance*       Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_CreateAndSetMaterial(class UWidget* Widget, class UMaterialInstance* Material, class UObject* __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x31192b41);

	UUiHelperFunctionsBp_C_CreateAndSetMaterial_Params params;
	params.Widget = Widget;
	params.Material = Material;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.GetDynamicMaterial
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUiHelperFunctionsBp_C::STATIC_GetDynamicMaterial(class UWidget* Widget, class UObject* __WorldContext, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x94c4e00f);

	UUiHelperFunctionsBp_C_GetDynamicMaterial_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function UiHelperFunctionsBp.UiHelperFunctionsBp_C.SortItemBp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<TScriptInterface<class USlotInterface>> InItemList                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bSort                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<TScriptInterface<class USlotInterface>> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<TScriptInterface<class USlotInterface>> UUiHelperFunctionsBp_C::STATIC_SortItemBp(bool bSort, class UObject* __WorldContext, TArray<TScriptInterface<class USlotInterface>>* InItemList)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x55dddd48);

	UUiHelperFunctionsBp_C_SortItemBp_Params params;
	params.bSort = bSort;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InItemList != nullptr)
		*InItemList = params.InItemList;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
