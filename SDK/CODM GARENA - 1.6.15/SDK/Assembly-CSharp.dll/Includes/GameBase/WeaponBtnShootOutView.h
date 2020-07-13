#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponBtnShootOutView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponBtnShootOutView"));
	}

	template <typename T = uintptr_t> T& ChangeWeaponFX() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurWeaponBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateCurWeaponBarView() {
		return ((T (*)(WeaponBtnShootOutView*))(Il2CppBase() + 0x1C587D8))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(WeaponBtnShootOutView*))(Il2CppBase() + 0x1C58BD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCurWeaponBarView() {
		return ((T (*)(WeaponBtnShootOutView*))(Il2CppBase() + 0x1C59688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateWeapon() {
		return ((T (*)(WeaponBtnShootOutView*))(Il2CppBase() + 0x1C5968C))(this);
	}

};

}
