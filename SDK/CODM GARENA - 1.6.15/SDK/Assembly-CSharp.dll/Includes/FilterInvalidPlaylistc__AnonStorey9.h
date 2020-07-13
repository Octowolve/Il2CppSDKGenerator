#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FilterInvalidPlaylistcAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FilterInvalidPlaylist>c__AnonStorey9"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$7() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__ref$8() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(FilterInvalidPlaylistcAnonStorey9*, uint32_t))(Il2CppBase() + 0x4318594))(this, it);
	}

};

}
