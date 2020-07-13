#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomUpdatePlayerInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomUpdatePlayerInfoNtf"));
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
		return ((T (*)(CSGroupRoomUpdatePlayerInfoNtf*))(Il2CppBase() + 0x51DF644))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomUpdatePlayerInfoNtf*, uint64_t))(Il2CppBase() + 0x51DF64C))(this, value);
	}
	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSGroupRoomUpdatePlayerInfoNtf*))(Il2CppBase() + 0x51DF65C))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomUpdatePlayerInfoNtf*, uintptr_t))(Il2CppBase() + 0x51DF664))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomUpdatePlayerInfoNtf*, bool))(Il2CppBase() + 0x51DF66C))(this, createIfMissing);
	}

};

}
