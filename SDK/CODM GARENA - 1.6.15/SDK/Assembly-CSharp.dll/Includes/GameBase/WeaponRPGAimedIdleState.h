#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponRPGAimedIdleState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponRPGAimedIdleState"));
	}

	template <typename T = uintptr_t> T& m_FireRPG() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentWeaponNeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T IsCurrentWeaponNeedStopAim() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7BC3C))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7BCDC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponRPGAimedIdleState*, float))(Il2CppBase() + 0x3A7BDCC))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7BEDC))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7BFAC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCurrentWeaponNeedStopAim() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7C05C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7C064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponRPGAimedIdleState*, float))(Il2CppBase() + 0x3A7C06C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7C074))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponRPGAimedIdleState*))(Il2CppBase() + 0x3A7C07C))(this);
	}

};

}
