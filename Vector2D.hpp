#pragma once
#define CHECK_VALID( _v ) 0

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

namespace Classes {
	// ScriptStruct CoreUObject.Vector2D
		// 0x0008
	struct FVector2D {
		float                                              X;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)
		float                                              Y;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_SaveGame, CPF_IsPlainOldData)

		inline FVector2D()
			: X(0), Y(0) {
		}

		inline FVector2D(float x, float y)
			: X(x),
			Y(y) {
		}

		__forceinline FVector2D FVector2D::operator-(const FVector2D& V) {
			return FVector2D(X - V.X, Y - V.Y);
		}

		__forceinline FVector2D FVector2D::operator+(const FVector2D& V) {
			return FVector2D(X + V.X, Y + V.Y);
		}

		__forceinline FVector2D FVector2D::operator*(float Scale) const {
			return FVector2D(X * Scale, Y * Scale);
		}

		__forceinline FVector2D FVector2D::operator/(float Scale) const {
			const float RScale = 1.f / Scale;
			return FVector2D(X * RScale, Y * RScale);
		}

		__forceinline FVector2D FVector2D::operator+(float A) const {
			return FVector2D(X + A, Y + A);
		}

		__forceinline FVector2D FVector2D::operator-(float A) const {
			return FVector2D(X - A, Y - A);
		}

		__forceinline FVector2D FVector2D::operator*(const FVector2D& V) const {
			return FVector2D(X * V.X, Y * V.Y);
		}

		__forceinline FVector2D FVector2D::operator/(const FVector2D& V) const {
			return FVector2D(X / V.X, Y / V.Y);
		}

		__forceinline float FVector2D::operator|(const FVector2D& V) const {
			return X * V.X + Y * V.Y;
		}

		__forceinline float FVector2D::operator^(const FVector2D& V) const {
			return X * V.Y - Y * V.X;
		}

		__forceinline FVector2D& FVector2D::operator+=(const FVector2D& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X += v.X;
			Y += v.Y;
			return *this;
		}

		__forceinline FVector2D& FVector2D::operator-=(const FVector2D& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X -= v.X;
			Y -= v.Y;
			return *this;
		}

		__forceinline FVector2D& FVector2D::operator*=(const FVector2D& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X *= v.X;
			Y *= v.Y;
			return *this;
		}

		__forceinline FVector2D& FVector2D::operator/=(const FVector2D& v) {
			CHECK_VALID(*this);
			CHECK_VALID(v);
			X /= v.X;
			Y /= v.Y;
			return *this;
		}

		__forceinline bool FVector2D::operator==(const FVector2D& src) const {
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X == X) && (src.Y == Y);
		}

		__forceinline bool FVector2D::operator!=(const FVector2D& src) const {
			CHECK_VALID(src);
			CHECK_VALID(*this);
			return (src.X != X) || (src.Y != Y);
		}

		__forceinline float FVector2D::Size() const {
			return sqrt(X*X + Y * Y);
		}

		__forceinline float FVector2D::SizeSquared() const {
			return X * X + Y * Y;
		}

		__forceinline float FVector2D::Dot(const FVector2D& vOther) const {
			const FVector2D& a = *this;

			return (a.X * vOther.X + a.Y * vOther.Y);
		}

		__forceinline FVector2D FVector2D::Normalize() {
			FVector2D vector;
			float length = this->Size();

			if (length != 0) {
				vector.X = X / length;
				vector.Y = Y / length;
			}
			else
				vector.X = vector.Y = 0.0f;

			return vector;
		}
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif