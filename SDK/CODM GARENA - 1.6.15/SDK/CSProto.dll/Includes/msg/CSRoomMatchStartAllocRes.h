#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchStartAllocRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchStartAllocRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _drop_punish_until_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _matchmaking_bud_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRoomMatchStartAllocRes*))(Il2CppBase() + 0x51E0DFC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocRes*, int32_t))(Il2CppBase() + 0x51E0E04))(this, value);
	}
	template <typename T = int32_t> T get_drop_punish_until_time() {
		return ((T (*)(CSRoomMatchStartAllocRes*))(Il2CppBase() + 0x51E0E0C))(this);
	}
	template <typename T = void> T set_drop_punish_until_time(int32_t value) {
		return ((T (*)(CSRoomMatchStartAllocRes*, int32_t))(Il2CppBase() + 0x51E0E14))(this, value);
	}
	template <typename T = uint32_t> T get_matchmaking_bud_id() {
		return ((T (*)(CSRoomMatchStartAllocRes*))(Il2CppBase() + 0x51E0E1C))(this);
	}
	template <typename T = void> T set_matchmaking_bud_id(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocRes*, uint32_t))(Il2CppBase() + 0x51E0E24))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(CSRoomMatchStartAllocRes*))(Il2CppBase() + 0x51E0E2C))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(CSRoomMatchStartAllocRes*, uint32_t))(Il2CppBase() + 0x51E0E34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchStartAllocRes*, bool))(Il2CppBase() + 0x51E0E3C))(this, createIfMissing);
	}

};

}
