#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchBagcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SwitchBag>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& bagID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(SwitchBagcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1DEA3F8))(this, e);
	}

};

}
