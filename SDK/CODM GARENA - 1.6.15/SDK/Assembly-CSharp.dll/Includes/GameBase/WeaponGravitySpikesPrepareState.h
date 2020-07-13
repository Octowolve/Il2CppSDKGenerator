#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponGravitySpikesPrepareState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponGravitySpikesPrepareState"));
	}

	template <typename T = uintptr_t> T& m_ProjComponent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_StateMachine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_prepareStartTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_holdExplosionTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isGotoFireState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelfCancelPreparing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayCancelPreparingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6E6F8))(this);
	}
	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6E7B0))(this);
	}
	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6EAB4))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6ED80))(this);
	}
	template <typename T = void> T CancelPreparing() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6F064))(this);
	}
	template <typename T = void> T SelfCancelPreparing() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6EE4C))(this);
	}
	template <typename T = void> T _PlayCancelPreparingSound() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6F14C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6F25C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6F264))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6F26C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CancelPreparing() {
		return ((T (*)(WeaponGravitySpikesPrepareState*))(Il2CppBase() + 0x1C6F274))(this);
	}

};

}
