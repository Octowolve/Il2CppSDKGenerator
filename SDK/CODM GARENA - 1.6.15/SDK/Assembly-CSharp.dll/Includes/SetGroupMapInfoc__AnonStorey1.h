#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetGroupMapInfocAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetGroupMapInfo>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& pveLevelId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mpMapConfig() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetGroupMapInfocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2146FC0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetGroupMapInfocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2147004))(this, it);
	}

};

}
