#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPlaylistDatacAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPlaylistData>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& k() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& f__ref$2() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(InitPlaylistDatacAnonStorey3*, uint32_t))(Il2CppBase() + 0x212CC3C))(this, it);
	}

};

}
