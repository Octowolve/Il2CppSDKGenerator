#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponElectricShockCarEquippingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponElectricShockCarEquippingState"));
	}

	template <typename T = float> T& m_EquipTimeElapse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_EquipAnimTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_PutDownTime() {
		return *(T*)((uintptr_t)this + 0x24);
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
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponElectricShockCarEquippingState*))(Il2CppBase() + 0x45A01A0))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponElectricShockCarEquippingState*, float))(Il2CppBase() + 0x45A04FC))(this, DeltaTime);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WeaponElectricShockCarEquippingState*))(Il2CppBase() + 0x45A0790))(this);
	}
	template <typename T = bool> T IsSpectated() {
		return ((T (*)(WeaponElectricShockCarEquippingState*))(Il2CppBase() + 0x45A0660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponElectricShockCarEquippingState*))(Il2CppBase() + 0x45A0994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponElectricShockCarEquippingState*, float))(Il2CppBase() + 0x45A099C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WeaponElectricShockCarEquippingState*))(Il2CppBase() + 0x45A09A4))(this);
	}

};

}
