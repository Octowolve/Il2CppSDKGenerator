#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPModeKillStreakFeedBackHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPModeKillStreakFeedBackHud"));
	}

	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Show() {
		return ((T (*)(SPModeKillStreakFeedBackHud*))(Il2CppBase() + 0x42EC06C))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(SPModeKillStreakFeedBackHud*))(Il2CppBase() + 0x42EC1D4))(this);
	}

};

}
