#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SuperWeaponButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SuperWeaponButtonView"));
	}

	template <typename T = uintptr_t> T& m_BtnSuperWeapon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GuideWidget() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_WeaponSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_PowerSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_LightSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& m_PowerTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsGuideSuperWeapon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_CacheAutoFireState() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = float> T& m_TimetoPutDownWeapon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsGiveSuperWeapon() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipSuperWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPutDownSuperWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A59E4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A5B04))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A5C4C))(this);
	}
	template <typename T = void> T OnEquipSuperWeapon() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A5D94))(this);
	}
	template <typename T = void> T OnPutDownSuperWeapon() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A6060))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A6288))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A64C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A64C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SuperWeaponButtonView*))(Il2CppBase() + 0x29A64D0))(this);
	}

};

}
