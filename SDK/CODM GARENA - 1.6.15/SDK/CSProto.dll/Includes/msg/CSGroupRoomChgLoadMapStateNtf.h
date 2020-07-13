#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChgLoadMapStateNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChgLoadMapStateNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _mapid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*))(Il2CppBase() + 0x51DDFE8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*, uint64_t))(Il2CppBase() + 0x51DDFF0))(this, value);
	}
	template <typename T = int32_t> T get_state() {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*))(Il2CppBase() + 0x51DE000))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*, int32_t))(Il2CppBase() + 0x51DE008))(this, value);
	}
	template <typename T = uint32_t> T get_mapid() {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*))(Il2CppBase() + 0x51DE010))(this);
	}
	template <typename T = void> T set_mapid(uint32_t value) {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*, uint32_t))(Il2CppBase() + 0x51DE018))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChgLoadMapStateNtf*, bool))(Il2CppBase() + 0x51DE020))(this, createIfMissing);
	}

};

}
