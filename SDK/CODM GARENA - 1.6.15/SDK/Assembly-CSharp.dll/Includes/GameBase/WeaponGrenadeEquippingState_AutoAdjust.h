#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeEquippingStateAutoAdjust
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeEquippingState_AutoAdjust"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeEquippingStateAutoAdjust*))(Il2CppBase() + 0x3A485A8))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadeEquippingStateAutoAdjust*, float))(Il2CppBase() + 0x3A48720))(this, DeltaTime);
	}
	template <typename T = void> T ResetStateList() {
		return ((T (*)(WeaponGrenadeEquippingStateAutoAdjust*))(Il2CppBase() + 0x3A488D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeEquippingStateAutoAdjust*))(Il2CppBase() + 0x3A48970))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadeEquippingStateAutoAdjust*, float))(Il2CppBase() + 0x3A48974))(this, P0);
	}

};

}
