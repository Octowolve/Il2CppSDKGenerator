#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPlaylistCellClickcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnPlaylistCellClick>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnPlaylistCellClickcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1D78344))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnPlaylistCellClickcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1D78378))(this, it);
	}

};

}
