#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TryGetMpLadderInfoLastChoosecAnonStorey15
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TryGetMpLadderInfoLastChoose>c__AnonStorey15"));
	}

	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(TryGetMpLadderInfoLastChoosecAnonStorey15*, uintptr_t))(Il2CppBase() + 0x431911C))(this, it);
	}

};

}
