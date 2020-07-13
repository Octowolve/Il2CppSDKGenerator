#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnNavController"));
	}

	template <typename T = Il2CppVector3> T& _safeCullingPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveChildTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(SoldierReturnNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CA8F60))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(SoldierReturnNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CA91A8))(this, data, nextData);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(SoldierReturnNavController*))(Il2CppBase() + 0x3CA94D0))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(SoldierReturnNavController*))(Il2CppBase() + 0x3CA9588))(this);
	}
	template <typename T = void> T SetActiveChildTab(uintptr_t data) {
		return ((T (*)(SoldierReturnNavController*, uintptr_t))(Il2CppBase() + 0x3CA931C))(this, data);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(SoldierReturnNavController*))(Il2CppBase() + 0x3CA9630))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(SoldierReturnNavController*))(Il2CppBase() + 0x3CA9638))(this);
	}

};

}
