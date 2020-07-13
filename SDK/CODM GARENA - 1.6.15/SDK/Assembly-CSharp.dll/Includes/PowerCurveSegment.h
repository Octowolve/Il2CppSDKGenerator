#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerCurveSegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PowerCurveSegment"));
	}

	template <typename T = float> T& m_offsetX() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_offsetY() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_scaleX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_scaleY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_lnA() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_B() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ctrPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ctrPointIntensity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvalPow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SolveAB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(PowerCurveSegment*))(Il2CppBase() + 0x48024F8))(this);
	}
	template <typename T = float> T EvalPow(float x) {
		return ((T (*)(PowerCurveSegment*, float))(Il2CppBase() + 0x48025B8))(this, x);
	}
	template <typename T = float> T Eval(float x) {
		return ((T (*)(PowerCurveSegment*, float))(Il2CppBase() + 0x4802708))(this, x);
	}
	template <typename T = void> static T SolveAB(uintptr_t lnA, uintptr_t B, float x0, float y0, float m) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, float))(Il2CppBase() + 0x48027B8))(0, lnA, B, x0, y0, m);
	}

};

}
