#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsValidDatacAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsValidData>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& icurTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(IsValidDatacAnonStorey3*, uintptr_t))(Il2CppBase() + 0x350129C))(this, x);
	}

};

}
