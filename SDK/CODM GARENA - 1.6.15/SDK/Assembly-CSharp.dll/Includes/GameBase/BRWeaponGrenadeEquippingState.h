#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRWeaponGrenadeEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRWeaponGrenadeEquippingState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCountingDownDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(BRWeaponGrenadeEquippingState*))(Il2CppBase() + 0x3747F9C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(BRWeaponGrenadeEquippingState*))(Il2CppBase() + 0x37481DC))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(BRWeaponGrenadeEquippingState*))(Il2CppBase() + 0x37482BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(BRWeaponGrenadeEquippingState*))(Il2CppBase() + 0x37483D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(BRWeaponGrenadeEquippingState*))(Il2CppBase() + 0x37483E0))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(BRWeaponGrenadeEquippingState*))(Il2CppBase() + 0x37483E8))(this);
	}

};

}
