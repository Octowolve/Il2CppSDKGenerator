#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomStateChgNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomStateChgNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGroupRoomStateChgNtf*))(Il2CppBase() + 0x51DF4C0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomStateChgNtf*, uint64_t))(Il2CppBase() + 0x51DF4C8))(this, value);
	}
	template <typename T = uint32_t> T get_state() {
		return ((T (*)(CSGroupRoomStateChgNtf*))(Il2CppBase() + 0x51DF4D8))(this);
	}
	template <typename T = void> T set_state(uint32_t value) {
		return ((T (*)(CSGroupRoomStateChgNtf*, uint32_t))(Il2CppBase() + 0x51DF4E0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomStateChgNtf*, bool))(Il2CppBase() + 0x51DF4E8))(this, createIfMissing);
	}

};

}
