#pragma once
namespace Classes {
	// ScriptStruct CoreUObject.Vector
	// 0x000C
	struct FVector {
		float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Z;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FVector()
			: X(0), Y(0), Z(0) {
		}

		inline FVector(float x, float y, float z)
			: X(x),
			Y(y),
			Z(z) {
		}

		__forceinline FVector operator-(const FVector& V) {
			return FVector(X - V.X, Y - V.Y, Z - V.Z);
		}

		__forceinline FVector operator+(const FVector& V) {
			return FVector(X + V.X, Y + V.Y, Z + V.Z);
		}

		__forceinline FVector operator*(float Scale) const {
			return FVector(X * Scale, Y * Scale, Z * Scale);
		}

		__forceinline FVector operator/(float Scale) const {
			const float RScale = 1.f / Scale;
			return FVector(X * RScale, Y * RScale, Z * RScale);
		}

		__forceinline FVector operator+(float A) const {
			return FVector(X + A, Y + A, Z + A);
		}

		__forceinline FVector operator-(float A) const {
			return FVector(X - A, Y - A, Z - A);
		}

		__forceinline FVector operator*(const FVector& V) const {
			return FVector(X * V.X, Y * V.Y, Z * V.Z);
		}

		__forceinline FVector operator/(const FVector& V) const {
			return FVector(X / V.X, Y / V.Y, Z / V.Z);
		}

		__forceinline float operator|(const FVector& V) const {
			return X * V.X + Y * V.Y + Z * V.Z;
		}

		__forceinline float operator^(const FVector& V) const {
			return X * V.Y - Y * V.X - Z * V.Z;
		}

		__forceinline FVector& operator+=(const FVector& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X += v.X;
			Y += v.Y;
			Z += v.Z;
			return *this;
		}

		__forceinline FVector& operator-=(const FVector& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X -= v.X;
			Y -= v.Y;
			Z -= v.Z;
			return *this;
		}

		__forceinline FVector& operator*=(const FVector& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X *= v.X;
			Y *= v.Y;
			Z *= v.Z;
			return *this;
		}

		__forceinline FVector& operator/=(const FVector& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X /= v.X;
			Y /= v.Y;
			Z /= v.Z;
			return *this;
		}

		__forceinline bool operator==(const FVector& src) const {
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X == X) && (src.Y == Y) && (src.Z == Z);
		}

		__forceinline bool operator!=(const FVector& src) const {
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X != X) || (src.Y != Y) || (src.Z != Z);
		}

		__forceinline float Size() const {
			return sqrt(X*X + Y * Y + Z * Z);
		}

		__forceinline float Size2D() const {
			return sqrt(X*X + Y * Y);
		}

		__forceinline float SizeSquared() const {
			return X * X + Y * Y + Z * Z;
		}

		__forceinline float SizeSquared2D() const {
			return X * X + Y * Y;
		}

		__forceinline float Dot(const FVector& vOther) const {
			const FVector& a = *this;

			return (a.X * vOther.X + a.Y * vOther.Y + a.Z * vOther.Z);
		}

		__forceinline FVector Normalize() {
			FVector vector;
			float length = this->Size();

			if (length != 0) {
				vector.X = X / length;
				vector.Y = Y / length;
				vector.Z = Z / length;
			}
			else
				vector.X = vector.Y = 0.0f;
			vector.Z = 1.0f;

			return vector;
		}
	};
}