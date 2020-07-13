#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBagcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBag>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& bagId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetBagcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1DEA1D8))(this, e);
	}

};

}
