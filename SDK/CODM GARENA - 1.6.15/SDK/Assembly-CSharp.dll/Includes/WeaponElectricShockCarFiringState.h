#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponElectricShockCarFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponElectricShockCarFiringState"));
	}

	template <typename T = bool> T& isWaitChangeWeapon() {
		return *(T*)((uintptr_t)this + 0x36);
	}
	template <typename T = float> T& m_WaitTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponElectricShockCarFiringState*))(Il2CppBase() + 0x45A09AC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponElectricShockCarFiringState*, float))(Il2CppBase() + 0x45A0D44))(this, DeltaTime);
	}
	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WeaponElectricShockCarFiringState*))(Il2CppBase() + 0x45A0C14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponElectricShockCarFiringState*))(Il2CppBase() + 0x45A0F0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponElectricShockCarFiringState*, float))(Il2CppBase() + 0x45A0F14))(this, P0);
	}

};

}
