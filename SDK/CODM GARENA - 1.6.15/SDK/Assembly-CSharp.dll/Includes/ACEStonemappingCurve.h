#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ACEStonemappingCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ACEStonemappingCurve"));
	}

	template <typename T = float> static T& original_a() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& original_b() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& original_c() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& original_d() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& original_e() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& a() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& b() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& c() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& d() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& e() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsParamValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsParamValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateWhitePoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> static T IsParamValid(double a, double b, double c, double d, double maxX, double minX) {
		return ((T (*)(void *, double, double, double, double, double, double))(Il2CppBase() + 0x4A0F590))(0, a, b, c, d, maxX, minX);
	}
	template <typename T = bool> T IsParamValid_1(double maxX, double minX) {
		return ((T (*)(ACEStonemappingCurve*, double, double))(Il2CppBase() + 0x4A128C8))(this, maxX, minX);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ACEStonemappingCurve*))(Il2CppBase() + 0x4A0F71C))(this);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(ACEStonemappingCurve*, float))(Il2CppBase() + 0x4A129DC))(this, x);
	}
	template <typename T = float> T CalculateWhitePoint(float epsilon, float maxX, float testStep) {
		return ((T (*)(ACEStonemappingCurve*, float, float, float))(Il2CppBase() + 0x4A0F448))(this, epsilon, maxX, testStep);
	}

};

}
