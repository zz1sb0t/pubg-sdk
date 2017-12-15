#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnPrepass_1
struct UReplayTimelineKillEventItem_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnMouseButtonDown_1
struct UReplayTimelineKillEventItem_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.GetToolTipText
struct UReplayTimelineKillEventItem_C_GetToolTipText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnGotoTimelineDone
struct UReplayTimelineKillEventItem_C_OnGotoTimelineDone_Params
{
};

// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.ExecuteUbergraph_ReplayTimelineKillEventItem
struct UReplayTimelineKillEventItem_C_ExecuteUbergraph_ReplayTimelineKillEventItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
