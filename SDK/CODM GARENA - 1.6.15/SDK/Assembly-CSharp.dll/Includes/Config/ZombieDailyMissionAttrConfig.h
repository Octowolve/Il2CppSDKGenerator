#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieDailyMissionAttrConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieDailyMissionAttrConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PowerLowLimit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PowerHighLimit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MonsterLevel() {
		return *(T*)((uintptr_t)this + 0x18);
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
		return ((T (*)(ZombieDailyMissionAttrConfig*))(Il2CppBase() + 0x414C050))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ZombieDailyMissionAttrConfig*))(Il2CppBase() + 0x414C0F0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ZombieDailyMissionAttrConfig*, int32_t))(Il2CppBase() + 0x414C0F8))(this, value);
	}
	template <typename T = int32_t> T get_PowerLowLimit() {
		return ((T (*)(ZombieDailyMissionAttrConfig*))(Il2CppBase() + 0x414C100))(this);
	}
	template <typename T = void> T set_PowerLowLimit(int32_t value) {
		return ((T (*)(ZombieDailyMissionAttrConfig*, int32_t))(Il2CppBase() + 0x414C108))(this, value);
	}
	template <typename T = int32_t> T get_PowerHighLimit() {
		return ((T (*)(ZombieDailyMissionAttrConfig*))(Il2CppBase() + 0x414C110))(this);
	}
	template <typename T = void> T set_PowerHighLimit(int32_t value) {
		return ((T (*)(ZombieDailyMissionAttrConfig*, int32_t))(Il2CppBase() + 0x414C118))(this, value);
	}
	template <typename T = int32_t> T get_MonsterLevel() {
		return ((T (*)(ZombieDailyMissionAttrConfig*))(Il2CppBase() + 0x414C120))(this);
	}
	template <typename T = void> T set_MonsterLevel(int32_t value) {
		return ((T (*)(ZombieDailyMissionAttrConfig*, int32_t))(Il2CppBase() + 0x414C128))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieDailyMissionAttrConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414C130))(this, bytes, position);
	}

};

}
