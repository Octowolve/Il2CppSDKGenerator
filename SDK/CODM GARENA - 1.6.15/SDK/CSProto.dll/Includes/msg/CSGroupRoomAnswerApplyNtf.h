#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAnswerApplyNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAnswerApplyNtf"));
	}

	template <typename T = bool> T& _agree() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _player_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_pvp_ladderlevel_allowed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_lower_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_upper_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T get_agree() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD46C))(this);
	}
	template <typename T = void> T set_agree(bool value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, bool))(Il2CppBase() + 0x51DD474))(this, value);
	}
	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD47C))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, uintptr_t))(Il2CppBase() + 0x51DD484))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD48C))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, uint32_t))(Il2CppBase() + 0x51DD494))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD49C))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, uint32_t))(Il2CppBase() + 0x51DD4A4))(this, value);
	}
	template <typename T = bool> T get_is_pvp_ladderlevel_allowed() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD4AC))(this);
	}
	template <typename T = void> T set_is_pvp_ladderlevel_allowed(bool value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, bool))(Il2CppBase() + 0x51DD4B4))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_lower_level() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD4BC))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_lower_level(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, int32_t))(Il2CppBase() + 0x51DD4C4))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_upper_level() {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*))(Il2CppBase() + 0x51DD4CC))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_upper_level(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, int32_t))(Il2CppBase() + 0x51DD4D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAnswerApplyNtf*, bool))(Il2CppBase() + 0x51DD4DC))(this, createIfMissing);
	}

};

}
