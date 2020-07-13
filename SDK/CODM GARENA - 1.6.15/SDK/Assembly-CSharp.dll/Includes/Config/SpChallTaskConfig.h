#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpChallTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpChallTaskConfig"));
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
	template <typename T = Il2CppString*> T& LOCID_TaskDesc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& CriticalNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Pre_condition_type1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Pre_condition_value1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Pre_condition_type2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Pre_condition_value2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Pre_condition_type3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Pre_condition_value3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Sub_condition_value1() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Sub_condition_value2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Sub_condition_value3() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& TaskType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& TaskValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& AwardId1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& AwardNum1() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& AwardAgingTime1() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& AwardId2() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& AwardNum2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& AwardAgingTime2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& AwardId3() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& AwardNum3() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& AwardAgingTime3() {
		return *(T*)((uintptr_t)this + 0x80);
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
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E362C))(this);
	}
	template <typename T = void> T set_TaskModeType(uintptr_t value) {
		return ((T (*)(SpChallTaskConfig*, uintptr_t))(Il2CppBase() + 0x30E3634))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E363C))(this);
	}
	template <typename T = uintptr_t> T GetTaskConditionConfig(int32_t type, int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t, int32_t))(Il2CppBase() + 0x30E3958))(this, type, value);
	}
	template <typename T = void> T AddTaskAwardConfig(int32_t id, int32_t num, Il2CppString* time) {
		return ((T (*)(SpChallTaskConfig*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x30E3A94))(this, id, num, time);
	}
	template <typename T = int32_t> T get_TaskId() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C80))(this);
	}
	template <typename T = void> T set_TaskId(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3C88))(this, value);
	}
	template <typename T = int32_t> T get_GameMode() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3940))(this);
	}
	template <typename T = void> T set_GameMode(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3C90))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C98))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_TaskDesc() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3CA8))(this);
	}
	template <typename T = void> T set_LOCID_TaskDesc(Il2CppString* value) {
		return ((T (*)(SpChallTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30E3CB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_TaskDesc() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3CB8))(this);
	}
	template <typename T = int32_t> T get_CriticalNum() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3CC8))(this);
	}
	template <typename T = void> T set_CriticalNum(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CD0))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type1() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3948))(this);
	}
	template <typename T = void> T set_Pre_condition_type1(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CD8))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value1() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3950))(this);
	}
	template <typename T = void> T set_Pre_condition_value1(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CE0))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type2() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A4C))(this);
	}
	template <typename T = void> T set_Pre_condition_type2(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CE8))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value2() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A54))(this);
	}
	template <typename T = void> T set_Pre_condition_value2(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CF0))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type3() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A5C))(this);
	}
	template <typename T = void> T set_Pre_condition_type3(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3CF8))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value3() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A64))(this);
	}
	template <typename T = void> T set_Pre_condition_value3(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D00))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value1() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3D08))(this);
	}
	template <typename T = void> T set_Sub_condition_value1(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D10))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value2() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3D18))(this);
	}
	template <typename T = void> T set_Sub_condition_value2(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D20))(this, value);
	}
	template <typename T = int32_t> T get_Sub_condition_value3() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3D28))(this);
	}
	template <typename T = void> T set_Sub_condition_value3(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D30))(this, value);
	}
	template <typename T = int32_t> T get_TaskType() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A6C))(this);
	}
	template <typename T = void> T set_TaskType(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D38))(this, value);
	}
	template <typename T = int32_t> T get_TaskValue() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A74))(this);
	}
	template <typename T = void> T set_TaskValue(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D40))(this, value);
	}
	template <typename T = int32_t> T get_AwardId1() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A7C))(this);
	}
	template <typename T = void> T set_AwardId1(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D48))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum1() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A84))(this);
	}
	template <typename T = void> T set_AwardNum1(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D50))(this, value);
	}
	template <typename T = Il2CppString*> T get_AwardAgingTime1() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3A8C))(this);
	}
	template <typename T = void> T set_AwardAgingTime1(Il2CppString* value) {
		return ((T (*)(SpChallTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30E3D58))(this, value);
	}
	template <typename T = int32_t> T get_AwardId2() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C50))(this);
	}
	template <typename T = void> T set_AwardId2(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D60))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum2() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C58))(this);
	}
	template <typename T = void> T set_AwardNum2(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D68))(this, value);
	}
	template <typename T = Il2CppString*> T get_AwardAgingTime2() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C60))(this);
	}
	template <typename T = void> T set_AwardAgingTime2(Il2CppString* value) {
		return ((T (*)(SpChallTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30E3D70))(this, value);
	}
	template <typename T = int32_t> T get_AwardId3() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C68))(this);
	}
	template <typename T = void> T set_AwardId3(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D78))(this, value);
	}
	template <typename T = int32_t> T get_AwardNum3() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C70))(this);
	}
	template <typename T = void> T set_AwardNum3(int32_t value) {
		return ((T (*)(SpChallTaskConfig*, int32_t))(Il2CppBase() + 0x30E3D80))(this, value);
	}
	template <typename T = Il2CppString*> T get_AwardAgingTime3() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E3C78))(this);
	}
	template <typename T = void> T set_AwardAgingTime3(Il2CppString* value) {
		return ((T (*)(SpChallTaskConfig*, Il2CppString*))(Il2CppBase() + 0x30E3D88))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpChallTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E3D90))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SpChallTaskConfig*))(Il2CppBase() + 0x30E412C))(this);
	}

};

}
