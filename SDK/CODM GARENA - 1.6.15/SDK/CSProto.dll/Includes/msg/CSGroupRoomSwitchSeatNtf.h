#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSwitchSeatNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSwitchSeatNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _new_camp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _new_seat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _old_camp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _old_seat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*))(Il2CppBase() + 0x51DF504))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*, uint64_t))(Il2CppBase() + 0x51DF50C))(this, value);
	}
	template <typename T = uint32_t> T get_new_camp() {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*))(Il2CppBase() + 0x51DF51C))(this);
	}
	template <typename T = void> T set_new_camp(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*, uint32_t))(Il2CppBase() + 0x51DF524))(this, value);
	}
	template <typename T = uint32_t> T get_new_seat() {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*))(Il2CppBase() + 0x51DF52C))(this);
	}
	template <typename T = void> T set_new_seat(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*, uint32_t))(Il2CppBase() + 0x51DF534))(this, value);
	}
	template <typename T = uint32_t> T get_old_camp() {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*))(Il2CppBase() + 0x51DF53C))(this);
	}
	template <typename T = void> T set_old_camp(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*, uint32_t))(Il2CppBase() + 0x51DF544))(this, value);
	}
	template <typename T = uint32_t> T get_old_seat() {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*))(Il2CppBase() + 0x51DF54C))(this);
	}
	template <typename T = void> T set_old_seat(uint32_t value) {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*, uint32_t))(Il2CppBase() + 0x51DF554))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSwitchSeatNtf*, bool))(Il2CppBase() + 0x51DF55C))(this, createIfMissing);
	}

};

}
