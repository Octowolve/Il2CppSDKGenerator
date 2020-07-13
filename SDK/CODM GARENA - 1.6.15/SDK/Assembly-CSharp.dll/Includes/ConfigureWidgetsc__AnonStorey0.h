#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigureWidgetscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ConfigureWidgets>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& joystickConfig() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ConfigureWidgetscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x257F854))(this, it);
	}

};

}
