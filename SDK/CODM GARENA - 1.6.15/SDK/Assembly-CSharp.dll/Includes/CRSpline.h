#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CRSpline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CRSpline"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& pts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector3> T Interp(float t) {
		return ((T (*)(CRSpline*, float))(Il2CppBase() + 0x31A9BD8))(this, t);
	}

};

}
