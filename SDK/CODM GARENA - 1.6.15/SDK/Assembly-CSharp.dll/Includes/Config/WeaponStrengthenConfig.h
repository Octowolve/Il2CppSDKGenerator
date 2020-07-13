#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponStrengthenConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponStrengthenConfig"));
	}

	template <typename T = int32_t> T& GroupId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& StrengthenLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WeaponSkillId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& AttrData_1_AttrId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& AttrData_1_AttrValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AttrData_2_AttrId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& AttrData_2_AttrValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AttrData_3_AttrId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AttrData_3_AttrValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& AttrData_4_AttrId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& AttrData_4_AttrValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& AttrData_5_AttrId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& AttrData_5_AttrValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int64_t> T& ConsumeItemId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ConsumeItemCnt() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& BasicPower() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_GroupId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD45C))(this);
	}
	template <typename T = void> T set_GroupId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD464))(this, value);
	}
	template <typename T = int32_t> T get_StrengthenLevel() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD46C))(this);
	}
	template <typename T = void> T set_StrengthenLevel(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD474))(this, value);
	}
	template <typename T = int32_t> T get_WeaponSkillId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD47C))(this);
	}
	template <typename T = void> T set_WeaponSkillId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD484))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_1_AttrId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD48C))(this);
	}
	template <typename T = void> T set_AttrData_1_AttrId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD494))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_1_AttrValue() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD49C))(this);
	}
	template <typename T = void> T set_AttrData_1_AttrValue(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD4A4))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_2_AttrId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD4AC))(this);
	}
	template <typename T = void> T set_AttrData_2_AttrId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD4B4))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_2_AttrValue() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD4BC))(this);
	}
	template <typename T = void> T set_AttrData_2_AttrValue(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD4C4))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_3_AttrId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD4CC))(this);
	}
	template <typename T = void> T set_AttrData_3_AttrId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD4D4))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_3_AttrValue() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD4DC))(this);
	}
	template <typename T = void> T set_AttrData_3_AttrValue(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD4E4))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_4_AttrId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD4EC))(this);
	}
	template <typename T = void> T set_AttrData_4_AttrId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD4F4))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_4_AttrValue() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD4FC))(this);
	}
	template <typename T = void> T set_AttrData_4_AttrValue(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD504))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_5_AttrId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD50C))(this);
	}
	template <typename T = void> T set_AttrData_5_AttrId(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD514))(this, value);
	}
	template <typename T = int32_t> T get_AttrData_5_AttrValue() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD51C))(this);
	}
	template <typename T = void> T set_AttrData_5_AttrValue(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD524))(this, value);
	}
	template <typename T = int64_t> T get_ConsumeItemId() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD52C))(this);
	}
	template <typename T = void> T set_ConsumeItemId(int64_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int64_t))(Il2CppBase() + 0x30FD534))(this, value);
	}
	template <typename T = int32_t> T get_ConsumeItemCnt() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD544))(this);
	}
	template <typename T = void> T set_ConsumeItemCnt(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD54C))(this, value);
	}
	template <typename T = int32_t> T get_BasicPower() {
		return ((T (*)(WeaponStrengthenConfig*))(Il2CppBase() + 0x30FD554))(this);
	}
	template <typename T = void> T set_BasicPower(int32_t value) {
		return ((T (*)(WeaponStrengthenConfig*, int32_t))(Il2CppBase() + 0x30FD55C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponStrengthenConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FD564))(this, bytes, position);
	}

};

}
