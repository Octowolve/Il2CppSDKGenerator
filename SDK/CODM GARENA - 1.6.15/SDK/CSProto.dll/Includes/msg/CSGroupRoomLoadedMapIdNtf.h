#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomLoadedMapIdNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomLoadedMapIdNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _loaded_mapid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGroupRoomLoadedMapIdNtf*))(Il2CppBase() + 0x51DEDEC))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomLoadedMapIdNtf*, uint64_t))(Il2CppBase() + 0x51DEDF4))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_loaded_mapid() {
		return ((T (*)(CSGroupRoomLoadedMapIdNtf*))(Il2CppBase() + 0x51DEE04))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomLoadedMapIdNtf*, bool))(Il2CppBase() + 0x51DEE0C))(this, createIfMissing);
	}

};

}
