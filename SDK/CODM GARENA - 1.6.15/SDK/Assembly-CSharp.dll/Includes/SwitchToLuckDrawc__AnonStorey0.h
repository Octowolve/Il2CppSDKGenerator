#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchToLuckDrawcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SwitchToLuckDraw>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(SwitchToLuckDrawcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2A1F420))(this, x);
	}

};

}
