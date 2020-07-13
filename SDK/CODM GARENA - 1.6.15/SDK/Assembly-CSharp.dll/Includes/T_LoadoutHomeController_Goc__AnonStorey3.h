#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLoadoutHomeControllerGocAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_LoadoutHomeController_Go>c__AnonStorey3"));
	}

	template <typename T = uint32_t> T& ExpCardID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(TLoadoutHomeControllerGocAnonStorey3*, uintptr_t))(Il2CppBase() + 0x1A49724))(this, it);
	}

};

}
