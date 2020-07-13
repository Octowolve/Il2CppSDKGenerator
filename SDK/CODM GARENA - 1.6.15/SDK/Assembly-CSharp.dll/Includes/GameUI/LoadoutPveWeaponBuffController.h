#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPveWeaponBuffController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPveWeaponBuffController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9CA34))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9CAD8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9CE44))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9CEEC))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9CBEC))(this);
	}
	template <typename T = void> T PreCloseAnimation() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9CF94))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9D134))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9D13C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9D144))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9D14C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreCloseAnimation() {
		return ((T (*)(LoadoutPveWeaponBuffController*))(Il2CppBase() + 0x1A9D154))(this);
	}

};

}
