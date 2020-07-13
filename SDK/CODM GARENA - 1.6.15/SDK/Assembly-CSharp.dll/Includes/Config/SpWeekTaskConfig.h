#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpWeekTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpWeekTaskConfig"));
	}

	template <typename T = uintptr_t> T& TaskModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PreConditionList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TaskCondition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TaskAwardList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ExpAwardNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TaskId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& GameMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& WeekNo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& IsNeedMoney() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LOCID_TaskDesc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CriticalNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Pre_condition_type1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Pre_condition_value1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Pre_condition_type2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Pre_condition_value2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Pre_condition_type3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Pre_condition_value3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Sub_condition_value1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Sub_condition_value2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Sub_condition_value3() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& TaskType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& TaskValue() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& AwardId1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& AwardNum1() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& AwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& AwardId2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& AwardNum2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& AwardAgingTime2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& AwardId3() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& AwardNum3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& AwardAgingTime3() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& ConsumeCardNum() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskConditionConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTaskAwardList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTaskAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBA4C))(this);
	}
	template <typename T = void> T InitCondition() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBB78))(this);
	}
	template <typename T = uintptr_t> T GetTaskConditionConfig(int32_t type, int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t, int32_t))(Il2CppBase() + 0x30EBEC0))(this, type, value);
	}
	template <typename T = void> T InitTaskAwardList() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBD30))(this);
	}
	template <typename T = void> T AddTaskAwardConfig(int32_t id, int32_t num, Il2CppString* time) {
		return ((T (*)(SpWeekTaskConfig*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x30EC008))(this, id, num, time);
	}
	template <typename T = int32_t> T get_TaskId() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1F4))(this);
	}
	template <typename T = void> T set_TaskId(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC1FC))(this, value);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBB70))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC204))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC20C))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC214))(this, value);
	}
	template <typename T = int32_t> T get_WeekNo() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC21C))(this);
	}
	template <typename T = void> T set_WeekNo(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC224))(this, value);
	}
	template <typename T = int32_t> T get_IsNeedMoney() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC22C))(this);
	}
	template <typename T = void> T set_IsNeedMoney(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC234))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_TaskDesc() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC23C))(this);
	}
	template <typename T = void> T set_LOCID_TaskDesc(Il2CppString* value) {
		return ((T (*)(SpWeekTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30EC244))(this, value);
	}
	template <typename T = Il2CppString*> T get_TaskDesc() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC24C))(this);
	}
	template <typename T = int32_t> T get_CriticalNum() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC25C))(this);
	}
	template <typename T = void> T set_CriticalNum(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC264))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type1() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBEB0))(this);
	}
	template <typename T = void> T set_Pre_condition_type1(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC26C))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value1() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBEB8))(this);
	}
	template <typename T = void> T set_Pre_condition_value1(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC274))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type2() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFC0))(this);
	}
	template <typename T = void> T set_Pre_condition_type2(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC27C))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value2() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFC8))(this);
	}
	template <typename T = void> T set_Pre_condition_value2(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC284))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type3() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFD0))(this);
	}
	template <typename T = void> T set_Pre_condition_type3(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC28C))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value3() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFD8))(this);
	}
	template <typename T = void> T set_Pre_condition_value3(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC294))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value1() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC29C))(this);
	}
	template <typename T = void> T set_Sub_condition_value1(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2A4))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value2() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC2AC))(this);
	}
	template <typename T = void> T set_Sub_condition_value2(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2B4))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value3() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC2BC))(this);
	}
	template <typename T = void> T set_Sub_condition_value3(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2C4))(this, value);
	}
	template <typename T = int32_t> T get_TaskType() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFE0))(this);
	}
	template <typename T = void> T set_TaskType(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2CC))(this, value);
	}
	template <typename T = int32_t> T get_TaskValue() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFE8))(this);
	}
	template <typename T = void> T set_TaskValue(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2D4))(this, value);
	}
	template <typename T = int32_t> T get_AwardId1() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFF0))(this);
	}
	template <typename T = void> T set_AwardId1(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2DC))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum1() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EBFF8))(this);
	}
	template <typename T = void> T set_AwardNum1(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2E4))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime1() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC000))(this);
	}
	template <typename T = void> T set_AwardAgingTime1(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2EC))(this, value);
	}
	template <typename T = int32_t> T get_AwardId2() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1C4))(this);
	}
	template <typename T = void> T set_AwardId2(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2F4))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum2() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1CC))(this);
	}
	template <typename T = void> T set_AwardNum2(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC2FC))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime2() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1D4))(this);
	}
	template <typename T = void> T set_AwardAgingTime2(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC304))(this, value);
	}
	template <typename T = int32_t> T get_AwardId3() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1DC))(this);
	}
	template <typename T = void> T set_AwardId3(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC30C))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum3() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1E4))(this);
	}
	template <typename T = void> T set_AwardNum3(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC314))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime3() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC1EC))(this);
	}
	template <typename T = void> T set_AwardAgingTime3(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC31C))(this, value);
	}
	template <typename T = int32_t> T get_ConsumeCardNum() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC324))(this);
	}
	template <typename T = void> T set_ConsumeCardNum(int32_t value) {
		return ((T (*)(SpWeekTaskConfig*, int32_t))(Il2CppBase() + 0x30EC32C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpWeekTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EC334))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SpWeekTaskConfig*))(Il2CppBase() + 0x30EC718))(this);
	}

};

}
