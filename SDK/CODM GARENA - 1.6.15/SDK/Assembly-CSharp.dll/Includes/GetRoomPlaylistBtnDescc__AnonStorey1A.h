#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetRoomPlaylistBtnDesccAnonStorey1A
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetRoomPlaylistBtnDesc>c__AnonStorey1A"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$25() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(GetRoomPlaylistBtnDesccAnonStorey1A*, uint32_t))(Il2CppBase() + 0x4318A48))(this, it);
	}

};

}
