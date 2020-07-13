#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAttributeAdditionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAttributeAdditionHelper"));
	}

	template <typename T = int32_t> T& m_WeaponItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_StaticFireInterval() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_StaticFireAnimInterval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_StaticFireInterval2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_StaticHeavyAttackInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_StaticFireAnimRate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_StaticFireAnimRate2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_StaticHeavyAttackAnimRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_StaticFireGroupInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_StaticDamage() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_StaticHeavyDamage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_StaticChangeClipTime1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_StaticChangeClipStartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_StaticChangeClipLoopTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_StaticChangeClipEndTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_StaticChangeClipAnimRate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_StaticEquipTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_StaticEquipAnimRate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_StaticDisperseRate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_StaticPenetrationDamageModifier() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_StaticDistanceDamageModifier() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_StaticLogDistanceModifier() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_StaticFragCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_StaticDamageRadius() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_StaticMeleeWeaponRange() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_StaticMeleeWeaponHeavyAttackRange() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStaticValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t weapon) {
		return ((T (*)(WeaponAttributeAdditionHelper*, uintptr_t))(Il2CppBase() + 0x2EB3220))(this, weapon);
	}
	template <typename T = void> T ResetStaticValue() {
		return ((T (*)(WeaponAttributeAdditionHelper*))(Il2CppBase() + 0x2EB32E8))(this);
	}

};

}
