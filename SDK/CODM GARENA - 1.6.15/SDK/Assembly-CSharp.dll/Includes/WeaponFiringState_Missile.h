#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFiringStateMissile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFiringState_Missile"));
	}

	template <typename T = float> T& m_MissileLaunchTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LaunchMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExplodeMissile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFiringStateMissile*))(Il2CppBase() + 0x45823EC))(this);
	}
	template <typename T = void> T InitMissile() {
		return ((T (*)(WeaponFiringStateMissile*))(Il2CppBase() + 0x4582644))(this);
	}
	template <typename T = void> T LaunchMissile() {
		return ((T (*)(WeaponFiringStateMissile*))(Il2CppBase() + 0x4582B40))(this);
	}
	template <typename T = void> T ExplodeMissile() {
		return ((T (*)(WeaponFiringStateMissile*))(Il2CppBase() + 0x4582ED0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponFiringStateMissile*, float))(Il2CppBase() + 0x4583250))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFiringStateMissile*))(Il2CppBase() + 0x4583340))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFiringStateMissile*, float))(Il2CppBase() + 0x4583348))(this, P0);
	}

};

}
