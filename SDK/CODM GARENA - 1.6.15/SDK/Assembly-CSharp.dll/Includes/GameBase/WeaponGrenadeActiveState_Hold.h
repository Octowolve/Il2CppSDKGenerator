#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGrenadeActiveStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGrenadeActiveState_Hold"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSwimming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3A47814))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3A47AC0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponGrenadeActiveStateHold*, float))(Il2CppBase() + 0x3A47B9C))(this, DeltaTime);
	}
	template <typename T = void> T StartSwimming() {
		return ((T (*)(WeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3A47CDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3A47D9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3A47DA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponGrenadeActiveStateHold*, float))(Il2CppBase() + 0x3A47DAC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartSwimming() {
		return ((T (*)(WeaponGrenadeActiveStateHold*))(Il2CppBase() + 0x3A47DB4))(this);
	}

};

}
