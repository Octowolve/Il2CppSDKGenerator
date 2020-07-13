#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFiringState"));
	}

	template <typename T = int32_t> T& m_StartFireFrameCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mFireTimeElapse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mFireTimeElapseInGroup() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mRealFireInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_FireTimesInGroup() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& mFireDamageTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_StopFire() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_StopAim() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = bool> static T& OpenFireIntervalLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& lastTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStopTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockSinglFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoFireGroupEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFireInGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2403A70))(this);
	}
	template <typename T = float> T GetStopTime() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2403E10))(this);
	}
	template <typename T = void> T LockSinglFire(float lockTime) {
		return ((T (*)(WeaponFiringState*, float))(Il2CppBase() + 0x2403FD4))(this, lockTime);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFiringState*, float))(Il2CppBase() + 0x24041DC))(this, DeltaTime);
	}
	template <typename T = void> T DoStopFire() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2404564))(this);
	}
	template <typename T = void> T DoFireGroupEnd() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2404654))(this);
	}
	template <typename T = void> T WeaponFireInGroup() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x24047AC))(this);
	}
	template <typename T = void> T WeaponFire() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2404CD0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2404E4C))(this);
	}
	template <typename T = void> T StopFire() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2404F20))(this);
	}
	template <typename T = void> T StopCurrentState() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2404FF4))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x24050D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2405500))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFiringState*, float))(Il2CppBase() + 0x2405508))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2405510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopFire() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2405518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopCurrentState() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2405520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponFiringState*))(Il2CppBase() + 0x2405528))(this);
	}

};

}
