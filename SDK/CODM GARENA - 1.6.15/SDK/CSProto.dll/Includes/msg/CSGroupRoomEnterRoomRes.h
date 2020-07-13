#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomEnterRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomEnterRoomRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_lower_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_upper_level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _channel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _ticket() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _fail_list() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE4F8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, int32_t))(Il2CppBase() + 0x51DE500))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE508))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, uint32_t))(Il2CppBase() + 0x51DE510))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE518))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, uint32_t))(Il2CppBase() + 0x51DE520))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_lower_level() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE528))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_lower_level(int32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, int32_t))(Il2CppBase() + 0x51DE530))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_upper_level() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE538))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_upper_level(int32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, int32_t))(Il2CppBase() + 0x51DE540))(this, value);
	}
	template <typename T = int32_t> T get_channel() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE548))(this);
	}
	template <typename T = void> T set_channel(int32_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, int32_t))(Il2CppBase() + 0x51DE550))(this, value);
	}
	template <typename T = uintptr_t> T get_ticket() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE558))(this);
	}
	template <typename T = void> T set_ticket(uintptr_t value) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, uintptr_t))(Il2CppBase() + 0x51DE560))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_fail_list() {
		return ((T (*)(CSGroupRoomEnterRoomRes*))(Il2CppBase() + 0x51DE568))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomEnterRoomRes*, bool))(Il2CppBase() + 0x51DE570))(this, createIfMissing);
	}

};

}
