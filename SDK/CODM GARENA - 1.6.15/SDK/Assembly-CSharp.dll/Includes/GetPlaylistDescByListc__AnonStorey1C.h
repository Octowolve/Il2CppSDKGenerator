#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPlaylistDescByListcAnonStorey1C
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPlaylistDescByList>c__AnonStorey1C"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$27() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t it) {
		return ((T (*)(GetPlaylistDescByListcAnonStorey1C*, uint32_t))(Il2CppBase() + 0x43188E0))(this, it);
	}

};

}
