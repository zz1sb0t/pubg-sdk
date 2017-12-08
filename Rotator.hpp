#pragma once

#define CHECK_VALID( _v ) 0

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {

	// ScriptStruct CoreUObject.Rotator
		// 0x000C
	struct FRotator {
		float                                              Pitch;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Yaw;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Roll;                                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FRotator()
			: Pitch(0), Yaw(0), Roll(0) {
		}

		inline FRotator(float x, float y, float z)
			: Pitch(x),
			Yaw(y),
			Roll(z) {
		}

		__forceinline FRotator FRotator::operator+(const FRotator& V) {
			return FRotator(Pitch + V.Pitch, Yaw + V.Yaw, Roll + V.Roll);
		}

		__forceinline FRotator FRotator::operator-(const FRotator& V) {
			return FRotator(Pitch - V.Pitch, Yaw - V.Yaw, Roll - V.Roll);
		}

		__forceinline FRotator FRotator::operator*(float Scale) const {
			return FRotator(Pitch * Scale, Yaw * Scale, Roll * Scale);
		}

		__forceinline FRotator FRotator::operator/(float Scale) const {
			const float RScale = 1.f / Scale;
			return FRotator(Pitch * RScale, Yaw * RScale, Roll * RScale);
		}

		__forceinline FRotator FRotator::operator+(float A) const {
			return FRotator(Pitch + A, Yaw + A, Roll + A);
		}

		__forceinline FRotator FRotator::operator-(float A) const {
			return FRotator(Pitch - A, Yaw - A, Roll - A);
		}

		__forceinline FRotator FRotator::operator*(const FRotator& V) const {
			return FRotator(Pitch * V.Pitch, Yaw * V.Yaw, Roll * V.Roll);
		}

		__forceinline FRotator FRotator::operator/(const FRotator& V) const {
			return FRotator(Pitch / V.Pitch, Yaw / V.Yaw, Roll / V.Roll);
		}

		__forceinline float FRotator::operator|(const FRotator& V) const {
			return Pitch * V.Pitch + Yaw * V.Yaw + Roll * V.Roll;
		}

		__forceinline FRotator& FRotator::operator+=(const FRotator& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch += v.Pitch;
			Yaw += v.Yaw;
			Roll += v.Roll;
			return *this;
		}

		__forceinline FRotator& FRotator::operator-=(const FRotator& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch -= v.Pitch;
			Yaw -= v.Yaw;
			Roll -= v.Roll;
			return *this;
		}

		__forceinline FRotator& FRotator::operator*=(const FRotator& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch *= v.Pitch;
			Yaw *= v.Yaw;
			Roll *= v.Roll;
			return *this;
		}

		__forceinline FRotator& FRotator::operator/=(const FRotator& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			Pitch /= v.Pitch;
			Yaw /= v.Yaw;
			Roll /= v.Roll;
			return *this;
		}

		__forceinline float FRotator::operator^(const FRotator& V) const {
			return Pitch * V.Yaw - Yaw * V.Pitch - Roll * V.Roll;
		}

		__forceinline bool FRotator::operator==(const FRotator& src) const {
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.Pitch == Pitch) && (src.Yaw == Yaw) && (src.Roll == Roll);
		}

		__forceinline bool FRotator::operator!=(const FRotator& src) const {
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.Pitch != Pitch) || (src.Yaw != Yaw) || (src.Roll != Roll);
		}

		__forceinline float FRotator::Size() const {
			return sqrt(Pitch*Pitch + Yaw * Yaw + Roll * Roll);
		}


		__forceinline float FRotator::SizeSquared() const {
			return Pitch * Pitch + Yaw * Yaw + Roll * Roll;
		}

		__forceinline float FRotator::Dot(const FRotator& vOther) const {
			const FRotator& a = *this;

			return (a.Pitch * vOther.Pitch + a.Yaw * vOther.Yaw + a.Roll * vOther.Roll);
		}

		__forceinline float FRotator::ClampAxis(float Angle) {
			// returns Angle in the range (-360,360)
			Angle = fmod(Angle, 360.f);

			if (Angle < 0.f) {
				// shift to [0,360) range
				Angle += 360.f;
			}

			return Angle;
		}

		__forceinline float FRotator::NormalizeAxis(float Angle) {
			// returns Angle in the range [0,360)
			Angle = ClampAxis(Angle);

			if (Angle > 180.f) {
				// shift to (-180,180]
				Angle -= 360.f;
			}

			return Angle;
		}

		__forceinline void FRotator::Normalize() {
			Pitch = NormalizeAxis(Pitch);
			Yaw = NormalizeAxis(Yaw);
			Roll = NormalizeAxis(Roll);
		}

		__forceinline FRotator FRotator::GetNormalized() const {
			FRotator Rot = *this;
			Rot.Normalize();
			return Rot;
		}
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif