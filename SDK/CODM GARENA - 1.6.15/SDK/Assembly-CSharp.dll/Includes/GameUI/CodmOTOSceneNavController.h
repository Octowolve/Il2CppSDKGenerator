#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmOTOSceneNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmOTOSceneNavController"));
	}

	template <typename T = uintptr_t> T& m_OTOCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(CodmOTOSceneNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DEAD54))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(CodmOTOSceneNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DEB0A8))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB18C))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB23C))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB2F4))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB434))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB43C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB444))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(CodmOTOSceneNavController*))(Il2CppBase() + 0x3DEB44C))(this);
	}

};

}
