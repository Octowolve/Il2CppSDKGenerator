#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConstantCurveSegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConstantCurveSegment"));
	}

	template <typename T = float> T& constValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Eval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T Eval(float x) {
		return ((T (*)(ConstantCurveSegment*, float))(Il2CppBase() + 0x4153058))(this, x);
	}

};

}
