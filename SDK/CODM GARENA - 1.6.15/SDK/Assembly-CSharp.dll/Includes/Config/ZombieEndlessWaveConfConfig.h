#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ZombieEndlessWaveConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ZombieEndlessWaveConfConfig"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T& WaveRewardDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& MapId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& WaveSequenceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandomSpawnWaveUniqueIdList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& ZombieHpScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ZombieDamageScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& KillScoreScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& HitScoreScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& HitScoreLimitScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ModifierCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ModifierWhitelist() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& ModifierRandomMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Box_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Box_num() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Box_prize_num() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414CF98))(this);
	}
	template <typename T = int32_t> static T GetMaxRound() {
		return ((T (*)(void *))(Il2CppBase() + 0x414D0F8))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D3B4))(this);
	}
	template <typename T = int32_t> T get_MapId() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D484))(this);
	}
	template <typename T = void> T set_MapId(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D48C))(this, value);
	}
	template <typename T = int32_t> T get_WaveSequenceId() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D0F0))(this);
	}
	template <typename T = void> T set_WaveSequenceId(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D494))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RandomSpawnWaveUniqueIdList() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D49C))(this);
	}
	template <typename T = void> T set_RandomSpawnWaveUniqueIdList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x414D4A4))(this, value);
	}
	template <typename T = float> T get_ZombieHpScale() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D4AC))(this);
	}
	template <typename T = void> T set_ZombieHpScale(float value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, float))(Il2CppBase() + 0x414D4B4))(this, value);
	}
	template <typename T = float> T get_ZombieDamageScale() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D4BC))(this);
	}
	template <typename T = void> T set_ZombieDamageScale(float value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, float))(Il2CppBase() + 0x414D4C4))(this, value);
	}
	template <typename T = int32_t> T get_KillScoreScale() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D4CC))(this);
	}
	template <typename T = void> T set_KillScoreScale(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D4D4))(this, value);
	}
	template <typename T = int32_t> T get_HitScoreScale() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D4DC))(this);
	}
	template <typename T = void> T set_HitScoreScale(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D4E4))(this, value);
	}
	template <typename T = int32_t> T get_HitScoreLimitScale() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D4EC))(this);
	}
	template <typename T = void> T set_HitScoreLimitScale(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D4F4))(this, value);
	}
	template <typename T = int32_t> T get_ModifierCount() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D4FC))(this);
	}
	template <typename T = void> T set_ModifierCount(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D504))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ModifierWhitelist() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D50C))(this);
	}
	template <typename T = void> T set_ModifierWhitelist(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x414D514))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModifierRandomMode() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D51C))(this);
	}
	template <typename T = void> T set_ModifierRandomMode(Il2CppString* value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, Il2CppString*))(Il2CppBase() + 0x414D524))(this, value);
	}
	template <typename T = int32_t> T get_Box_id() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D0E8))(this);
	}
	template <typename T = void> T set_Box_id(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D52C))(this, value);
	}
	template <typename T = int32_t> T get_Box_num() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D534))(this);
	}
	template <typename T = void> T set_Box_num(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D53C))(this, value);
	}
	template <typename T = int32_t> T get_Box_prize_num() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D544))(this);
	}
	template <typename T = void> T set_Box_prize_num(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D54C))(this, value);
	}
	template <typename T = int32_t> T get_TimeLimit() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D554))(this);
	}
	template <typename T = void> T set_TimeLimit(int32_t value) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, int32_t))(Il2CppBase() + 0x414D55C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ZombieEndlessWaveConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x414D564))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetMaxRoundm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x414D800))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ZombieEndlessWaveConfConfig*))(Il2CppBase() + 0x414D820))(this);
	}

};

}
