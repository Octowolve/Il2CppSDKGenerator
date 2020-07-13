#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LinearCurveSegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinearCurveSegment"));
	}

	template <typename T = float> T& slope() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& intersect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsSlopeIntercept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T Eval(float x) {
		return ((T (*)(LinearCurveSegment*, float))(Il2CppBase() + 0x4939214))(this, x);
	}
	template <typename T = void> static T AsSlopeIntercept(uintptr_t m, uintptr_t b, float x0, float x1, float y0, float y1) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, float, float))(Il2CppBase() + 0x49392D0))(0, m, b, x0, x1, y0, y1);
	}

};

}
