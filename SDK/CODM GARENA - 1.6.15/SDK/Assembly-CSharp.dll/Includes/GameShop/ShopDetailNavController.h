#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopDetailNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopDetailNavController"));
	}

	template <typename T = uintptr_t> T& m_WeaponDetailCtr() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_AvatarAdapterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237DBDC))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237DC7C))(this);
	}
	template <typename T = uintptr_t> T AvatarAdapterType() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237DD1C))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237DDBC))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237DE74))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(ShopDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237DF14))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(ShopDetailNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x237E288))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237E36C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237E374))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_AvatarAdapterType() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237E37C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237E384))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(ShopDetailNavController*))(Il2CppBase() + 0x237E38C))(this);
	}

};

}
