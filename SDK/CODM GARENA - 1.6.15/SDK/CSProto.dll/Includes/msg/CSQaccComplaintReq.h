#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSQaccComplaintReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSQaccComplaintReq"));
	}

	template <typename T = uint32_t> T& _battle_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _game_name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _player_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _client_start_time() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reported_openid() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reported_nick() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _reported_camp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _complaint_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _complaint_content() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _complaint_type2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _complaint_type3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uint32_t> T get_battle_id() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFEC0))(this);
	}
	template <typename T = void> T set_battle_id(uint32_t value) {
		return ((T (*)(CSQaccComplaintReq*, uint32_t))(Il2CppBase() + 0x51DFEC8))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFED0))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSQaccComplaintReq*, uint32_t))(Il2CppBase() + 0x51DFED8))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFEE0))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSQaccComplaintReq*, uint32_t))(Il2CppBase() + 0x51DFEE8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_game_name() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFEF0))(this);
	}
	template <typename T = void> T set_game_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSQaccComplaintReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DFEF8))(this, value);
	}
	template <typename T = uint32_t> T get_player_count() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF00))(this);
	}
	template <typename T = void> T set_player_count(uint32_t value) {
		return ((T (*)(CSQaccComplaintReq*, uint32_t))(Il2CppBase() + 0x51DFF08))(this, value);
	}
	template <typename T = uint32_t> T get_client_start_time() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF10))(this);
	}
	template <typename T = void> T set_client_start_time(uint32_t value) {
		return ((T (*)(CSQaccComplaintReq*, uint32_t))(Il2CppBase() + 0x51DFF18))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF20))(this);
	}
	template <typename T = void> T set_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSQaccComplaintReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DFF28))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reported_openid() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF30))(this);
	}
	template <typename T = void> T set_reported_openid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSQaccComplaintReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DFF38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reported_nick() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF40))(this);
	}
	template <typename T = void> T set_reported_nick(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSQaccComplaintReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DFF48))(this, value);
	}
	template <typename T = int32_t> T get_reported_camp() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF50))(this);
	}
	template <typename T = void> T set_reported_camp(int32_t value) {
		return ((T (*)(CSQaccComplaintReq*, int32_t))(Il2CppBase() + 0x51DFF58))(this, value);
	}
	template <typename T = int32_t> T get_complaint_type() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF60))(this);
	}
	template <typename T = void> T set_complaint_type(int32_t value) {
		return ((T (*)(CSQaccComplaintReq*, int32_t))(Il2CppBase() + 0x51DFF68))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_complaint_content() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF70))(this);
	}
	template <typename T = void> T set_complaint_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSQaccComplaintReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DFF78))(this, value);
	}
	template <typename T = int32_t> T get_complaint_type2() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF80))(this);
	}
	template <typename T = void> T set_complaint_type2(int32_t value) {
		return ((T (*)(CSQaccComplaintReq*, int32_t))(Il2CppBase() + 0x51DFF88))(this, value);
	}
	template <typename T = int32_t> T get_complaint_type3() {
		return ((T (*)(CSQaccComplaintReq*))(Il2CppBase() + 0x51DFF90))(this);
	}
	template <typename T = void> T set_complaint_type3(int32_t value) {
		return ((T (*)(CSQaccComplaintReq*, int32_t))(Il2CppBase() + 0x51DFF98))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSQaccComplaintReq*, bool))(Il2CppBase() + 0x51DFFA0))(this, createIfMissing);
	}

};

}
