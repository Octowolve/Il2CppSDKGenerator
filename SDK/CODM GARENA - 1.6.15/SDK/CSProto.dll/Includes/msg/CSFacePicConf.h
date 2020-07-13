#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSFacePicConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSFacePicConf"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _button_jump() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _func_index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _jump_url() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _sequence() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _start_timestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _end_timestamp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _times_per_day() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _times_showed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic_url() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _version() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _title_des() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _content_des1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _content_des2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _content_des3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _button_show() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _button_des() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _time_des() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic_url2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _pic2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _button_show2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _button_des2() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& _area_id() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint32_t> T& _second_tab() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _third_tab() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _enter_sequence() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B10))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1B18))(this, value);
	}
	template <typename T = uint32_t> T get_type() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B20))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1B28))(this, value);
	}
	template <typename T = int32_t> T get_button_jump() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B30))(this);
	}
	template <typename T = void> T set_button_jump(int32_t value) {
		return ((T (*)(CSFacePicConf*, int32_t))(Il2CppBase() + 0x51D1B38))(this, value);
	}
	template <typename T = int32_t> T get_func_index() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B40))(this);
	}
	template <typename T = void> T set_func_index(int32_t value) {
		return ((T (*)(CSFacePicConf*, int32_t))(Il2CppBase() + 0x51D1B48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_jump_url() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B50))(this);
	}
	template <typename T = void> T set_jump_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1B58))(this, value);
	}
	template <typename T = int32_t> T get_sequence() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B60))(this);
	}
	template <typename T = void> T set_sequence(int32_t value) {
		return ((T (*)(CSFacePicConf*, int32_t))(Il2CppBase() + 0x51D1B68))(this, value);
	}
	template <typename T = uint32_t> T get_start_timestamp() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B70))(this);
	}
	template <typename T = void> T set_start_timestamp(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1B78))(this, value);
	}
	template <typename T = uint32_t> T get_end_timestamp() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B80))(this);
	}
	template <typename T = void> T set_end_timestamp(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1B88))(this, value);
	}
	template <typename T = uint32_t> T get_times_per_day() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1B90))(this);
	}
	template <typename T = void> T set_times_per_day(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1B98))(this, value);
	}
	template <typename T = uint32_t> T get_times_showed() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1BA0))(this);
	}
	template <typename T = void> T set_times_showed(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1BA8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic_url() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1BB0))(this);
	}
	template <typename T = void> T set_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1BB8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1BC0))(this);
	}
	template <typename T = void> T set_pic(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1BC8))(this, value);
	}
	template <typename T = uint32_t> T get_version() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1BD0))(this);
	}
	template <typename T = void> T set_version(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1BD8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_title_des() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1BE0))(this);
	}
	template <typename T = void> T set_title_des(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1BE8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_content_des1() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1BF0))(this);
	}
	template <typename T = void> T set_content_des1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1BF8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_content_des2() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C00))(this);
	}
	template <typename T = void> T set_content_des2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C08))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_content_des3() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C10))(this);
	}
	template <typename T = void> T set_content_des3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C18))(this, value);
	}
	template <typename T = bool> T get_button_show() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C20))(this);
	}
	template <typename T = void> T set_button_show(bool value) {
		return ((T (*)(CSFacePicConf*, bool))(Il2CppBase() + 0x51D1C28))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_button_des() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C30))(this);
	}
	template <typename T = void> T set_button_des(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_time_des() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C40))(this);
	}
	template <typename T = void> T set_time_des(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic_url2() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C50))(this);
	}
	template <typename T = void> T set_pic_url2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C58))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_pic2() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C60))(this);
	}
	template <typename T = void> T set_pic2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C68))(this, value);
	}
	template <typename T = bool> T get_button_show2() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C70))(this);
	}
	template <typename T = void> T set_button_show2(bool value) {
		return ((T (*)(CSFacePicConf*, bool))(Il2CppBase() + 0x51D1C78))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_button_des2() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C80))(this);
	}
	template <typename T = void> T set_button_des2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSFacePicConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1C88))(this, value);
	}
	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1C90))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1C98))(this, value);
	}
	template <typename T = uint32_t> T get_area_id() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1CA0))(this);
	}
	template <typename T = void> T set_area_id(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1CA8))(this, value);
	}
	template <typename T = uint32_t> T get_second_tab() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1CB0))(this);
	}
	template <typename T = void> T set_second_tab(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1CB8))(this, value);
	}
	template <typename T = uint32_t> T get_third_tab() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1CC0))(this);
	}
	template <typename T = void> T set_third_tab(uint32_t value) {
		return ((T (*)(CSFacePicConf*, uint32_t))(Il2CppBase() + 0x51D1CC8))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1CD0))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(CSFacePicConf*, uintptr_t))(Il2CppBase() + 0x51D1CD8))(this, value);
	}
	template <typename T = int32_t> T get_enter_sequence() {
		return ((T (*)(CSFacePicConf*))(Il2CppBase() + 0x51D1CE0))(this);
	}
	template <typename T = void> T set_enter_sequence(int32_t value) {
		return ((T (*)(CSFacePicConf*, int32_t))(Il2CppBase() + 0x51D1CE8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSFacePicConf*, bool))(Il2CppBase() + 0x51D1CF0))(this, createIfMissing);
	}

};

}
