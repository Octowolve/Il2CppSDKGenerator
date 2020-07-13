#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponEquippingStateMissile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponEquippingState_Missile"));
	}

	template <typename T = float> T& m_EquipTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_EquipAnimTime() {
		return *(T*)((uintptr_t)this + 0x20);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponEquippingStateMissile*))(Il2CppBase() + 0x4581DC8))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponEquippingStateMissile*))(Il2CppBase() + 0x45821AC))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponEquippingStateMissile*, float))(Il2CppBase() + 0x4582280))(this, DeltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponEquippingStateMissile*))(Il2CppBase() + 0x45823D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponEquippingStateMissile*))(Il2CppBase() + 0x45823DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponEquippingStateMissile*, float))(Il2CppBase() + 0x45823E4))(this, P0);
	}

};

}
