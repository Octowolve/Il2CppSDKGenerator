#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrappleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrappleGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseWeaponCheckFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartTracePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_AimingEnableCrossHair() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C69464))(this);
	}
	template <typename T = void> T PostOpenAim() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C6946C))(this);
	}
	template <typename T = bool> T IsUseWeaponCheckFire() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C69518))(this);
	}
	template <typename T = Il2CppVector3> T GetStartTracePosition() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C695B8))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WeaponGrappleGun*, uintptr_t))(Il2CppBase() + 0x1C6968C))(this, param);
	}
	template <typename T = void> T xLuaBaseProxy_PostOpenAim() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C69824))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUseWeaponCheckFire() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C69828))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetStartTracePosition() {
		return ((T (*)(WeaponGrappleGun*))(Il2CppBase() + 0x1C6982C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WeaponGrappleGun*, uintptr_t))(Il2CppBase() + 0x1C6983C))(this, P0);
	}

};

}
