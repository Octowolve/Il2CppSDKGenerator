#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPlaylistSelectcAnonStorey10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetPlaylistSelect>c__AnonStorey10"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$15() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(SetPlaylistSelectcAnonStorey10*, uint32_t))(Il2CppBase() + 0x212D534))(this, it);
	}

};

}
