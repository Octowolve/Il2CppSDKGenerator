#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomRecruitNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomRecruitNtf"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _recruit_count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _room_full_count() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _recruit_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _room_type() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF030))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint32_t))(Il2CppBase() + 0x51DF038))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF040))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DF048))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF050))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uintptr_t))(Il2CppBase() + 0x51DF058))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF060))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, int32_t))(Il2CppBase() + 0x51DF068))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF070))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, int32_t))(Il2CppBase() + 0x51DF078))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF080))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint32_t))(Il2CppBase() + 0x51DF088))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF090))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, int32_t))(Il2CppBase() + 0x51DF098))(this, value);
	}
	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF0A0))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, int32_t))(Il2CppBase() + 0x51DF0A8))(this, value);
	}
	template <typename T = uint32_t> T get_recruit_count() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF0B0))(this);
	}
	template <typename T = void> T set_recruit_count(uint32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint32_t))(Il2CppBase() + 0x51DF0B8))(this, value);
	}
	template <typename T = uint32_t> T get_room_full_count() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF0C0))(this);
	}
	template <typename T = void> T set_room_full_count(uint32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint32_t))(Il2CppBase() + 0x51DF0C8))(this, value);
	}
	template <typename T = uint32_t> T get_recruit_time() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF0D0))(this);
	}
	template <typename T = void> T set_recruit_time(uint32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint32_t))(Il2CppBase() + 0x51DF0D8))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF0E0))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint64_t))(Il2CppBase() + 0x51DF0E8))(this, value);
	}
	template <typename T = uint32_t> T get_room_type() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF0F8))(this);
	}
	template <typename T = void> T set_room_type(uint32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, uint32_t))(Il2CppBase() + 0x51DF100))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(CSGroupRoomRecruitNtf*))(Il2CppBase() + 0x51DF108))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(CSGroupRoomRecruitNtf*, int32_t))(Il2CppBase() + 0x51DF110))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomRecruitNtf*, bool))(Il2CppBase() + 0x51DF118))(this, createIfMissing);
	}

};

}
