#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBtnPlaylistInfocAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBtnPlaylistInfo>c__AnonStorey6"));
	}

	template <typename T = int32_t> T& indexFirstLevelTab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetBtnPlaylistInfocAnonStorey6*, uintptr_t))(Il2CppBase() + 0x212D418))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetBtnPlaylistInfocAnonStorey6*, uintptr_t))(Il2CppBase() + 0x212D460))(this, it);
	}

};

}
