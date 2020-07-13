#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActivityTaskDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActivityTaskDesc"));
	}

	template <typename T = uint64_t> T& _seq_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _task_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _pre_condition_type1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _pre_condition_value1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _pre_condition_type2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _pre_condition_value2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _pre_condition_type3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _pre_condition_value3() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _condition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _task_points() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _exchange_item_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<int32_t>*> T& _exchange_item_num() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _exchange_limit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _task_award_type1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint64_t> T& _task_award_id1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _task_award_num1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _task_award_type2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint64_t> T& _task_award_id2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _task_award_num2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _task_award_type3() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint64_t> T& _task_award_id3() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _task_award_num3() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _task_award_type4() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint64_t> T& _task_award_id4() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _task_award_num4() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _task_award_type5() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint64_t> T& _task_award_id5() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _task_award_num5() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _wx_actv_id() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _qq_actv_id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _qq_share_url() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Describe() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _sub_condition_value1() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& _sub_condition_value2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _sub_condition_value3() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& _go_pos() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _task_award_durable1() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& _task_award_durable2() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _task_award_durable3() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& _task_award_durable4() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& _task_award_durable5() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& _task_reset_type() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& _go_pos2() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& _go_pos3() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& _sub_condition_value4() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _go_url() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sub_condition_str1() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = uint64_t> T get_seq_id() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171104))(this);
	}
	template <typename T = void> T set_seq_id(uint64_t value) {
		return ((T (*)(CSActivityTaskDesc*, uint64_t))(Il2CppBase() + 0x517110C))(this, value);
	}
	template <typename T = int32_t> T get_task_id() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517111C))(this);
	}
	template <typename T = void> T set_task_id(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171124))(this, value);
	}
	template <typename T = int32_t> T get_pre_condition_type1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517112C))(this);
	}
	template <typename T = void> T set_pre_condition_type1(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171134))(this, value);
	}
	template <typename T = int32_t> T get_pre_condition_value1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517113C))(this);
	}
	template <typename T = void> T set_pre_condition_value1(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171144))(this, value);
	}
	template <typename T = int32_t> T get_pre_condition_type2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517114C))(this);
	}
	template <typename T = void> T set_pre_condition_type2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171154))(this, value);
	}
	template <typename T = int32_t> T get_pre_condition_value2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517115C))(this);
	}
	template <typename T = void> T set_pre_condition_value2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171164))(this, value);
	}
	template <typename T = int32_t> T get_pre_condition_type3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517116C))(this);
	}
	template <typename T = void> T set_pre_condition_type3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171174))(this, value);
	}
	template <typename T = int32_t> T get_pre_condition_value3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517117C))(this);
	}
	template <typename T = void> T set_pre_condition_value3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171184))(this, value);
	}
	template <typename T = int32_t> T get_condition() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517118C))(this);
	}
	template <typename T = void> T set_condition(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171194))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517119C))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51711A4))(this, value);
	}
	template <typename T = int32_t> T get_task_points() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51711AC))(this);
	}
	template <typename T = void> T set_task_points(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51711B4))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_exchange_item_id() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51711BC))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_exchange_item_num() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51711C4))(this);
	}
	template <typename T = int32_t> T get_exchange_limit() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51711CC))(this);
	}
	template <typename T = void> T set_exchange_limit(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51711D4))(this, value);
	}
	template <typename T = int32_t> T get_task_award_type1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51711DC))(this);
	}
	template <typename T = void> T set_task_award_type1(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51711E4))(this, value);
	}
	template <typename T = uint64_t> T get_task_award_id1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51711EC))(this);
	}
	template <typename T = void> T set_task_award_id1(uint64_t value) {
		return ((T (*)(CSActivityTaskDesc*, uint64_t))(Il2CppBase() + 0x51711F4))(this, value);
	}
	template <typename T = int32_t> T get_task_award_num1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171204))(this);
	}
	template <typename T = void> T set_task_award_num1(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517120C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_type2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171214))(this);
	}
	template <typename T = void> T set_task_award_type2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517121C))(this, value);
	}
	template <typename T = uint64_t> T get_task_award_id2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171224))(this);
	}
	template <typename T = void> T set_task_award_id2(uint64_t value) {
		return ((T (*)(CSActivityTaskDesc*, uint64_t))(Il2CppBase() + 0x517122C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_num2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517123C))(this);
	}
	template <typename T = void> T set_task_award_num2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171244))(this, value);
	}
	template <typename T = int32_t> T get_task_award_type3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517124C))(this);
	}
	template <typename T = void> T set_task_award_type3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x5171254))(this, value);
	}
	template <typename T = uint64_t> T get_task_award_id3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x517125C))(this);
	}
	template <typename T = void> T set_task_award_id3(uint64_t value) {
		return ((T (*)(CSActivityTaskDesc*, uint64_t))(Il2CppBase() + 0x5171264))(this, value);
	}
	template <typename T = int32_t> T get_task_award_num3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171274))(this);
	}
	template <typename T = void> T set_task_award_num3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517127C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_type4() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171284))(this);
	}
	template <typename T = void> T set_task_award_type4(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517128C))(this, value);
	}
	template <typename T = uint64_t> T get_task_award_id4() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171294))(this);
	}
	template <typename T = void> T set_task_award_id4(uint64_t value) {
		return ((T (*)(CSActivityTaskDesc*, uint64_t))(Il2CppBase() + 0x517129C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_num4() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51712AC))(this);
	}
	template <typename T = void> T set_task_award_num4(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51712B4))(this, value);
	}
	template <typename T = int32_t> T get_task_award_type5() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51712BC))(this);
	}
	template <typename T = void> T set_task_award_type5(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51712C4))(this, value);
	}
	template <typename T = uint64_t> T get_task_award_id5() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51712CC))(this);
	}
	template <typename T = void> T set_task_award_id5(uint64_t value) {
		return ((T (*)(CSActivityTaskDesc*, uint64_t))(Il2CppBase() + 0x51712D4))(this, value);
	}
	template <typename T = int32_t> T get_task_award_num5() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51712E4))(this);
	}
	template <typename T = void> T set_task_award_num5(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51712EC))(this, value);
	}
	template <typename T = int32_t> T get_wx_actv_id() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51712F4))(this);
	}
	template <typename T = void> T set_wx_actv_id(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51712FC))(this, value);
	}
	template <typename T = int32_t> T get_qq_actv_id() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171304))(this);
	}
	template <typename T = void> T set_qq_actv_id(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517130C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_qq_share_url() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171314))(this);
	}
	template <typename T = void> T set_qq_share_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityTaskDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x517131C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Describe() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171324))(this);
	}
	template <typename T = void> T set_Describe(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityTaskDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x517132C))(this, value);
	}
	template <typename T = int32_t> T get_sub_condition_value1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171334))(this);
	}
	template <typename T = void> T set_sub_condition_value1(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517133C))(this, value);
	}
	template <typename T = int32_t> T get_sub_condition_value2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171344))(this);
	}
	template <typename T = void> T set_sub_condition_value2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517134C))(this, value);
	}
	template <typename T = int32_t> T get_sub_condition_value3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171354))(this);
	}
	template <typename T = void> T set_sub_condition_value3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517135C))(this, value);
	}
	template <typename T = int32_t> T get_go_pos() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171364))(this);
	}
	template <typename T = void> T set_go_pos(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517136C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_durable1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171374))(this);
	}
	template <typename T = void> T set_task_award_durable1(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517137C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_durable2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171384))(this);
	}
	template <typename T = void> T set_task_award_durable2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517138C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_durable3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171394))(this);
	}
	template <typename T = void> T set_task_award_durable3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x517139C))(this, value);
	}
	template <typename T = int32_t> T get_task_award_durable4() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51713A4))(this);
	}
	template <typename T = void> T set_task_award_durable4(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51713AC))(this, value);
	}
	template <typename T = int32_t> T get_task_award_durable5() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51713B4))(this);
	}
	template <typename T = void> T set_task_award_durable5(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51713BC))(this, value);
	}
	template <typename T = int32_t> T get_task_reset_type() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51713C4))(this);
	}
	template <typename T = void> T set_task_reset_type(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51713CC))(this, value);
	}
	template <typename T = int32_t> T get_go_pos2() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51713D4))(this);
	}
	template <typename T = void> T set_go_pos2(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51713DC))(this, value);
	}
	template <typename T = int32_t> T get_go_pos3() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51713E4))(this);
	}
	template <typename T = void> T set_go_pos3(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51713EC))(this, value);
	}
	template <typename T = int32_t> T get_sub_condition_value4() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x51713F4))(this);
	}
	template <typename T = void> T set_sub_condition_value4(int32_t value) {
		return ((T (*)(CSActivityTaskDesc*, int32_t))(Il2CppBase() + 0x51713FC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_go_url() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171404))(this);
	}
	template <typename T = void> T set_go_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityTaskDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x517140C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_sub_condition_str1() {
		return ((T (*)(CSActivityTaskDesc*))(Il2CppBase() + 0x5171414))(this);
	}
	template <typename T = void> T set_sub_condition_str1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityTaskDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x517141C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActivityTaskDesc*, bool))(Il2CppBase() + 0x5171424))(this, createIfMissing);
	}

};

}
