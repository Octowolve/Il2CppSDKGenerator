#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuoyTri
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuoyTri"));
	}

	template <typename T = Il2CppVector3> T& center() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& normal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& distanceToSurface() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& area() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& velocity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& velocityMagnitude() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& u() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& v() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& crossUV() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& crossMagnitude() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& velocityNormalized() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& dotNormalVelocityNormal() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& velocityMagTimesDot() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& dynamicForce() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& buoyantForce() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& resultantForce() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& p1() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& p2() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& p3() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& atSurface() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& resistance() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& upDot() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& fa() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Set(Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 p3, uintptr_t fo, int32_t atSurface) {
		return ((T (*)(BuoyTri*, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t))(Il2CppBase() + 0x530CC5C))(this, p1, p2, p3, fo, atSurface);
	}

};

}
