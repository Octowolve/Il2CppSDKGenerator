#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DsaPingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DsaPingInfo"));
	}

	template <typename T = uint32_t> T& _dsc_group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ping() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_dsc_group_id() {
		return ((T (*)(DsaPingInfo*))(Il2CppBase() + 0x5226854))(this);
	}
	template <typename T = void> T set_dsc_group_id(uint32_t value) {
		return ((T (*)(DsaPingInfo*, uint32_t))(Il2CppBase() + 0x522685C))(this, value);
	}
	template <typename T = uint32_t> T get_ping() {
		return ((T (*)(DsaPingInfo*))(Il2CppBase() + 0x5226864))(this);
	}
	template <typename T = void> T set_ping(uint32_t value) {
		return ((T (*)(DsaPingInfo*, uint32_t))(Il2CppBase() + 0x522686C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DsaPingInfo*, bool))(Il2CppBase() + 0x5226874))(this, createIfMissing);
	}

};

}
