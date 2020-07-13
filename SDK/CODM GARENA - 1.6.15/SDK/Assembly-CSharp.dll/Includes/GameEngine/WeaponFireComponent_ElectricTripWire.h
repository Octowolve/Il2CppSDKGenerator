#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentElectricTripWire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ElectricTripWire"));
	}

	template <typename T = int32_t> T& m_HealthPoint() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = float> T& m_WireHeight() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = float> T& m_NodeMaxDistance() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = float> T& m_NodeCheckTimeSec() {
		return *(T*)((uintptr_t)this + 0x2BC);
	}
	template <typename T = float> T& m_WireHitDamage() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = int32_t> T& m_WireHitDamageType() {
		return *(T*)((uintptr_t)this + 0x2C4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WireHitBuff() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = float> T& m_TerritorialRadius() {
		return *(T*)((uintptr_t)this + 0x2CC);
	}
	template <typename T = float> T& m_WireLifeSec() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = int32_t> T& m_WireMaxCount() {
		return *(T*)((uintptr_t)this + 0x2D4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRealStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcInitVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAdjustFireAimRatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentElectricTripWire*, uintptr_t, bool))(Il2CppBase() + 0x23CE070))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CE53C))(this);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CE5F8))(this);
	}
	template <typename T = Il2CppVector3> T CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CE850))(this);
	}
	template <typename T = Il2CppVector3> T CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CE90C))(this);
	}
	template <typename T = bool> T ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CEB80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentElectricTripWire*, uintptr_t, bool))(Il2CppBase() + 0x23CEC20))(this, P0, P1);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcRealStartPos() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CEC24))(this);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_CalcInitVelocity() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CECE4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShouldAdjustFireAimRatation() {
		return ((T (*)(WeaponFireComponentElectricTripWire*))(Il2CppBase() + 0x23CEDA4))(this);
	}

};

}
