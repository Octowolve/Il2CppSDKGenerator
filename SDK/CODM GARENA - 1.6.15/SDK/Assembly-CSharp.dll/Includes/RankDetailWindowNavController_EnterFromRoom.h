#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankDetailWindowNavControllerEnterFromRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankDetailWindowNavController_EnterFromRoom"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FC9B8))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCA58))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCAF8))(this);
	}
	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCB98))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37FCC38))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37FCE58))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCF3C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCF44))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCF4C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(RankDetailWindowNavControllerEnterFromRoom*))(Il2CppBase() + 0x37FCF54))(this);
	}

};

}
