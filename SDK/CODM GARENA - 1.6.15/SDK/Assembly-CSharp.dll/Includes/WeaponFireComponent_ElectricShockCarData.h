#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireComponentElectricShockCarData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireComponent_ElectricShockCarData"));
	}

	template <typename T = float> T& AliveTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uint64_t> T& ElectricShockCarRoleID() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uint64_t> T& ElectricShockCarBotID() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& ElectricShockCarSearchInterval() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& ElectricShockCarSearchRadius() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& ElectricShockCarRunSpeed() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& ElectricShockCarNearestRunSpeed() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& ElectricShockCarNearestDist() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& ElectricShockCarArrivalDist() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& ElectricShockCarAttackSameInterval() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uint32_t> T& ElectricShockCarMaxAttackNum() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& ElectricShockCarAttackInterval() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& ElectricShockCarAttackDamage() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uint32_t> T& ElectricShockCarBuffID() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = float> T& ElectricShockCarChargeTimeInterval() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = float> T& ElectricShockCarExtX() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = float> T& ElectricShockCarExtY() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = float> T& ElectricShockCarExtZ() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& ElectricShockCarHealthPoint() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& ShakeOffReduceValue() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& TargetBeAttackedIntervel() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& MsPullInterval() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& MsIgnoreGravitySpikes() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = int32_t> T& MaxAttackPlayerNum() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WeaponFireComponentElectricShockCarData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A0508))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(WeaponFireComponentElectricShockCarData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48A10B8))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
