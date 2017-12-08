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

// Class GeometryCache.GeometryCache
// 0x0038 (0x0060 - 0x0028)
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                   // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x25a1fd43);
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x03B8 - 0x03B0)
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                   // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x8e1d83a);
		return ptr;
	}


	class UGeometryCacheComponent* GetGeometryCacheComponent();
};


// Class GeometryCache.GeometryCacheComponent
// 0x0070 (0x09B0 - 0x0940)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                            // 0x0940(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRunning;                                                 // 0x0948(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0949(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x094A(0x0002) MISSED OFFSET
	float                                              StartTimeOffset;                                          // 0x094C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // 0x0950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumTracks;                                                // 0x0954(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0958(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x095C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x806d3804);
		return ptr;
	}


	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
};


// Class GeometryCache.GeometryCacheTrack
// 0x0028 (0x0050 - 0x0028)
class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xa918258);
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0078 - 0x0050)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                           // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0054(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0xf8bb7cf9);
		return ptr;
	}


	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x0050 (0x00A0 - 0x0050)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x2609dca9);
		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x0050 (0x00A0 - 0x0050)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr; 
 if (!ptr) ptr = UObject::FindClass(0x5fa7e810);
		return ptr;
	}


	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
