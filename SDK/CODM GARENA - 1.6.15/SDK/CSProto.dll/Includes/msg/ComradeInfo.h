#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ComradeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ComradeInfo"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _player_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cf_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _vip_lvl() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _is_online() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _most_favor_mode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _second_favor_mode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _is_send_add_friend() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _state_flag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _conn_bus_id() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _login_source() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _clan_name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF08))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EF10))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF18))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(ComradeInfo*, uint64_t))(Il2CppBase() + 0x516EF20))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_player_name() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF30))(this);
	}
	template <typename T = void> T set_player_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ComradeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EF38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF40))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ComradeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EF48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cf_name() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF50))(this);
	}
	template <typename T = void> T set_cf_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ComradeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516EF58))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF60))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(ComradeInfo*, uintptr_t))(Il2CppBase() + 0x516EF68))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF70))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EF78))(this, value);
	}
	template <typename T = int32_t> T get_vip_lvl() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF80))(this);
	}
	template <typename T = void> T set_vip_lvl(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EF88))(this, value);
	}
	template <typename T = int32_t> T get_is_online() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EF90))(this);
	}
	template <typename T = void> T set_is_online(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EF98))(this, value);
	}
	template <typename T = uint32_t> T get_most_favor_mode() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EFA0))(this);
	}
	template <typename T = void> T set_most_favor_mode(uint32_t value) {
		return ((T (*)(ComradeInfo*, uint32_t))(Il2CppBase() + 0x516EFA8))(this, value);
	}
	template <typename T = uint32_t> T get_second_favor_mode() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EFB0))(this);
	}
	template <typename T = void> T set_second_favor_mode(uint32_t value) {
		return ((T (*)(ComradeInfo*, uint32_t))(Il2CppBase() + 0x516EFB8))(this, value);
	}
	template <typename T = int32_t> T get_is_send_add_friend() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EFC0))(this);
	}
	template <typename T = void> T set_is_send_add_friend(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EFC8))(this, value);
	}
	template <typename T = int32_t> T get_state_flag() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EFD0))(this);
	}
	template <typename T = void> T set_state_flag(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EFD8))(this, value);
	}
	template <typename T = uint32_t> T get_conn_bus_id() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EFE0))(this);
	}
	template <typename T = void> T set_conn_bus_id(uint32_t value) {
		return ((T (*)(ComradeInfo*, uint32_t))(Il2CppBase() + 0x516EFE8))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516EFF0))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516EFF8))(this, value);
	}
	template <typename T = int32_t> T get_login_source() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516F000))(this);
	}
	template <typename T = void> T set_login_source(int32_t value) {
		return ((T (*)(ComradeInfo*, int32_t))(Il2CppBase() + 0x516F008))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_clan_name() {
		return ((T (*)(ComradeInfo*))(Il2CppBase() + 0x516F010))(this);
	}
	template <typename T = void> T set_clan_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ComradeInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516F018))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ComradeInfo*, bool))(Il2CppBase() + 0x516F020))(this, createIfMissing);
	}

};

}
