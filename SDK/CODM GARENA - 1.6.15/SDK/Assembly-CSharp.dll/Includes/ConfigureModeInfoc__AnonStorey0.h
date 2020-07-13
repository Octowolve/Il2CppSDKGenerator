#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigureModeInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ConfigureModeInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ConfigureModeInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D5E1A4))(this, it);
	}

};

}
