#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Spline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Spline"));
	}

	template <typename T = int32_t> static T& k_Precision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& k_Step() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Loop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_ZeroValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Range() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_InternalLoopingCurve() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& frameCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Evaluate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Cache(int32_t frame) {
		return ((T (*)(Spline*, int32_t))(Il2CppBase() + 0x42EB844))(this, frame);
	}
	template <typename T = float> T Evaluate(float t) {
		return ((T (*)(Spline*, float))(Il2CppBase() + 0x42EBB1C))(this, t);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x42EBC38))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(Spline*))(Il2CppBase() + 0x42EBD04))(this);
	}

};

}
