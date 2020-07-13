#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetGameMapStatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetGameMapStatRes"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _stat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGspGetGameMapStatRes*))(Il2CppBase() + 0x51DF920))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGspGetGameMapStatRes*, uint64_t))(Il2CppBase() + 0x51DF928))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGspGetGameMapStatRes*))(Il2CppBase() + 0x51DF938))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGspGetGameMapStatRes*, int32_t))(Il2CppBase() + 0x51DF940))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_stat() {
		return ((T (*)(CSGspGetGameMapStatRes*))(Il2CppBase() + 0x51DF948))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetGameMapStatRes*, bool))(Il2CppBase() + 0x51DF950))(this, createIfMissing);
	}

};

}
