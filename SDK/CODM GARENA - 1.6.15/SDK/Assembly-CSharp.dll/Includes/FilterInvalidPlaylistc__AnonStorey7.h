#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FilterInvalidPlaylistcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FilterInvalidPlaylist>c__AnonStorey7"));
	}

	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(FilterInvalidPlaylistcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x4318560))(this, it);
	}

};

}
