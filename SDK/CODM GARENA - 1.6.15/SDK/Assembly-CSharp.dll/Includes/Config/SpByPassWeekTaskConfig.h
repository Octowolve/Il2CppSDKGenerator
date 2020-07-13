#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpByPassWeekTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpByPassWeekTaskConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AwardList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& WeekTaskCnt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_AwardTip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& AwardId1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& AwardCount1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& AwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E301C))(this);
	}
	template <typename T = void> T AddAwardConfig(int32_t id, int32_t num, Il2CppString* time) {
		return ((T (*)(SpByPassWeekTaskConfig*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x30E314C))(this, id, num, time);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E32A8))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpByPassWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30E32B0))(this, value);
	}
	template <typename T = int32_t> T get_WeekTaskCnt() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E32B8))(this);
	}
	template <typename T = void> T set_WeekTaskCnt(int32_t value) {
		return ((T (*)(SpByPassWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30E32C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_AwardTip() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E32C8))(this);
	}
	template <typename T = void> T set_LOCID_AwardTip(Il2CppString* value) {
		return ((T (*)(SpByPassWeekTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30E32D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_AwardTip() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E32D8))(this);
	}
	template <typename T = int32_t> T get_AwardId1() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E3134))(this);
	}
	template <typename T = void> T set_AwardId1(int32_t value) {
		return ((T (*)(SpByPassWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30E32E8))(this, value);
	}
	template <typename T = int32_t> T get_AwardCount1() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E313C))(this);
	}
	template <typename T = void> T set_AwardCount1(int32_t value) {
		return ((T (*)(SpByPassWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30E32F0))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime1() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E3144))(this);
	}
	template <typename T = void> T set_AwardAgingTime1(int32_t value) {
		return ((T (*)(SpByPassWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30E32F8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpByPassWeekTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E3300))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SpByPassWeekTaskConfig*))(Il2CppBase() + 0x30E34D4))(this);
	}

};

}
