#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetOneGameMapStatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetOneGameMapStatRes"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _stat() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGspGetOneGameMapStatRes*))(Il2CppBase() + 0x51DFAC4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGspGetOneGameMapStatRes*, uint64_t))(Il2CppBase() + 0x51DFACC))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSGspGetOneGameMapStatRes*))(Il2CppBase() + 0x51DFADC))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSGspGetOneGameMapStatRes*, uint32_t))(Il2CppBase() + 0x51DFAE4))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGspGetOneGameMapStatRes*))(Il2CppBase() + 0x51DFAEC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGspGetOneGameMapStatRes*, int32_t))(Il2CppBase() + 0x51DFAF4))(this, value);
	}
	template <typename T = uintptr_t> T get_stat() {
		return ((T (*)(CSGspGetOneGameMapStatRes*))(Il2CppBase() + 0x51DFAFC))(this);
	}
	template <typename T = void> T set_stat(uintptr_t value) {
		return ((T (*)(CSGspGetOneGameMapStatRes*, uintptr_t))(Il2CppBase() + 0x51DFB04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetOneGameMapStatRes*, bool))(Il2CppBase() + 0x51DFB0C))(this, createIfMissing);
	}

};

}
