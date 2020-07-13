#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieBuffLevelConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieBuffLevelConfConfig"));
	}

	template <typename T = int32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BuffID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BuffLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& BuyCost() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SellGet() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Param() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BuffRef() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& RemoveRefID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitialBuffUniqueID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuffID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextLevelBuffUniqueID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelByBuffUniqueID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBuffLevelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitialUpgradeBuffUniqueID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitialUpgradeBuffID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxUpgradeBuffUniqueID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuffLevelMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBuffLevelUpgradeMax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = int32_t> static T GetInitialBuffUniqueID(int32_t buffID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FE454))(0, buffID);
	}
	template <typename T = int32_t> static T GetBuffID(int32_t uniqueID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FE4FC))(0, uniqueID);
	}
	template <typename T = int32_t> static T GetNextLevelBuffUniqueID(int32_t buffID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FE5AC))(0, buffID);
	}
	template <typename T = int32_t> static T GetLevelByBuffUniqueID(int32_t uniqueID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FE64C))(0, uniqueID);
	}
	template <typename T = uintptr_t> static T GetBuffLevelType(int32_t uniqueID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FE704))(0, uniqueID);
	}
	template <typename T = int32_t> static T GetInitialUpgradeBuffUniqueID() {
		return ((T (*)(void *))(Il2CppBase() + 0x30FE7E4))(0);
	}
	template <typename T = int32_t> static T GetInitialUpgradeBuffID() {
		return ((T (*)(void *))(Il2CppBase() + 0x30FE880))(0);
	}
	template <typename T = int32_t> static T GetMaxUpgradeBuffUniqueID() {
		return ((T (*)(void *))(Il2CppBase() + 0x30FE918))(0);
	}
	template <typename T = bool> static T CheckBuffLevelMax(int32_t buffUniqueId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FE9B4))(0, buffUniqueId);
	}
	template <typename T = bool> static T CheckBuffLevelUpgradeMax(int32_t buffUniqueId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x30FEAE4))(0, buffUniqueId);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FEC14))(this);
	}
	template <typename T = int32_t> T get_UID() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FECB4))(this);
	}
	template <typename T = void> T set_UID(int32_t value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, int32_t))(Il2CppBase() + 0x30FECBC))(this, value);
	}
	template <typename T = int32_t> T get_BuffID() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FECC4))(this);
	}
	template <typename T = void> T set_BuffID(int32_t value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, int32_t))(Il2CppBase() + 0x30FECCC))(this, value);
	}
	template <typename T = int32_t> T get_BuffLevel() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FECD4))(this);
	}
	template <typename T = void> T set_BuffLevel(int32_t value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, int32_t))(Il2CppBase() + 0x30FECDC))(this, value);
	}
	template <typename T = int32_t> T get_BuyCost() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FECE4))(this);
	}
	template <typename T = void> T set_BuyCost(int32_t value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, int32_t))(Il2CppBase() + 0x30FECEC))(this, value);
	}
	template <typename T = int32_t> T get_SellGet() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FECF4))(this);
	}
	template <typename T = void> T set_SellGet(int32_t value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, int32_t))(Il2CppBase() + 0x30FECFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Param() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FED04))(this);
	}
	template <typename T = void> T set_Param(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30FED0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BuffRef() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FED14))(this);
	}
	template <typename T = void> T set_BuffRef(Il2CppString* value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FED1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RemoveRefID() {
		return ((T (*)(ZombieBuffLevelConfConfig*))(Il2CppBase() + 0x30FED24))(this);
	}
	template <typename T = void> T set_RemoveRefID(Il2CppString* value) {
		return ((T (*)(ZombieBuffLevelConfConfig*, Il2CppString*))(Il2CppBase() + 0x30FED2C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieBuffLevelConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30FED34))(this, bytes, position);
	}

};

}
