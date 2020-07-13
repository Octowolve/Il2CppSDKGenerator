#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPlayerListLocalPlayerBelongTocAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPlayerListLocalPlayerBelongTo>c__AnonStorey7"));
	}

	template <typename T = uintptr_t> T& localPlayerDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetPlayerListLocalPlayerBelongTocAnonStorey7*, uintptr_t))(Il2CppBase() + 0x2D23BD0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetPlayerListLocalPlayerBelongTocAnonStorey7*, uintptr_t))(Il2CppBase() + 0x2D23C34))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(GetPlayerListLocalPlayerBelongTocAnonStorey7*, uintptr_t))(Il2CppBase() + 0x2D23C98))(this, it);
	}

};

}
