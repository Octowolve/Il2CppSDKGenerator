#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddLadderPlaylistcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddLadderPlaylist>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& curPlaylistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(AddLadderPlaylistcAnonStorey2*, uint32_t))(Il2CppBase() + 0x211ADBC))(this, it);
	}

};

}
