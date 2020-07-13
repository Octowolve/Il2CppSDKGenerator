#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTopThreeWantedItemcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetTopThreeWantedItem>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& weaponAid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& weaponBid() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetTopThreeWantedItemcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3DD2CEC))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetTopThreeWantedItemcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3DD2D60))(this, it);
	}

};

}
