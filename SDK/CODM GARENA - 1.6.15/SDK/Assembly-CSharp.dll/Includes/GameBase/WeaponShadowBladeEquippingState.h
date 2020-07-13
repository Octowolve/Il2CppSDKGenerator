#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponShadowBladeEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponShadowBladeEquippingState"));
	}

	template <typename T = float> T& DelayFire() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponShadowBladeEquippingState*))(Il2CppBase() + 0x3A81150))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponShadowBladeEquippingState*))(Il2CppBase() + 0x3A811F0))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponShadowBladeEquippingState*))(Il2CppBase() + 0x3A813EC))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponShadowBladeEquippingState*))(Il2CppBase() + 0x3A814B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponShadowBladeEquippingState*))(Il2CppBase() + 0x3A814B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponShadowBladeEquippingState*))(Il2CppBase() + 0x3A814C0))(this);
	}

};

}
