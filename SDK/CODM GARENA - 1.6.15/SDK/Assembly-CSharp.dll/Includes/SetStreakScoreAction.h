#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetStreakScoreAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetStreakScoreAction"));
	}

	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SetStreakScoreAction*))(Il2CppBase() + 0x3C0E2B4))(this);
	}

};

}
