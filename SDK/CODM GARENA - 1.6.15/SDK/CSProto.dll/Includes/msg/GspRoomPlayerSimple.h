#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRoomPlayerSimple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRoomPlayerSimple"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _is_ai() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GspRoomPlayerSimple*))(Il2CppBase() + 0x50CF290))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GspRoomPlayerSimple*, uint64_t))(Il2CppBase() + 0x50CF298))(this, value);
	}
	template <typename T = uint32_t> T get_state() {
		return ((T (*)(GspRoomPlayerSimple*))(Il2CppBase() + 0x50CF2A8))(this);
	}
	template <typename T = void> T set_state(uint32_t value) {
		return ((T (*)(GspRoomPlayerSimple*, uint32_t))(Il2CppBase() + 0x50CF2B0))(this, value);
	}
	template <typename T = bool> T get_is_ai() {
		return ((T (*)(GspRoomPlayerSimple*))(Il2CppBase() + 0x50CF2B8))(this);
	}
	template <typename T = void> T set_is_ai(bool value) {
		return ((T (*)(GspRoomPlayerSimple*, bool))(Il2CppBase() + 0x50CF2C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRoomPlayerSimple*, bool))(Il2CppBase() + 0x50CF2C8))(this, createIfMissing);
	}

};

}
