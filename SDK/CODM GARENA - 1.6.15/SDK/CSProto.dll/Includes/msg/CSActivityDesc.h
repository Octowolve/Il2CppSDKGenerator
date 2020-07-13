#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActivityDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActivityDesc"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _activity_class() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _time_zone() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _activity_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _activity_profile() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _miscellaneous() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _left_seq() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _top_seq() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _min_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _min_show_level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _task_group_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _activity_begin_time() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _activity_end_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _show_begin_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _show_end_time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _announcement_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _announcement_content() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _total_task_points() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_award() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _miscellaneous1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _show_pic_url() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _event_tag_type() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<int32_t>*> T& _effect_mode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _effect_num() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _lobby_view() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _view_time() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _activity_icon() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _activity_icon_url() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _show_pic() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _right_pic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _right_pic_url() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& _enable_abtest() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& _region_id() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& _is_show_local() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _shop_rate_cd() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _shop_rate_max_tip_count() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _shop_rate_url_apple() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _shop_rate_url_google_play() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _shop_rate_service_url() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170B94))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(CSActivityDesc*, uint64_t))(Il2CppBase() + 0x5170B9C))(this, value);
	}
	template <typename T = int32_t> T get_activity_class() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170BAC))(this);
	}
	template <typename T = void> T set_activity_class(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170BB4))(this, value);
	}
	template <typename T = int32_t> T get_time_zone() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170BBC))(this);
	}
	template <typename T = void> T set_time_zone(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170BC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_activity_name() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170BCC))(this);
	}
	template <typename T = void> T set_activity_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170BD4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_activity_profile() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170BDC))(this);
	}
	template <typename T = void> T set_activity_profile(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170BE4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_miscellaneous() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170BEC))(this);
	}
	template <typename T = void> T set_miscellaneous(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170BF4))(this, value);
	}
	template <typename T = int32_t> T get_left_seq() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170BFC))(this);
	}
	template <typename T = void> T set_left_seq(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C04))(this, value);
	}
	template <typename T = int32_t> T get_top_seq() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C0C))(this);
	}
	template <typename T = void> T set_top_seq(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C14))(this, value);
	}
	template <typename T = int32_t> T get_min_level() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C1C))(this);
	}
	template <typename T = void> T set_min_level(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C24))(this, value);
	}
	template <typename T = int32_t> T get_min_show_level() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C2C))(this);
	}
	template <typename T = void> T set_min_show_level(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C34))(this, value);
	}
	template <typename T = int32_t> T get_task_group_id() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C3C))(this);
	}
	template <typename T = void> T set_task_group_id(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C44))(this, value);
	}
	template <typename T = int32_t> T get_activity_begin_time() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C4C))(this);
	}
	template <typename T = void> T set_activity_begin_time(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C54))(this, value);
	}
	template <typename T = int32_t> T get_activity_end_time() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C5C))(this);
	}
	template <typename T = void> T set_activity_end_time(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C64))(this, value);
	}
	template <typename T = int32_t> T get_show_begin_time() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C6C))(this);
	}
	template <typename T = void> T set_show_begin_time(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C74))(this, value);
	}
	template <typename T = int32_t> T get_show_end_time() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C7C))(this);
	}
	template <typename T = void> T set_show_end_time(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C84))(this, value);
	}
	template <typename T = int32_t> T get_announcement_id() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C8C))(this);
	}
	template <typename T = void> T set_announcement_id(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170C94))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_announcement_content() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170C9C))(this);
	}
	template <typename T = void> T set_announcement_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170CA4))(this, value);
	}
	template <typename T = int32_t> T get_total_task_points() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CAC))(this);
	}
	template <typename T = void> T set_total_task_points(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170CB4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_award() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CBC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_miscellaneous1() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CC4))(this);
	}
	template <typename T = void> T set_miscellaneous1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170CCC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_show_pic_url() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CD4))(this);
	}
	template <typename T = void> T set_show_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170CDC))(this, value);
	}
	template <typename T = int32_t> T get_event_tag_type() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CE4))(this);
	}
	template <typename T = void> T set_event_tag_type(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170CEC))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_effect_mode() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CF4))(this);
	}
	template <typename T = int32_t> T get_effect_num() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170CFC))(this);
	}
	template <typename T = void> T set_effect_num(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170D04))(this, value);
	}
	template <typename T = int32_t> T get_lobby_view() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D0C))(this);
	}
	template <typename T = void> T set_lobby_view(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170D14))(this, value);
	}
	template <typename T = int32_t> T get_view_time() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D1C))(this);
	}
	template <typename T = void> T set_view_time(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170D24))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_activity_icon() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D2C))(this);
	}
	template <typename T = void> T set_activity_icon(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170D34))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_activity_icon_url() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D3C))(this);
	}
	template <typename T = void> T set_activity_icon_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170D44))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_show_pic() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D4C))(this);
	}
	template <typename T = void> T set_show_pic(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170D54))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_right_pic() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D5C))(this);
	}
	template <typename T = void> T set_right_pic(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170D64))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_right_pic_url() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D6C))(this);
	}
	template <typename T = void> T set_right_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170D74))(this, value);
	}
	template <typename T = bool> T get_enable_abtest() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D7C))(this);
	}
	template <typename T = void> T set_enable_abtest(bool value) {
		return ((T (*)(CSActivityDesc*, bool))(Il2CppBase() + 0x5170D84))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D8C))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(CSActivityDesc*, uint32_t))(Il2CppBase() + 0x5170D94))(this, value);
	}
	template <typename T = uint32_t> T get_region_id() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170D9C))(this);
	}
	template <typename T = void> T set_region_id(uint32_t value) {
		return ((T (*)(CSActivityDesc*, uint32_t))(Il2CppBase() + 0x5170DA4))(this, value);
	}
	template <typename T = uint32_t> T get_is_show_local() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170DAC))(this);
	}
	template <typename T = void> T set_is_show_local(uint32_t value) {
		return ((T (*)(CSActivityDesc*, uint32_t))(Il2CppBase() + 0x5170DB4))(this, value);
	}
	template <typename T = int32_t> T get_shop_rate_cd() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170DBC))(this);
	}
	template <typename T = void> T set_shop_rate_cd(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170DC4))(this, value);
	}
	template <typename T = int32_t> T get_shop_rate_max_tip_count() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170DCC))(this);
	}
	template <typename T = void> T set_shop_rate_max_tip_count(int32_t value) {
		return ((T (*)(CSActivityDesc*, int32_t))(Il2CppBase() + 0x5170DD4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_shop_rate_url_apple() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170DDC))(this);
	}
	template <typename T = void> T set_shop_rate_url_apple(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170DE4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_shop_rate_url_google_play() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170DEC))(this);
	}
	template <typename T = void> T set_shop_rate_url_google_play(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170DF4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_shop_rate_service_url() {
		return ((T (*)(CSActivityDesc*))(Il2CppBase() + 0x5170DFC))(this);
	}
	template <typename T = void> T set_shop_rate_service_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActivityDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170E04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActivityDesc*, bool))(Il2CppBase() + 0x5170E0C))(this, createIfMissing);
	}

};

}
