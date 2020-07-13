#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieDailySingleConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieDailySingleConfConfig"));
	}

	template <typename T = Il2CppList<int32_t>*> T& rewardList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& LevelID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DifficultyLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ZombiePowerLowLimit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ZombiePowerHighLimit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Luckybox() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Rewardshow1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Rewardshow2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ZombiePower() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LevelType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MapID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Star1_cond_str() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Star1_param() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& Star2_cond_str() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Star2_param() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& Star3_cond_str() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Star3_param() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSortedDailyChallengeList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C3A4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetSortedDailyChallengeList(int32_t spi) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x414C538))(0, spi);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C834))(this);
	}
	template <typename T = int32_t> T get_Key() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C8D4))(this);
	}
	template <typename T = void> T set_Key(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C8DC))(this, value);
	}
	template <typename T = int32_t> T get_LevelID() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C8E4))(this);
	}
	template <typename T = void> T set_LevelID(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C8EC))(this, value);
	}
	template <typename T = int32_t> T get_DifficultyLevel() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C8F4))(this);
	}
	template <typename T = void> T set_DifficultyLevel(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C8FC))(this, value);
	}
	template <typename T = int32_t> T get_ZombiePowerLowLimit() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C824))(this);
	}
	template <typename T = void> T set_ZombiePowerLowLimit(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C904))(this, value);
	}
	template <typename T = int32_t> T get_ZombiePowerHighLimit() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C82C))(this);
	}
	template <typename T = void> T set_ZombiePowerHighLimit(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C90C))(this, value);
	}
	template <typename T = int32_t> T get_Luckybox() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C914))(this);
	}
	template <typename T = void> T set_Luckybox(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C91C))(this, value);
	}
	template <typename T = int32_t> T get_Rewardshow1() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C528))(this);
	}
	template <typename T = void> T set_Rewardshow1(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C924))(this, value);
	}
	template <typename T = int32_t> T get_Rewardshow2() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C530))(this);
	}
	template <typename T = void> T set_Rewardshow2(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C92C))(this, value);
	}
	template <typename T = int32_t> T get_ZombiePower() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C934))(this);
	}
	template <typename T = void> T set_ZombiePower(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C93C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C944))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppString*))(Il2CppBase() + 0x414C94C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C954))(this);
	}
	template <typename T = Il2CppString*> T get_LevelType() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C964))(this);
	}
	template <typename T = void> T set_LevelType(Il2CppString* value) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppString*))(Il2CppBase() + 0x414C96C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MapID() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C974))(this);
	}
	template <typename T = void> T set_MapID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x414C97C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Star1_cond_str() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C984))(this);
	}
	template <typename T = void> T set_Star1_cond_str(Il2CppString* value) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppString*))(Il2CppBase() + 0x414C98C))(this, value);
	}
	template <typename T = int32_t> T get_Star1_param() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C994))(this);
	}
	template <typename T = void> T set_Star1_param(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C99C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Star2_cond_str() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C9A4))(this);
	}
	template <typename T = void> T set_Star2_cond_str(Il2CppString* value) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppString*))(Il2CppBase() + 0x414C9AC))(this, value);
	}
	template <typename T = int32_t> T get_Star2_param() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C9B4))(this);
	}
	template <typename T = void> T set_Star2_param(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C9BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Star3_cond_str() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C9C4))(this);
	}
	template <typename T = void> T set_Star3_cond_str(Il2CppString* value) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppString*))(Il2CppBase() + 0x414C9CC))(this, value);
	}
	template <typename T = int32_t> T get_Star3_param() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414C9D4))(this);
	}
	template <typename T = void> T set_Star3_param(int32_t value) {
		return ((T (*)(ZombieDailySingleConfConfig*, int32_t))(Il2CppBase() + 0x414C9DC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieDailySingleConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414C9E4))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSortedDailyChallengeListm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x414CCE0))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieDailySingleConfConfig*))(Il2CppBase() + 0x414CD18))(this);
	}

};

}
