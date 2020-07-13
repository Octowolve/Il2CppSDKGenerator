#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionMainNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionMainNavController"));
	}

	template <typename T = bool> static T& IsNeedRegetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWeapon() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A76D98))(this);
	}
	template <typename T = bool> T IsShowWeapon() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A76E68))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A76F38))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A77020))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(WeaponPromotionMainNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A770F0))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationShowFinish(uintptr_t data) {
		return ((T (*)(WeaponPromotionMainNavController*, uintptr_t))(Il2CppBase() + 0x3A771D4))(this, data);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(WeaponPromotionMainNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A77714))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A77964))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWeapon() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A7796C))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A77974))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(WeaponPromotionMainNavController*))(Il2CppBase() + 0x3A7797C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowFinish(uintptr_t P0) {
		return ((T (*)(WeaponPromotionMainNavController*, uintptr_t))(Il2CppBase() + 0x3A77984))(this, P0);
	}

};

}
