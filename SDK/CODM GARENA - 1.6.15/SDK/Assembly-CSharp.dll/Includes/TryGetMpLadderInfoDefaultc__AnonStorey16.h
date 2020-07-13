#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TryGetMpLadderInfoDefaultcAnonStorey16
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TryGetMpLadderInfoDefault>c__AnonStorey16"));
	}

	template <typename T = int32_t> T& randomPlaylistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(TryGetMpLadderInfoDefaultcAnonStorey16*, uintptr_t))(Il2CppBase() + 0x43190E8))(this, it);
	}

};

}
