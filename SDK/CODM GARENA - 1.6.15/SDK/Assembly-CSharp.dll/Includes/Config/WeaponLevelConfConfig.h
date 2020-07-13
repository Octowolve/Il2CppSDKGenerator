#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class WeaponLevelConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "WeaponLevelConfConfig"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T& CacheWeaponUpgradeConfList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uint32_t>*> T& PvpUnlockIdList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& PveUnlockIdList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& BrUnlockIdList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& GroupId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& PVPUnlock_Type_1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& PVPUnlock_Value_1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& PVPUnlock_Type_2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& PVPUnlock_Value_2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& PVEUnlock_Type_1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PVEUnlock_Value_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& PVEUnlock_Type_2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& PVEUnlock_Value_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& BRUnlock_Type_1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& BRUnlock_Value_1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponUpgradeConfigList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T GetWeaponUpgradeConfigList(int32_t groupId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30F7C90))(0, groupId);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F80B0))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F828C))(this);
	}
	template <typename T = int32_t> T GetSecondaryKeyValue() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F835C))(this);
	}
	template <typename T = uint32_t> T get_GroupId() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F80A8))(this);
	}
	template <typename T = void> T set_GroupId(uint32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, uint32_t))(Il2CppBase() + 0x30F8434))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F842C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F843C))(this, value);
	}
	template <typename T = int32_t> T get_Exp() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F8444))(this);
	}
	template <typename T = void> T set_Exp(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F844C))(this, value);
	}
	template <typename T = int32_t> T get_PVPUnlock_Type_1() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F8454))(this);
	}
	template <typename T = void> T set_PVPUnlock_Type_1(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F845C))(this, value);
	}
	template <typename T = int32_t> T get_PVPUnlock_Value_1() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F8264))(this);
	}
	template <typename T = void> T set_PVPUnlock_Value_1(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F8464))(this, value);
	}
	template <typename T = int32_t> T get_PVPUnlock_Type_2() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F846C))(this);
	}
	template <typename T = void> T set_PVPUnlock_Type_2(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F8474))(this, value);
	}
	template <typename T = int32_t> T get_PVPUnlock_Value_2() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F826C))(this);
	}
	template <typename T = void> T set_PVPUnlock_Value_2(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F847C))(this, value);
	}
	template <typename T = int32_t> T get_PVEUnlock_Type_1() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F8484))(this);
	}
	template <typename T = void> T set_PVEUnlock_Type_1(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F848C))(this, value);
	}
	template <typename T = int32_t> T get_PVEUnlock_Value_1() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F8274))(this);
	}
	template <typename T = void> T set_PVEUnlock_Value_1(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F8494))(this, value);
	}
	template <typename T = int32_t> T get_PVEUnlock_Type_2() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F849C))(this);
	}
	template <typename T = void> T set_PVEUnlock_Type_2(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F84A4))(this, value);
	}
	template <typename T = int32_t> T get_PVEUnlock_Value_2() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F827C))(this);
	}
	template <typename T = void> T set_PVEUnlock_Value_2(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F84AC))(this, value);
	}
	template <typename T = int32_t> T get_BRUnlock_Type_1() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F84B4))(this);
	}
	template <typename T = void> T set_BRUnlock_Type_1(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F84BC))(this, value);
	}
	template <typename T = int32_t> T get_BRUnlock_Value_1() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F8284))(this);
	}
	template <typename T = void> T set_BRUnlock_Value_1(int32_t value) {
		return ((T (*)(WeaponLevelConfConfig*, int32_t))(Il2CppBase() + 0x30F84C4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(WeaponLevelConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30F84CC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetWeaponUpgradeConfigListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x30F87DC))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(WeaponLevelConfConfig*))(Il2CppBase() + 0x30F880C))(this);
	}

};

}
