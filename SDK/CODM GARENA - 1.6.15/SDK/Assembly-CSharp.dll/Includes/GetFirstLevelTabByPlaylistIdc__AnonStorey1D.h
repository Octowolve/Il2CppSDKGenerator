#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetFirstLevelTabByPlaylistIdcAnonStorey1D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetFirstLevelTabByPlaylistId>c__AnonStorey1D"));
	}

	template <typename T = uintptr_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetFirstLevelTabByPlaylistIdcAnonStorey1D*, uintptr_t))(Il2CppBase() + 0x4318708))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetFirstLevelTabByPlaylistIdcAnonStorey1D*, uintptr_t))(Il2CppBase() + 0x431873C))(this, it);
	}

};

}
