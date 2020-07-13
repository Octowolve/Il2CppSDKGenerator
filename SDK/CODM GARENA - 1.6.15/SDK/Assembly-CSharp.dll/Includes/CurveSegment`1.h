#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurveSegment1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurveSegment`1"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T Eval(uintptr_t x) {
		return ((T (*)(CurveSegment1*, uintptr_t))(Il2CppBase() + 0x0))(this, x);
	}

};

}
