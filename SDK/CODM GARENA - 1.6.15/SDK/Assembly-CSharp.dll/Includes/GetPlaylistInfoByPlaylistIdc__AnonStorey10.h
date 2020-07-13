#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPlaylistInfoByPlaylistIdcAnonStorey10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPlaylistInfoByPlaylistId>c__AnonStorey10"));
	}

	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetPlaylistInfoByPlaylistIdcAnonStorey10*, uintptr_t))(Il2CppBase() + 0x43189AC))(this, it);
	}

};

}
