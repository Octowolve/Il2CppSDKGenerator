#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class EquipmentItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "EquipmentItemData"));
	}

	template <typename T = bool> T& m_CanBeForged() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_DurabilityLimit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_MaintainCurrencyType() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_ItemType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_MaintainCost() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_Penetration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_AttackForce() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_TotalAmmoAmount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_Portability() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_ReloadSpeed() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_ShotSpread() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_ClipAmmoAmount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_FightPoint() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& UpgradeType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& WeaponPointCost() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& GoldCost() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& DecomposeType() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& WeaponPointGain() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& SuitId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_CanBeForged() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE97C))(this);
	}
	template <typename T = void> T set_CanBeForged(bool value) {
		return ((T (*)(EquipmentItemData*, bool))(Il2CppBase() + 0x31CE984))(this, value);
	}
	template <typename T = int32_t> T get_DurabilityLimit() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE98C))(this);
	}
	template <typename T = void> T set_DurabilityLimit(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CE994))(this, value);
	}
	template <typename T = int32_t> T get_MaintainCurrencyType() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE99C))(this);
	}
	template <typename T = void> T set_MaintainCurrencyType(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CE9A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemType() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE9AC))(this);
	}
	template <typename T = void> T set_ItemType(Il2CppString* value) {
		return ((T (*)(EquipmentItemData*, Il2CppString*))(Il2CppBase() + 0x31CE9B4))(this, value);
	}
	template <typename T = int32_t> T get_MaintainCost() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE9BC))(this);
	}
	template <typename T = void> T set_MaintainCost(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CE9C4))(this, value);
	}
	template <typename T = int32_t> T get_Penetration() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE9CC))(this);
	}
	template <typename T = void> T set_Penetration(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CE9D4))(this, value);
	}
	template <typename T = int32_t> T get_AttackForce() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE9DC))(this);
	}
	template <typename T = void> T set_AttackForce(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CE9E4))(this, value);
	}
	template <typename T = int32_t> T get_TotalAmmoAmount() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE9EC))(this);
	}
	template <typename T = void> T set_TotalAmmoAmount(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CE9F4))(this, value);
	}
	template <typename T = int32_t> T get_Portability() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CE9FC))(this);
	}
	template <typename T = void> T set_Portability(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA04))(this, value);
	}
	template <typename T = int32_t> T get_ReloadSpeed() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA0C))(this);
	}
	template <typename T = void> T set_ReloadSpeed(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA14))(this, value);
	}
	template <typename T = int32_t> T get_ShotSpread() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA1C))(this);
	}
	template <typename T = void> T set_ShotSpread(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA24))(this, value);
	}
	template <typename T = int32_t> T get_ClipAmmoAmount() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA2C))(this);
	}
	template <typename T = void> T set_ClipAmmoAmount(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA34))(this, value);
	}
	template <typename T = int32_t> T get_FightPoint() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA3C))(this);
	}
	template <typename T = void> T set_FightPoint(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA44))(this, value);
	}
	template <typename T = int32_t> T get_UpgradeType() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA4C))(this);
	}
	template <typename T = void> T set_UpgradeType(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA54))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPointCost() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA5C))(this);
	}
	template <typename T = void> T set_WeaponPointCost(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA64))(this, value);
	}
	template <typename T = int32_t> T get_GoldCost() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA6C))(this);
	}
	template <typename T = void> T set_GoldCost(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA74))(this, value);
	}
	template <typename T = int32_t> T get_DecomposeType() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA7C))(this);
	}
	template <typename T = void> T set_DecomposeType(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA84))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPointGain() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA8C))(this);
	}
	template <typename T = void> T set_WeaponPointGain(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEA94))(this, value);
	}
	template <typename T = int32_t> T get_SuitId() {
		return ((T (*)(EquipmentItemData*))(Il2CppBase() + 0x31CEA9C))(this);
	}
	template <typename T = void> T set_SuitId(int32_t value) {
		return ((T (*)(EquipmentItemData*, int32_t))(Il2CppBase() + 0x31CEAA4))(this, value);
	}

};

}
