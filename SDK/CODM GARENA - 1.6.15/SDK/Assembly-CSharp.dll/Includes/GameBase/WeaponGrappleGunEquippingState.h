#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrappleGunEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrappleGunEquippingState"));
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
		return ((T (*)(WeaponGrappleGunEquippingState*))(Il2CppBase() + 0x1C69FB8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGrappleGunEquippingState*))(Il2CppBase() + 0x1C6A250))(this);
	}
	template <typename T = float> T GetCountingDownDuration() {
		return ((T (*)(WeaponGrappleGunEquippingState*))(Il2CppBase() + 0x1C6A330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrappleGunEquippingState*))(Il2CppBase() + 0x1C6A448))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGrappleGunEquippingState*))(Il2CppBase() + 0x1C6A450))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCountingDownDuration() {
		return ((T (*)(WeaponGrappleGunEquippingState*))(Il2CppBase() + 0x1C6A458))(this);
	}

};

}
