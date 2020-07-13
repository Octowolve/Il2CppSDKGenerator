#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutCompoundNavigation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutCompoundNavigation"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(LoadoutCompoundNavigation*))(Il2CppBase() + 0x1A231E4))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(LoadoutCompoundNavigation*))(Il2CppBase() + 0x1A2329C))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(LoadoutCompoundNavigation*))(Il2CppBase() + 0x1A2333C))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutCompoundNavigation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A233DC))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutCompoundNavigation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A23624))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(LoadoutCompoundNavigation*))(Il2CppBase() + 0x1A23708))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(LoadoutCompoundNavigation*))(Il2CppBase() + 0x1A23710))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(LoadoutCompoundNavigation*))(Il2CppBase() + 0x1A23718))(this);
	}

};

}
