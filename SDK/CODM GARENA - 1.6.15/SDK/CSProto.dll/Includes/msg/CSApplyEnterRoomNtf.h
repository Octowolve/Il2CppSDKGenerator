#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSApplyEnterRoomNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSApplyEnterRoomNtf"));
	}

	template <typename T = uintptr_t> T& _player_profile() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _player_lobby_bus_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_player_profile() {
		return ((T (*)(CSApplyEnterRoomNtf*))(Il2CppBase() + 0x51E463C))(this);
	}
	template <typename T = void> T set_player_profile(uintptr_t value) {
		return ((T (*)(CSApplyEnterRoomNtf*, uintptr_t))(Il2CppBase() + 0x51E4644))(this, value);
	}
	template <typename T = uint32_t> T get_player_lobby_bus_id() {
		return ((T (*)(CSApplyEnterRoomNtf*))(Il2CppBase() + 0x51E464C))(this);
	}
	template <typename T = void> T set_player_lobby_bus_id(uint32_t value) {
		return ((T (*)(CSApplyEnterRoomNtf*, uint32_t))(Il2CppBase() + 0x51E4654))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSApplyEnterRoomNtf*, bool))(Il2CppBase() + 0x51E465C))(this, createIfMissing);
	}

};

}
