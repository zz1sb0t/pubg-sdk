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

// Class HeadMountedDisplay.MotionControllerComponent
// 0x0060 (0x08A0 - 0x0840)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x0840(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	ETrackingStatus                                    CurrentTrackingStatus;                                    // 0x0844(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x5B];                                      // 0x0845(0x005B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x74a101a6);
		return ptr;
	}


	bool IsTracked();
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xd6b79c80);
		return ptr;
	}


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand);
	bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	int STATIC_GetMotionTrackingEnabledControllerCount();
	int STATIC_GetMaximumMotionTrackedControllerCount();
	bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0080 (0x0260 - 0x01E0)
class UVRNotificationsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    HMDTrackingInitializedDelegate;                           // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRecenteredDelegate;                                    // 0x01F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDLostDelegate;                                          // 0x0208(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDReconnectedDelegate;                                   // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDConnectCanceledDelegate;                               // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDPutOnHeadDelegate;                                     // 0x0238(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    HMDRemovedFromHeadDelegate;                               // 0x0248(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x7cd0586e);
		return ptr;
	}


	void VRNotificationsDelegate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
