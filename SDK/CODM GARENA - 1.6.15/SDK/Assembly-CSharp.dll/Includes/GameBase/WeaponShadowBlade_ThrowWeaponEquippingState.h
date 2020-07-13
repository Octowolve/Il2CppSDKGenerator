#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeThrowWeaponEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBlade_ThrowWeaponEquippingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponShadowBladeThrowWeaponEquippingState*))(Il2CppBase() + 0x3A800FC))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponShadowBladeThrowWeaponEquippingState*))(Il2CppBase() + 0x3A80294))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponShadowBladeThrowWeaponEquippingState*))(Il2CppBase() + 0x3A80334))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponShadowBladeThrowWeaponEquippingState*))(Il2CppBase() + 0x3A8033C))(this);
	}

};

}
