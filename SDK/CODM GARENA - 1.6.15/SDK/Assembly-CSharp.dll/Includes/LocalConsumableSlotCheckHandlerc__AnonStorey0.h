#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalConsumableSlotCheckHandlercAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LocalConsumableSlotCheckHandler>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& level() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T m__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(LocalConsumableSlotCheckHandlercAnonStorey0*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18F14E0))(this, x, y);
	}

};

}
