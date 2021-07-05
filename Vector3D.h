#pragma once

struct Vector3D
{
	float x, y, z;

	Vector3D(float a, float b, float c);

	float& operator [] (int i);

	const float& operator [](int i) const;

	Vector3D& operator +=(const Vector3D& v);

	Vector3D& operator -=(const Vector3D& v);

	Vector3D& operator *=(float s);

	Vector3D& operator /=(float s);
};

inline Vector3D operator +(const Vector3D& a, const Vector3D& b);

inline Vector3D operator -(const Vector3D& a, const Vector3D& b);

inline Vector3D operator *(const Vector3D& v, float s);

inline Vector3D operator /(const Vector3D& v, float s);

inline Vector3D operator -(const Vector3D& v);

