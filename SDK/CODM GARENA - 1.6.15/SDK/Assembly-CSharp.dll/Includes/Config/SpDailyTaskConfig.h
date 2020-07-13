#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpDailyTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpDailyTaskConfig"));
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
	template <typename T = int32_t> T& TaskWeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& LOCID_TaskDesc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& CriticalNum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Pre_condition_type1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Pre_condition_value1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Pre_condition_type2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Pre_condition_value2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Pre_condition_type3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Pre_condition_value3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Sub_condition_value1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Sub_condition_value2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Sub_condition_value3() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& TaskType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& TaskValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& AwardId1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& AwardNum1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& AwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& AwardId2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& AwardNum2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& AwardAgingTime2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& AwardId3() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& AwardNum3() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& AwardAgingTime3() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& ConsumeCardNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTaskConditionConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTaskAwardConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_TaskModeType() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4A08))(this);
	}
	template <typename T = void> T set_TaskModeType(uintptr_t value) {
		return ((T (*)(SpDailyTaskConfig*, uintptr_t))(Il2CppBase() + 0x30E4A10))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4A18))(this);
	}
	template <typename T = uintptr_t> T GetTaskConditionConfig(int32_t type, int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t, int32_t))(Il2CppBase() + 0x30E4D2C))(this, type, value);
	}
	template <typename T = void> T AddTaskAwardConfig(int32_t id, int32_t num, Il2CppString* time) {
		return ((T (*)(SpDailyTaskConfig*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x30E4E68))(this, id, num, time);
	}
	template <typename T = int32_t> T get_TaskId() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E5054))(this);
	}
	template <typename T = void> T set_TaskId(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E505C))(this, value);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4D14))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5064))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E506C))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5074))(this, value);
	}
	template <typename T = int32_t> T get_TaskWeight() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E507C))(this);
	}
	template <typename T = void> T set_TaskWeight(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5084))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_TaskDesc() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E508C))(this);
	}
	template <typename T = void> T set_LOCID_TaskDesc(Il2CppString* value) {
		return ((T (*)(SpDailyTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30E5094))(this, value);
	}
	template <typename T = Il2CppString*> T get_TaskDesc() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E509C))(this);
	}
	template <typename T = int32_t> T get_CriticalNum() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E50AC))(this);
	}
	template <typename T = void> T set_CriticalNum(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50B4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type1() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4D1C))(this);
	}
	template <typename T = void> T set_Pre_condition_type1(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50BC))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value1() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4D24))(this);
	}
	template <typename T = void> T set_Pre_condition_value1(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50C4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type2() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E20))(this);
	}
	template <typename T = void> T set_Pre_condition_type2(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50CC))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value2() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E28))(this);
	}
	template <typename T = void> T set_Pre_condition_value2(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50D4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type3() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E30))(this);
	}
	template <typename T = void> T set_Pre_condition_type3(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50DC))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value3() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E38))(this);
	}
	template <typename T = void> T set_Pre_condition_value3(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50E4))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value1() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E50EC))(this);
	}
	template <typename T = void> T set_Sub_condition_value1(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E50F4))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value2() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E50FC))(this);
	}
	template <typename T = void> T set_Sub_condition_value2(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5104))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value3() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E510C))(this);
	}
	template <typename T = void> T set_Sub_condition_value3(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5114))(this, value);
	}
	template <typename T = int32_t> T get_TaskType() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E40))(this);
	}
	template <typename T = void> T set_TaskType(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E511C))(this, value);
	}
	template <typename T = int32_t> T get_TaskValue() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E48))(this);
	}
	template <typename T = void> T set_TaskValue(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5124))(this, value);
	}
	template <typename T = int32_t> T get_AwardId1() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E50))(this);
	}
	template <typename T = void> T set_AwardId1(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E512C))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum1() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E58))(this);
	}
	template <typename T = void> T set_AwardNum1(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5134))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime1() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E4E60))(this);
	}
	template <typename T = void> T set_AwardAgingTime1(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E513C))(this, value);
	}
	template <typename T = int32_t> T get_AwardId2() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E5024))(this);
	}
	template <typename T = void> T set_AwardId2(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5144))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum2() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E502C))(this);
	}
	template <typename T = void> T set_AwardNum2(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E514C))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime2() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E5034))(this);
	}
	template <typename T = void> T set_AwardAgingTime2(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5154))(this, value);
	}
	template <typename T = int32_t> T get_AwardId3() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E503C))(this);
	}
	template <typename T = void> T set_AwardId3(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E515C))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum3() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E5044))(this);
	}
	template <typename T = void> T set_AwardNum3(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E5164))(this, value);
	}
	template <typename T = int32_t> T get_AwardAgingTime3() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E504C))(this);
	}
	template <typename T = void> T set_AwardAgingTime3(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E516C))(this, value);
	}
	template <typename T = int32_t> T get_ConsumeCardNum() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E5174))(this);
	}
	template <typename T = void> T set_ConsumeCardNum(int32_t value) {
		return ((T (*)(SpDailyTaskConfig*, int32_t))(Il2CppBase() + 0x30E517C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpDailyTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E5184))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SpDailyTaskConfig*))(Il2CppBase() + 0x30E5550))(this);
	}

};

}
