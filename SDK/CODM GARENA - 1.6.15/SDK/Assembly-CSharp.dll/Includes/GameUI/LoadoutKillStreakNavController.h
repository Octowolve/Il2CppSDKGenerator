#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutKillStreakNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutKillStreakNavController"));
	}

	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LoadoutKillStreakNavController*))(Il2CppBase() + 0x1A5F0FC))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LoadoutKillStreakNavController*))(Il2CppBase() + 0x1A5F174))(this);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(LoadoutKillStreakNavController*, uintptr_t))(Il2CppBase() + 0x1A5F17C))(this, data);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutKillStreakNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A5F350))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutKillStreakNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A5F4BC))(this, data, nextData);
	}

};

}
