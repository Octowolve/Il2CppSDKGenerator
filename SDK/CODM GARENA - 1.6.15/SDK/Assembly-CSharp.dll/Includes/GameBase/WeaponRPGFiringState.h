#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponRPGFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponRPGFiringState"));
	}

	template <typename T = bool> T& isEndLockTarget() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C14C))(this);
	}
	template <typename T = void> T EndLock() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C1FC))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C308))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C3A0))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C478))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C538))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponRPGFiringState*))(Il2CppBase() + 0x3A7C540))(this);
	}

};

}
