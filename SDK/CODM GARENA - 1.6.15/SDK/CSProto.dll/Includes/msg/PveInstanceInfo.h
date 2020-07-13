#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PveInstanceInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PveInstanceInfo"));
	}

	template <typename T = int32_t> T& _instance_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _difficulty_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _modifier_id_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_instance_id() {
		return ((T (*)(PveInstanceInfo*))(Il2CppBase() + 0x506F47C))(this);
	}
	template <typename T = void> T set_instance_id(int32_t value) {
		return ((T (*)(PveInstanceInfo*, int32_t))(Il2CppBase() + 0x506F484))(this, value);
	}
	template <typename T = int32_t> T get_difficulty_level() {
		return ((T (*)(PveInstanceInfo*))(Il2CppBase() + 0x506F48C))(this);
	}
	template <typename T = void> T set_difficulty_level(int32_t value) {
		return ((T (*)(PveInstanceInfo*, int32_t))(Il2CppBase() + 0x506F494))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_modifier_id_list() {
		return ((T (*)(PveInstanceInfo*))(Il2CppBase() + 0x506F49C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PveInstanceInfo*, bool))(Il2CppBase() + 0x506F4A4))(this, createIfMissing);
	}

};

}
