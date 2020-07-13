#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeRoomDifficultyLevelcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<_ChangeRoomDifficultyLevel>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& difficultyLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ChangeRoomDifficultyLevelcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2146F7C))(this, it);
	}

};

}
