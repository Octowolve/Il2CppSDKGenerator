#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DscIPGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DscIPGroupInfo"));
	}

	template <typename T = uint32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _dsa_ip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _dsa_outside_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_dsc_group_id() {
		return ((T (*)(DscIPGroupInfo*))(Il2CppBase() + 0x5226968))(this);
	}
	template <typename T = void> T set_dsc_group_id(uint32_t value) {
		return ((T (*)(DscIPGroupInfo*, uint32_t))(Il2CppBase() + 0x5226970))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_dsa_ip() {
		return ((T (*)(DscIPGroupInfo*))(Il2CppBase() + 0x5226978))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_dsa_outside_info() {
		return ((T (*)(DscIPGroupInfo*))(Il2CppBase() + 0x5226980))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DscIPGroupInfo*, bool))(Il2CppBase() + 0x5226988))(this, createIfMissing);
	}

};

}
