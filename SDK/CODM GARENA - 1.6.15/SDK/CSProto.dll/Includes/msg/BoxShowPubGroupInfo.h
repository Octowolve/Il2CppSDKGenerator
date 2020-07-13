#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BoxShowPubGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BoxShowPubGroupInfo"));
	}

	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _curr_pub_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _pub_condition_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(BoxShowPubGroupInfo*))(Il2CppBase() + 0x510DAF4))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(BoxShowPubGroupInfo*, uint32_t))(Il2CppBase() + 0x510DAFC))(this, value);
	}
	template <typename T = uint32_t> T get_curr_pub_value() {
		return ((T (*)(BoxShowPubGroupInfo*))(Il2CppBase() + 0x510DB04))(this);
	}
	template <typename T = void> T set_curr_pub_value(uint32_t value) {
		return ((T (*)(BoxShowPubGroupInfo*, uint32_t))(Il2CppBase() + 0x510DB0C))(this, value);
	}
	template <typename T = uint32_t> T get_pub_condition_num() {
		return ((T (*)(BoxShowPubGroupInfo*))(Il2CppBase() + 0x510DB14))(this);
	}
	template <typename T = void> T set_pub_condition_num(uint32_t value) {
		return ((T (*)(BoxShowPubGroupInfo*, uint32_t))(Il2CppBase() + 0x510DB1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BoxShowPubGroupInfo*, bool))(Il2CppBase() + 0x510DB24))(this, createIfMissing);
	}

};

}
