#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponSparrowFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponSparrowFiringState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_StateMachine() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& WeaponFireNum() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A88D40))(this);
	}
	template <typename T = void> T ServerStartFire() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A88FC4))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponSparrowFiringState*, float))(Il2CppBase() + 0x3A8905C))(this, DeltaTime);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A8912C))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A89350))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A893F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ServerStartFire() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A89400))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponSparrowFiringState*, float))(Il2CppBase() + 0x3A89408))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponFire() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A89410))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponSparrowFiringState*))(Il2CppBase() + 0x3A89418))(this);
	}

};

}
