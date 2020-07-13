#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomUpdateLoadoutNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomUpdateLoadoutNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _player_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGroupRoomUpdateLoadoutNtf*))(Il2CppBase() + 0x51DF600))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomUpdateLoadoutNtf*, uint64_t))(Il2CppBase() + 0x51DF608))(this, value);
	}
	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSGroupRoomUpdateLoadoutNtf*))(Il2CppBase() + 0x51DF618))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomUpdateLoadoutNtf*, uintptr_t))(Il2CppBase() + 0x51DF620))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomUpdateLoadoutNtf*, bool))(Il2CppBase() + 0x51DF628))(this, createIfMissing);
	}

};

}
