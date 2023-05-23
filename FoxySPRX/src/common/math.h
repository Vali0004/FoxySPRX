#pragma once
#include "pch/pch.h"
#define PI 3.1415926535897931L
union flValue { float f; u32 i; };

float degreesToRadians(float degrees) {
    return degrees * PI / 180.0f;
}
float radiansToDegrees(float radians) {
    return radians * 180.0f / PI;
}
int ceil(float num) {
    int i{ static_cast<int>(num) };
    if (num == static_cast<float>(i)) {
        return i;
    }
    return i + 1;
}
int round(float f) {
    int i{ static_cast<int>(f) };
    float t{ f - i };
    return t < 0.5f ? i : i + 1;
}
#define abs(x) (x < 0 ? -x : x)
float pow(float value, int pow) {
    float ret{ 1.f };
    for (int i{}; i != pow; ++i)
        ret = ret * value;
    return ret;
}
float root(float num, int amount) {
    int iterations{ 15 * (amount - 1) };
    float x{ iterations * 100 };
    for (int i{ 1 }; i != iterations; ++i) {
        x = static_cast<float>(((1.f / amount) * (((amount - 1) * x) + (num / pow(x, amount - 1)))));
    }
    return x;
}
float sin(float degrees) {
    while (degrees > 180)
        degrees -= 360;
    while (degrees < -180)
        degrees += 360;
    float absDegrees{ abs(degrees) };
    int sign{ degrees / absDegrees };
    degrees = absDegrees;
    return (float)(4 * degrees * (180 - degrees)) / (40500 - degrees * (180 - degrees)) * sign;
}
float cos(float degrees) {
    float anglesRad = degreesToRadians(degrees);
    float radiance{ (float)(PI / 2.0f) - anglesRad };
    float angle{ radiansToDegrees(radiance) };
    return sin(angle);
}
float tan(float degrees) {
    return sin(degrees) / cos(degrees);
}
float sqrt(float num) {
    return root(num, 2);
}
float fastlog(float x) {
    flValue vx = { x };
    flValue mx = { (vx.i & 0x007FFFFF) | 0x3f000000 };
    float y = vx.i;
    y *= 1.1920928955078125e-7f;
    return 0.69314718f * (y - 124.22551499f - 1.498030302f * mx.f - 1.72587999f / (0.3520887068f + mx.f));
}