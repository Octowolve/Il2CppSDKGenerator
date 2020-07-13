#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetOneGameMapStatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetOneGameMapStatReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGspGetOneGameMapStatReq*))(Il2CppBase() + 0x51DFA80))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGspGetOneGameMapStatReq*, uint64_t))(Il2CppBase() + 0x51DFA88))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSGspGetOneGameMapStatReq*))(Il2CppBase() + 0x51DFA98))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSGspGetOneGameMapStatReq*, uint32_t))(Il2CppBase() + 0x51DFAA0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetOneGameMapStatReq*, bool))(Il2CppBase() + 0x51DFAA8))(this, createIfMissing);
	}

};

}
