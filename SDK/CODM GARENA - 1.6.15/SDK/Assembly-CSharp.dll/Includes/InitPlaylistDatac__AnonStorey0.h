#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPlaylistDatacAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPlaylistData>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& j() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(InitPlaylistDatacAnonStorey0*, uint32_t))(Il2CppBase() + 0x212CB3C))(this, it);
	}

};

}
