#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Rectangle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Rectangle"));
	}

	template <typename T = float> T& x1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& y1() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& x2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& y2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Intersection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SegmentIntersection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Dot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cross() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InSegment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_dcmp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T Intersection(Il2CppVector2 a1, Il2CppVector2 a2) {
		return ((T (*)(Rectangle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3827134))(this, a1, a2);
	}
	template <typename T = bool> T SegmentIntersection(Il2CppVector2 a1, Il2CppVector2 a2, Il2CppVector2 b1, Il2CppVector2 b2) {
		return ((T (*)(Rectangle*, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3827528))(this, a1, a2, b1, b2);
	}
	template <typename T = float> T Dot(Il2CppVector2 A, Il2CppVector2 B) {
		return ((T (*)(Rectangle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x382764C))(this, A, B);
	}
	template <typename T = float> T Cross(Il2CppVector2 A, Il2CppVector2 B) {
		return ((T (*)(Rectangle*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3827670))(this, A, B);
	}
	template <typename T = bool> T InSegment(Il2CppVector2 P, Il2CppVector2 A, Il2CppVector2 B) {
		return ((T (*)(Rectangle*, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x3827694))(this, P, A, B);
	}
	template <typename T = int32_t> T dcmp(float x) {
		return ((T (*)(Rectangle*, float))(Il2CppBase() + 0x38276C4))(this, x);
	}

};

}
