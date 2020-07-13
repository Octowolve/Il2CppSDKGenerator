#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigureWidgetscAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ConfigureWidgets>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& gameHud() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ConfigureWidgetscAnonStorey1*, uintptr_t))(Il2CppBase() + 0x257F8A8))(this, it);
	}

};

}
