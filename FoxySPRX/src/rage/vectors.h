#pragma once
#include "scr_vector.h"

class Vector2;
class Vector3;
class Vector4;
namespace rage {
	struct vector2 {
		float x, y;
		Vector2 serialize();
	};
	struct vector3 {
		float x, y, z;
		Vector3 serialize();
	};
	struct vector4 {
		float x, y, z, w;
		Vector4 serialize();
	};
	union matrix34 {
		float data[3][4];
		struct { struct { float x, y, z, w; } rows[3]; };
	};
	union matrix44 {
		float data[4][4];
		struct { struct { float x, y, z, w; } rows[4]; };
	};
}
class Vector2 final {
public:
	Vector2() : x(0.f), y(0.f) {}
	Vector2(float x, float y) : x(x), y(y) {}
public:
	alignas(8) float x, y;
	rage::vector2 deserialize() {
		return { x, y };
	}
	bool empty() {
		return x == 0.f && y == 0.f;
	}
public:
	Vector2 operator*(const float amount) {
		return { x * amount, y * amount };
	}
	Vector2 operator*(const Vector2 vec) {
		return { x * vec.x, y * vec.y };
	}
	Vector2 operator/(const float amount) {
		return { x / amount, y / amount };
	}
	Vector2 operator/(const Vector2 vec) {
		return { x / vec.x, y / vec.y };
	}
	Vector2 operator+(const float amount) {
		return { x + amount, y + amount };
	}
	Vector2 operator+(const Vector2 vec) {
		return { x + vec.x, y + vec.y };
	}
	Vector2 operator-(const float amount) {
		return { x - amount, y - amount };
	}
	Vector2 operator-(const Vector2 vec) {
		return { x - vec.x, y - vec.y };
	}
	Vector2& operator+=(const float& amount) {
		x += amount;
		y += amount;
		return *this;
	}
	Vector2& operator+=(const Vector2& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2& operator-=(const float& amount) {
		x -= amount;
		y -= amount;
		return *this;
	}
	Vector2& operator-=(const Vector2& vec) {
		x -= vec.x;
		y -= vec.y;
		return *this;
	}
	Vector2& operator/=(const float& amount) {
		x /= amount;
		y /= amount;
		return *this;
	}
	Vector2& operator/=(const Vector2& vec) {
		x /= vec.x;
		y /= vec.y;
		return *this;
	}
	Vector2& operator*=(const float& amount) {
		x *= amount;
		y *= amount;
		return *this;
	}
	Vector2& operator*=(const Vector2& vec) {
		x *= vec.x;
		y *= vec.y;
		return *this;
	}
};
class Vector3 : public rage::scrVector {
public:
	Vector3() : rage::scrVector() {}
	Vector3(float x, float y, float z) : rage::scrVector(x, y, z) {}
public:
	rage::vector3 deserialize() {
		return { x, y, z };
	}
	bool empty() {
		return x == 0.f && y == 0.f && z == 0.f;
	}
public:
	Vector3 operator*(const float amount) {
		return { x * amount, y * amount, z * amount };
	}
	Vector3 operator*(const Vector3 vec) {
		return { x * vec.x, y * vec.y, z * vec.z };
	}
	Vector3 operator/(const float amount) {
		return { x / amount, y / amount, z / amount };
	}
	Vector3 operator/(const Vector3 vec) {
		return { x / vec.x, y / vec.y, z / vec.z };
	}
	Vector3 operator+(const float amount) {
		return { x + amount, y + amount, z + amount };
	}
	Vector3 operator+(const Vector3 vec) {
		return { x + vec.x, y + vec.y, z + vec.z };
	}
	Vector3 operator-(const float amount) {
		return { x - amount, y - amount, z - amount };
	}
	Vector3 operator-(const Vector3 vec) {
		return { x - vec.x, y - vec.y, z - vec.z };
	}
	Vector3& operator+=(const float& amount) {
		x += amount;
		y += amount;
		z += amount;
		return *this;
	}
	Vector3& operator+=(const Vector3& vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;
		return *this;
	}
	Vector3& operator-=(const float& amount) {
		x -= amount;
		y -= amount;
		z -= amount;
		return *this;
	}
	Vector3& operator-=(const Vector3& vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}
	Vector3& operator/=(const float& amount) {
		x /= amount;
		y /= amount;
		z /= amount;
		return *this;
	}
	Vector3& operator/=(const Vector3& vec) {
		x /= vec.x;
		y /= vec.y;
		z /= vec.z;
		return *this;
	}
	Vector3& operator*=(const float& amount) {
		x *= amount;
		y *= amount;
		z *= amount;
		return *this;
	}
	Vector3& operator*=(const Vector3& vec) {
		x *= vec.x;
		y *= vec.y;
		z *= vec.z;
		return *this;
	}
};
class Vector4 final {
public:
	Vector4() = default;
	Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
public:
	alignas(8) float x, y, z, w;
	rage::vector4 deserialize() {
		return { x, y, z, w };
	}
	bool empty() {
		return x == 0.f && y == 0.f && z == 0.f && w == 0.f;
	}
public:
	Vector4 operator*(const float amount) {
		return { x * amount, y * amount, z * amount, w * amount };
	}
	Vector4 operator*(const Vector4 vec) {
		return { x * vec.x, y * vec.y, z * vec.z, w * vec.w };
	}
	Vector4 operator/(const float amount) {
		return { x / amount, y / amount, z / amount, w / amount };
	}
	Vector4 operator/(const Vector4 vec) {
		return { x / vec.x, y / vec.y, z / vec.z, w / vec.w };
	}
	Vector4 operator+(const float amount) {
		return { x + amount, y + amount, z + amount, w + amount };
	}
	Vector4 operator+(const Vector4 vec) {
		return { x + vec.x, y + vec.y, z + vec.z, w + vec.w };
	}
	Vector4 operator-(const float amount) {
		return { x - amount, y - amount, z - amount, w - amount };
	}
	Vector4 operator-(const Vector4 vec) {
		return { x - vec.x, y - vec.y, z - vec.z, w - vec.w };
	}
	Vector4& operator+=(const float& amount) {
		x += amount;
		y += amount;
		z += amount;
		w += amount;
		return *this;
	}
	Vector4& operator+=(const Vector4& vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;
		return *this;
	}
	Vector4& operator-=(const float& amount) {
		x -= amount;
		y -= amount;
		z -= amount;
		w -= amount;
		return *this;
	}
	Vector4& operator-=(const Vector4& vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		w -= vec.w;
		return *this;
	}
	Vector4& operator/=(const float& amount) {
		x /= amount;
		y /= amount;
		z /= amount;
		w /= amount;
		return *this;
	}
	Vector4& operator/=(const Vector4& vec) {
		x /= vec.x;
		y /= vec.y;
		z /= vec.z;
		w /= vec.w;
		return *this;
	}
	Vector4& operator*=(const float& amount) {
		x *= amount;
		y *= amount;
		z *= amount;
		w *= amount;
		return *this;
	}
	Vector4& operator*=(const Vector4& vec) {
		x *= vec.x;
		y *= vec.y;
		z *= vec.z;
		w *= vec.w;
		return *this;
	}
};