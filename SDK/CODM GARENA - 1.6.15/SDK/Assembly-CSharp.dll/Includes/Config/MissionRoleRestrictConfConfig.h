#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class MissionRoleRestrictConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "MissionRoleRestrictConfConfig"));
	}

	template <typename T = int32_t> T& MapIdStr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& InitUltEnergy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsRestrict() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& RoleID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RoleSkill() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MainWeaponID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& CamoID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SecondaryWeaponID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& MainWeaponAmmoStr() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& SecondaryWeaponAmmoStr() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& GrenadeID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& GrenadeNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ScoreStreak_1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ScoreStreak_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ScoreStreak_3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B56C))(this);
	}
	template <typename T = int32_t> T get_MapIdStr() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B60C))(this);
	}
	template <typename T = void> T set_MapIdStr(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B614))(this, value);
	}
	template <typename T = int32_t> T get_InitUltEnergy() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B61C))(this);
	}
	template <typename T = void> T set_InitUltEnergy(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B624))(this, value);
	}
	template <typename T = bool> T get_IsRestrict() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B62C))(this);
	}
	template <typename T = void> T set_IsRestrict(bool value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, bool))(Il2CppBase() + 0x377B634))(this, value);
	}
	template <typename T = int32_t> T get_RoleID() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B63C))(this);
	}
	template <typename T = void> T set_RoleID(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B644))(this, value);
	}
	template <typename T = int32_t> T get_RoleSkill() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B64C))(this);
	}
	template <typename T = void> T set_RoleSkill(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B654))(this, value);
	}
	template <typename T = int32_t> T get_MainWeaponID() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B65C))(this);
	}
	template <typename T = void> T set_MainWeaponID(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B664))(this, value);
	}
	template <typename T = int32_t> T get_CamoID() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B66C))(this);
	}
	template <typename T = void> T set_CamoID(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B674))(this, value);
	}
	template <typename T = int32_t> T get_SecondaryWeaponID() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B67C))(this);
	}
	template <typename T = void> T set_SecondaryWeaponID(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B684))(this, value);
	}
	template <typename T = Il2CppString*> T get_MainWeaponAmmoStr() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B68C))(this);
	}
	template <typename T = void> T set_MainWeaponAmmoStr(Il2CppString* value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, Il2CppString*))(Il2CppBase() + 0x377B694))(this, value);
	}
	template <typename T = Il2CppString*> T get_SecondaryWeaponAmmoStr() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B69C))(this);
	}
	template <typename T = void> T set_SecondaryWeaponAmmoStr(Il2CppString* value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, Il2CppString*))(Il2CppBase() + 0x377B6A4))(this, value);
	}
	template <typename T = int32_t> T get_GrenadeID() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B6AC))(this);
	}
	template <typename T = void> T set_GrenadeID(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B6B4))(this, value);
	}
	template <typename T = int32_t> T get_GrenadeNum() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B6BC))(this);
	}
	template <typename T = void> T set_GrenadeNum(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B6C4))(this, value);
	}
	template <typename T = int32_t> T get_ScoreStreak_1() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B6CC))(this);
	}
	template <typename T = void> T set_ScoreStreak_1(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B6D4))(this, value);
	}
	template <typename T = int32_t> T get_ScoreStreak_2() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B6DC))(this);
	}
	template <typename T = void> T set_ScoreStreak_2(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B6E4))(this, value);
	}
	template <typename T = int32_t> T get_ScoreStreak_3() {
		return ((T (*)(MissionRoleRestrictConfConfig*))(Il2CppBase() + 0x377B6EC))(this);
	}
	template <typename T = void> T set_ScoreStreak_3(int32_t value) {
		return ((T (*)(MissionRoleRestrictConfConfig*, int32_t))(Il2CppBase() + 0x377B6F4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MissionRoleRestrictConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377B6FC))(this, bytes, position);
	}

};

}
