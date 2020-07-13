#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnMapItemClickcAnonStorey11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnMapItemClick>c__AnonStorey11"));
	}

	template <typename T = int32_t> T& indexFirstLevelTab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& octMapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnMapItemClickcAnonStorey11*, uintptr_t))(Il2CppBase() + 0x212CF60))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnMapItemClickcAnonStorey11*, uintptr_t))(Il2CppBase() + 0x212CFA8))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(OnMapItemClickcAnonStorey11*, uintptr_t))(Il2CppBase() + 0x212D07C))(this, it);
	}

};

}
