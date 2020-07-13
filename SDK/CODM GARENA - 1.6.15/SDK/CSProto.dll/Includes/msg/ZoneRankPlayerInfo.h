#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ZoneRankPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ZoneRankPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nickname() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _rank_value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _spi() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _init_spi() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB57C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uint64_t))(Il2CppBase() + 0x51AB584))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nickname() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB594))(this);
	}
	template <typename T = void> T set_nickname(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ZoneRankPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AB59C))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB5A4))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uintptr_t))(Il2CppBase() + 0x51AB5AC))(this, value);
	}
	template <typename T = uint32_t> T get_rank() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB5B4))(this);
	}
	template <typename T = void> T set_rank(uint32_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uint32_t))(Il2CppBase() + 0x51AB5BC))(this, value);
	}
	template <typename T = uint32_t> T get_rank_value() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB5C4))(this);
	}
	template <typename T = void> T set_rank_value(uint32_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uint32_t))(Il2CppBase() + 0x51AB5CC))(this, value);
	}
	template <typename T = uint32_t> T get_spi() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB5D4))(this);
	}
	template <typename T = void> T set_spi(uint32_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uint32_t))(Il2CppBase() + 0x51AB5DC))(this, value);
	}
	template <typename T = uint32_t> T get_init_spi() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB5E4))(this);
	}
	template <typename T = void> T set_init_spi(uint32_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uint32_t))(Il2CppBase() + 0x51AB5EC))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB5F4))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, uint32_t))(Il2CppBase() + 0x51AB5FC))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(ZoneRankPlayerInfo*))(Il2CppBase() + 0x51AB604))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(ZoneRankPlayerInfo*, int32_t))(Il2CppBase() + 0x51AB60C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ZoneRankPlayerInfo*, bool))(Il2CppBase() + 0x51AB614))(this, createIfMissing);
	}

};

}
