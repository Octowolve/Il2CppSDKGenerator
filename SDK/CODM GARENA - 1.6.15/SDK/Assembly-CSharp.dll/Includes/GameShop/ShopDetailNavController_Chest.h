#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailNavControllerChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailNavController_Chest"));
	}

	template <typename T = uintptr_t> T& m_ChestDetailCtr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ShopData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedResetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237E438))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237E4D8))(this);
	}
	template <typename T = bool> T IsNeedResetBackgroundTexture() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237E578))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237E618))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237E6D0))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237E770))(this);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(ShopDetailNavControllerChest*, uintptr_t))(Il2CppBase() + 0x237E810))(this, data);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(ShopDetailNavControllerChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237E8C4))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(ShopDetailNavControllerChest*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237EA88))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237ECB4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237ECBC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNeedResetBackgroundTexture() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237ECC4))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237ECCC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237ECD4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(ShopDetailNavControllerChest*))(Il2CppBase() + 0x237ECDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillShow(uintptr_t P0) {
		return ((T (*)(ShopDetailNavControllerChest*, uintptr_t))(Il2CppBase() + 0x237ECE4))(this, P0);
	}

};

}
