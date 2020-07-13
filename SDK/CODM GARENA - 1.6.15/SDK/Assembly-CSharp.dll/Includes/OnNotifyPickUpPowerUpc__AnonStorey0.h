#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNotifyPickUpPowerUpcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnNotifyPickUpPowerUp>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& pickupConf() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnNotifyPickUpPowerUpcAnonStorey0*))(Il2CppBase() + 0x3EC9A2C))(this);
	}

};

}
