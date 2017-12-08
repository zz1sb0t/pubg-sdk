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

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTWidget::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb6bfad1);

	UCoherentUIGTWidget_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTWidget::ShowPaintRects(bool show)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbd43faa4);

	UCoherentUIGTWidget_ShowPaintRects_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          threshold                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTWidget::SetClickThroughAlphaThreshold(float threshold)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x17a630e0);

	UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params params;
	params.threshold = threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCoherentUIGTWidget::Reload()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xda140845);

	UCoherentUIGTWidget_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)

void UCoherentUIGTWidget::Redraw()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2bcf7457);

	UCoherentUIGTWidget_Redraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 path                           (CPF_Parm, CPF_ZeroConstructor)

void UCoherentUIGTWidget::Load(const struct FString& path)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf87c5a0e);

	UCoherentUIGTWidget_Load_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTWidget::IsTransparent()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x93778098);

	UCoherentUIGTWidget_IsTransparent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTWidget::IsReadyToCreateView()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x67a00dd3);

	UCoherentUIGTWidget_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTWidget::IsReadyForBindings()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5ebd7bf2);

	UCoherentUIGTWidget_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTWidget::IsDocumentReady()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe8c7f646);

	UCoherentUIGTWidget_IsDocumentReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTWidget::HasRequestedView()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd9c6d325);

	UCoherentUIGTWidget_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCoherentUIGTWidget::GetClickThroughAlphaThreshold()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xfc18d0cc);

	UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTWidget::CreateJSEvent()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8f7fb1ed);

	UCoherentUIGTWidget_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UStructProperty*         Arg                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x83731c5);

	UCoherentUIGTJSEvent_AddStructArg_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 str                            (CPF_Parm, CPF_ZeroConstructor)

void UCoherentUIGTJSEvent::AddString(const struct FString& str)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe939bf8f);

	UCoherentUIGTJSEvent_AddString_Params params;
	params.str = str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSEvent::AddObject(class UObject* Object)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xfffeb8f9);

	UCoherentUIGTJSEvent_AddObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            integer                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSEvent::AddInt32(int integer)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x36167a28);

	UCoherentUIGTJSEvent_AddInt32_Params params;
	params.integer = integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FL                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSEvent::AddFloat(float FL)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4b074472);

	UCoherentUIGTJSEvent_AddFloat_Params params;
	params.FL = FL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// unsigned char                  byte                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSEvent::AddByte(unsigned char byte)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1c0e4d9a);

	UCoherentUIGTJSEvent_AddByte_Params params;
	params.byte = byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSEvent::AddBool(bool B)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x700ea804);

	UCoherentUIGTJSEvent_AddBool_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    Array                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCoherentUIGTJSEvent::AddArray(TArray<int> Array)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1a6594ab);

	UCoherentUIGTJSEvent_AddArray_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 Object                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTJSPayload::ReadObject(int Index, class UObject* Object)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa2fb08c8);

	UCoherentUIGTJSPayload_ReadObject_Params params;
	params.Index = Index;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCoherentUIGTJSPayload::GetString(int Index)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1404089c);

	UCoherentUIGTJSPayload_GetString_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCoherentUIGTJSPayload::GetNumber(int Index)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x876116ac);

	UCoherentUIGTJSPayload_GetNumber_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCoherentUIGTJSPayload::GetInt32(int Index)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7d3e8cb1);

	UCoherentUIGTJSPayload_GetInt32_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTJSPayload::GetBool(int Index)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x73325a2b);

	UCoherentUIGTJSPayload_GetBool_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UCoherentUIGTJSEvent*    EventData                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBaseComponent::TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe3326aa5);

	UCoherentUIGTBaseComponent_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           show                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBaseComponent::ShowPaintRects(bool show)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x13c39240);

	UCoherentUIGTBaseComponent_ShowPaintRects_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          threshold                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBaseComponent::SetClickThroughAlphaThreshold(float threshold)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd052f4dc);

	UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params params;
	params.threshold = threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Width                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBaseComponent::Resize(int Width, int Height)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7d67bb0e);

	UCoherentUIGTBaseComponent_Resize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UCoherentUIGTBaseComponent::Reload()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc4d2c881);

	UCoherentUIGTBaseComponent_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_Const)

