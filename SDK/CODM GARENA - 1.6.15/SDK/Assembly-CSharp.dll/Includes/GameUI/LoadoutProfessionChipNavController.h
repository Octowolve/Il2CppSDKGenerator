#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutProfessionChipNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutProfessionChipNavController"));
	}

	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LoadoutProfessionChipNavController*))(Il2CppBase() + 0x1A75258))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LoadoutProfessionChipNavController*))(Il2CppBase() + 0x1A75310))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutProfessionChipNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A753B0))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutProfessionChipNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A75884))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LoadoutProfessionChipNavController*))(Il2CppBase() + 0x1A7597C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LoadoutProfessionChipNavController*))(Il2CppBase() + 0x1A75984))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowed(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(LoadoutProfessionChipNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A7598C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillClose(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(LoadoutProfessionChipNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A75994))(this, P0, P1);
	}

};

}
