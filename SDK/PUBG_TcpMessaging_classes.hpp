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

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (0x0058 - 0x0028)
class UTcpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                          // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     ListenEndpoint;                                           // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             ConnectToEndpoints;                                       // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                ConnectionRetryDelay;                                     // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x3bd48072);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
