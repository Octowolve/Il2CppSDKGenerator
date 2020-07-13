#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AvatarWeaponSceneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AvatarWeaponSceneController"));
	}

	template <typename T = uintptr_t> T& SceneBackgroundCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AllHideObjList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& backGroundModelSocket() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& lightSocket() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& currentLoadAssetsData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBackgroundLightAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyOldAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCommercialisedGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackgroundBlack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackgroundLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T LoadBackgroundLightAssets(uintptr_t loadData, bool Receive) {
		return ((T (*)(AvatarWeaponSceneController*, uintptr_t, bool))(Il2CppBase() + 0x2D6AFD4))(this, loadData, Receive);
	}
	template <typename T = void> T DestroyOldAssets() {
		return ((T (*)(AvatarWeaponSceneController*))(Il2CppBase() + 0x2D6B988))(this);
	}
	template <typename T = void> T ShowCommercialisedGroup(uintptr_t weaponConf, bool shop) {
		return ((T (*)(AvatarWeaponSceneController*, uintptr_t, bool))(Il2CppBase() + 0x2D6BCE8))(this, weaponConf, shop);
	}
	template <typename T = uintptr_t> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D6BEB8))(0);
	}
	template <typename T = void> T SetBackgroundBlack() {
		return ((T (*)(AvatarWeaponSceneController*))(Il2CppBase() + 0x2D6C03C))(this);
	}
	template <typename T = void> T SetBackgroundLight() {
		return ((T (*)(AvatarWeaponSceneController*))(Il2CppBase() + 0x2D6C264))(this);
	}
	template <typename T = void> T HideBackground() {
		return ((T (*)(AvatarWeaponSceneController*))(Il2CppBase() + 0x2D6C48C))(this);
	}
	template <typename T = void> T ShowBackground() {
		return ((T (*)(AvatarWeaponSceneController*))(Il2CppBase() + 0x2D6C578))(this);
	}

};

}
