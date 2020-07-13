#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ActiveSysTaskConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ActiveSysTaskConfig"));
	}

	template <typename T = uintptr_t> T& ConditionType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ClientAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PreConditionList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& unlockLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& width() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& height() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Seq_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Task_group_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Pre_condition_type1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Pre_condition_value1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Pre_condition_type2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Pre_condition_value2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Pre_condition_type3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Pre_condition_value3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Condition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Task_points() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& Client_action() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& LOCID_TaskDesc() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Task_award_id1() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& Task_award_num1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& Task_award_id2() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& Task_award_num2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& Task_award_id3() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& Task_award_num3() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& Task_award_id4() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& Task_award_num4() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& Task_award_id5() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Task_award_num5() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetPreConditionList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_ConditionType() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CC20))(this);
	}
	template <typename T = void> T set_ConditionType(uintptr_t value) {
		return ((T (*)(ActiveSysTaskConfig*, uintptr_t))(Il2CppBase() + 0x2D3CC28))(this, value);
	}
	template <typename T = uintptr_t> T get_ClientAction() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CC30))(this);
	}
	template <typename T = void> T set_ClientAction(uintptr_t value) {
		return ((T (*)(ActiveSysTaskConfig*, uintptr_t))(Il2CppBase() + 0x2D3CC38))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CC40))(this);
	}
	template <typename T = void> T TrySetPreConditionList(int32_t type, int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t, int32_t))(Il2CppBase() + 0x2D3CDF0))(this, type, value);
	}
	template <typename T = void> T SetItemList(int32_t id, int32_t num) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t, int32_t))(Il2CppBase() + 0x2D3CF64))(this, id, num);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0DC))(this);
	}
	template <typename T = int32_t> T get_Seq_id() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D17C))(this);
	}
	template <typename T = void> T set_Seq_id(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D184))(this, value);
	}
	template <typename T = int32_t> T get_Task_group_id() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D18C))(this);
	}
	template <typename T = void> T set_Task_group_id(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D194))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type1() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CDE0))(this);
	}
	template <typename T = void> T set_Pre_condition_type1(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D19C))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value1() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CDE8))(this);
	}
	template <typename T = void> T set_Pre_condition_value1(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1A4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type2() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CF34))(this);
	}
	template <typename T = void> T set_Pre_condition_type2(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1AC))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value2() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CF3C))(this);
	}
	template <typename T = void> T set_Pre_condition_value2(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1B4))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_type3() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CF44))(this);
	}
	template <typename T = void> T set_Pre_condition_type3(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1BC))(this, value);
	}
	template <typename T = int32_t> T get_Pre_condition_value3() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CF4C))(this);
	}
	template <typename T = void> T set_Pre_condition_value3(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1C4))(this, value);
	}
	template <typename T = int32_t> T get_Condition() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CDD0))(this);
	}
	template <typename T = void> T set_Condition(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1CC))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D1D4))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1DC))(this, value);
	}
	template <typename T = int32_t> T get_Task_points() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D1E4))(this);
	}
	template <typename T = void> T set_Task_points(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1EC))(this, value);
	}
	template <typename T = int32_t> T get_Client_action() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CDD8))(this);
	}
	template <typename T = void> T set_Client_action(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D1F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_TaskDesc() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D1FC))(this);
	}
	template <typename T = void> T set_LOCID_TaskDesc(Il2CppString* value) {
		return ((T (*)(ActiveSysTaskConfig*, Il2CppString*))(Il2CppBase() + 0x2D3D204))(this, value);
	}
	template <typename T = Il2CppString*> T get_TaskDesc() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D20C))(this);
	}
	template <typename T = int32_t> T get_Task_award_id1() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CF54))(this);
	}
	template <typename T = void> T set_Task_award_id1(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D21C))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num1() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3CF5C))(this);
	}
	template <typename T = void> T set_Task_award_num1(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D224))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id2() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D09C))(this);
	}
	template <typename T = void> T set_Task_award_id2(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D22C))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num2() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0A4))(this);
	}
	template <typename T = void> T set_Task_award_num2(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D234))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id3() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0AC))(this);
	}
	template <typename T = void> T set_Task_award_id3(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D23C))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num3() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0B4))(this);
	}
	template <typename T = void> T set_Task_award_num3(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D244))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id4() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0BC))(this);
	}
	template <typename T = void> T set_Task_award_id4(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D24C))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num4() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0C4))(this);
	}
	template <typename T = void> T set_Task_award_num4(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D254))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_id5() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0CC))(this);
	}
	template <typename T = void> T set_Task_award_id5(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D25C))(this, value);
	}
	template <typename T = int32_t> T get_Task_award_num5() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D0D4))(this);
	}
	template <typename T = void> T set_Task_award_num5(int32_t value) {
		return ((T (*)(ActiveSysTaskConfig*, int32_t))(Il2CppBase() + 0x2D3D264))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ActiveSysTaskConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D3D26C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(ActiveSysTaskConfig*))(Il2CppBase() + 0x2D3D5D8))(this);
	}

};

}