void UCoherentUIGTBaseComponent::Redraw()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd63cbfab);

	UCoherentUIGTBaseComponent_Redraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 path                           (CPF_Parm, CPF_ZeroConstructor)

void UCoherentUIGTBaseComponent::Load(const struct FString& path)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xda4f12f2);

	UCoherentUIGTBaseComponent_Load_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsTransparent()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xebd18eb4);

	UCoherentUIGTBaseComponent_IsTransparent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsReadyToCreateView()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd7a75ff7);

	UCoherentUIGTBaseComponent_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsReadyForBindings()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd8555c8e);

	UCoherentUIGTBaseComponent_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTBaseComponent::IsDocumentReady()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa677a8d2);

	UCoherentUIGTBaseComponent_IsDocumentReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCoherentUIGTBaseComponent::HasRequestedView()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe591f9b9);

	UCoherentUIGTBaseComponent_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCoherentUIGTBaseComponent::GetClickThroughAlphaThreshold()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5f442bd0);

	UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa04f4328);

	UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTBaseComponent::CreateJSEvent()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd0270b71);

	UCoherentUIGTBaseComponent_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FString                 EventName                      (CPF_Parm, CPF_ZeroConstructor)
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7e7ae117);

	UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params params;
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.PurgeCoherentDiskCache
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_PurgeCoherentDiskCache()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf9797b2e);

	UCoherentUIGTBlueprintFunctionLibrary_PurgeCoherentDiskCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCoherentUIGTJSEvent*    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCoherentUIGTJSEvent* UCoherentUIGTBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe945f5df);

	UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStructProperty*         Arg                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd297199a);

	UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Arg                            (CPF_Parm, CPF_ZeroConstructor)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x85f45efe);

	UCoherentUIGTBlueprintFunctionLibrary_AddString_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 Arg                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1978ae54);

	UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Arg                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbd564323);

	UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Arg                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x112aadd1);

	UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  Arg                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xde1b71e7);

	UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Arg                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5b2ec801);

	UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    Arg                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8198d7e3);

	UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTJSEvent*    JSEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    Arg                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ArrayType                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTBlueprintFunctionLibrary::STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc59c7094);

	UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 PageUrl                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           bIsTransparent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ClickThroughAlphaThreshold     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AnimationFrameDefer            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bDelayedUpdate                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTGameHUD::SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8208273c);

	ACoherentUIGTGameHUD_SetupUIGTView_Params params;
	params.PageUrl = PageUrl;
	params.bIsTransparent = bIsTransparent;
	params.ClickThroughAlphaThreshold = ClickThroughAlphaThreshold;
	params.AnimationFrameDefer = AnimationFrameDefer;
	params.bDelayedUpdate = bDelayedUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACoherentUIGTInputActor::ToggleCoherentUIGTInputFocus()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe6ef1796);

	ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EGTInputWidgetLineTraceMode> Mode                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8d691ef3);

	ACoherentUIGTInputActor_SetLineTraceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb9bd8084);

	ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* NewFocusedView                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x73dc6559);

	ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params params;
	params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           FocusUI                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::SetCoherentUIGTInputFocus(bool FocusUI)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4a28fc8);

	ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params params;
	params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACoherentUIGTInputActor::IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x7943b824);

	ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACoherentUIGTInputActor::IsCoherentUIGTFocused()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3f0fa3ed);

	ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel> CollisionChannel               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ETextureAddress>   AddressMode                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            UVChannel                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe6fdbc01);

	ACoherentUIGTInputActor_Initialize_Params params;
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ACoherentUIGTInputActor::GetInputPropagationBehaviour()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf1805518);

	ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAccept                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9a805b17);

	ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bAllow                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACoherentUIGTInputActor::AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf8369b91);

	ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UCoherentUIGTBaseComponent* baseComponent                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// int                            Width                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Height                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCoherentUIGTLiveView::OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* baseComponent, const struct FString& Name, int* Width, int* Height)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xbcba2c4f);

	UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params params;
	params.baseComponent = baseComponent;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
