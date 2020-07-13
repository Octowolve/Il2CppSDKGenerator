#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBtnMapInfocAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBtnMapInfo>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& indexFirstLevelTab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetBtnMapInfocAnonStorey7*, uintptr_t))(Il2CppBase() + 0x212D1E0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetBtnMapInfocAnonStorey7*, uintptr_t))(Il2CppBase() + 0x212D228))(this, it);
	}

};

}
