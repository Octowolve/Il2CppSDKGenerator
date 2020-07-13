#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Sort>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& localPlayerCampType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SortcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3A064C4))(this, it);
	}

};

}
