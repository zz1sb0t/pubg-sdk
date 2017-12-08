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

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture2D*              Tex2D                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x5725c925);

	AOceanManager_LoadLandscapeHeightmap_Params params;
	params.Tex2D = Tex2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.GetWaveHeightValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UWorld*                  World                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HeightOnly                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           TwoIterations                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AOceanManager::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x4de93e70);

	AOceanManager_GetWaveHeightValue_Params params;
	params.Location = Location;
	params.World = World;
	params.HeightOnly = HeightOnly;
	params.TwoIterations = TwoIterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          U                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          V                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf8bf66b8);

	AOceanManager_GetHeightmapPixel_Params params;
	params.U = U;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 A                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 B                              (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 C                              (CPF_Parm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3bbdc4cc);

	UAdvancedBuoyancyComponent_TriangleArea_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FBuoyancyVertex         H                              (CPF_Parm)
// struct FBuoyancyVertex         M                              (CPF_Parm)
// struct FBuoyancyVertex         L                              (CPF_Parm)
// struct FVector                 InArrow                        (CPF_Parm, CPF_IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6224c7ad);

	UAdvancedBuoyancyComponent_SplitTriangle_Params params;
	params.H = H;
	params.M = M;
	params.L = L;
	params.InArrow = InArrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          NewDensity                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewWaterDensity                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x70177266);

	UAdvancedBuoyancyComponent_SetMeshDensity_Params params;
	params.NewDensity = NewDensity;
	params.NewWaterDensity = NewWaterDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           bJustGetHeightAtLocation       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x65129804);

	UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params params;
	params.Position = Position;
	params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UAdvancedBuoyancyComponent::GetOcean()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb63464d1);

	UAdvancedBuoyancyComponent_GetOcean_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (CPF_Parm)
// struct FColor                  DebugColor                     (CPF_Parm, CPF_IsPlainOldData)

void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x1f8be36c);

	UAdvancedBuoyancyComponent_DrawDebugStuff_Params params;
	params.TriForce = TriForce;
	params.DebugColor = DebugColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector                 SlamForce                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 TriCenter                      (CPF_Parm, CPF_IsPlainOldData)

void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf00ff51f);

	UAdvancedBuoyancyComponent_ApplySlamForce_Params params;
	params.SlamForce = SlamForce;
	params.TriCenter = TriCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (CPF_Parm)

void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf908e6f2);

	UAdvancedBuoyancyComponent_ApplyForce_Params params;
	params.TriForce = TriForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.GetIsDriving
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ACustomVehicleController::GetIsDriving()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2224d90c);

	ACustomVehicleController_GetIsDriving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.CustomVehicleController.ExitVehicle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void ACustomVehicleController::ExitVehicle()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8b946d07);

	ACustomVehicleController_ExitVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnterVehicle
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class APawn*                   Vehicle                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACustomVehicleController::EnterVehicle(class APawn* Vehicle)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x3ca4b023);

	ACustomVehicleController_EnterVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void ACustomVehicleController::EnableBuoyancy()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa5ee9a32);

	ACustomVehicleController_EnableBuoyancy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
// (FUNC_Exec, FUNC_Native, FUNC_Public)

void ACustomVehicleController::DrawBuoyancyPoints()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9b7a3a18);

	ACustomVehicleController_DrawBuoyancyPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnEndOverlap
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x23632384);

	AFlockFish_OnEndOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc6b68ef4);

	AFlockFish_OnBeginOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATimeManager::SetCurrentLocalTime(float Time)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x2bd8f193);

	ATimeManager_SetCurrentLocalTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IsLeapYear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ATimeManager::IsLeapYear(int Year)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x57a8825);

	ATimeManager_IsLeapYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (CPF_Parm)

void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xe3bc228);

	ATimeManager_InitializeCalendar_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IncrementTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ATimeManager::IncrementTime(float DeltaSeconds)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xf33a4c24);

	ATimeManager_IncrementTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.GetYearPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::GetYearPhase()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xd1e275c0);

	ATimeManager_GetYearPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::GetElapsedDayInMinutes()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x9b37cf66);

	ATimeManager_GetElapsedDayInMinutes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATimeManager::GetDaysInYear(int Year)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x6ef9415f);

	ATimeManager_GetDaysInYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Year                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Month                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATimeManager::GetDaysInMonth(int Year, int Month)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xb368fe5e);

	ATimeManager_GetDaysInMonth_Params params;
	params.Year = Year;
	params.Month = Month;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::GetDayPhase()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x18934017);

	ATimeManager_GetDayPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xa1a2c4f6);

	ATimeManager_GetDayOfYear_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATimeManager::CalculateSunAngle()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xddcccadb);

	ATimeManager_CalculateSunAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ATimeManager::CalculateMoonPhase()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0x8fa51c48);

	ATimeManager_CalculateMoonPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FRotator                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ATimeManager::CalculateMoonAngle()
{
	static UFunction* fn = nullptr; 
 if (!fn) fn = UObject::FindObject<UFunction>(0xc73c10a8);

	ATimeManager_CalculateMoonAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
