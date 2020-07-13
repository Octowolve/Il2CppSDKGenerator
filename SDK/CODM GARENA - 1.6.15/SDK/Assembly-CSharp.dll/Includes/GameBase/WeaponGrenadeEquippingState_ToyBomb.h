#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeEquippingStateToyBomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeEquippingState_ToyBomb"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStateList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetStateList() {
		return ((T (*)(WeaponGrenadeEquippingStateToyBomb*))(Il2CppBase() + 0x3A48BA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ResetStateList() {
		return ((T (*)(WeaponGrenadeEquippingStateToyBomb*))(Il2CppBase() + 0x3A48ED0))(this);
	}

};

}
