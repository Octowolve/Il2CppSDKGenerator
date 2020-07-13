#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentElectricShockCar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ElectricShockCar"));
	}

	template <typename T = float> T& m_AliveTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uint64_t> T& m_ElectricShockCarRoleID() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uint64_t> T& m_ElectricShockCarBotID() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& m_ElectricShockCarSearchInterval() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& m_ElectricShockCarSearchRadius() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& m_ElectricShockCarRunSpeed() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_ElectricShockCarNearestRunSpeed() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& m_ElectricShockCarNearestDist() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& m_ElectricShockCarArrivalDist() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& m_ElectricShockCarAttackSameInterval() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uint32_t> T& m_ElectricShockCarMaxAttackNum() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_ElectricShockCarAttackInterval() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = float> T& m_ElectricShockCarAttackDamage() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uint32_t> T& m_ElectricShockCarBuffID() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = float> T& m_ElectricShockCarChargeTimeInterval() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = float> T& m_ElectricShockCarExtX() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& m_ElectricShockCarExtY() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = float> T& m_ElectricShockCarExtZ() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& m_ElectricShockCarHealthPoint() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& m_ShakeOffReduceValue() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& m_TargetBeAttackedIntervel() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& m_MsPullInterval() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = float> T& m_MsIgnoreGravitySpikes() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = int32_t> T& m_MaxAttackPlayerNum() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentElectricShockCar*, uintptr_t, bool))(Il2CppBase() + 0x23CDA54))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentElectricShockCar*))(Il2CppBase() + 0x23CDC44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentElectricShockCar*, uintptr_t, bool))(Il2CppBase() + 0x23CDD00))(this, P0, P1);
	}

};

}
