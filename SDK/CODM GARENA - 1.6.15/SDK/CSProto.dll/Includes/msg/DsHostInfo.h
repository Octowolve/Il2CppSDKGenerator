#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DsHostInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DsHostInfo"));
	}

	template <typename T = uint32_t> T& _ds_ip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ds_port() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _ds_isp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_ds_ip() {
		return ((T (*)(DsHostInfo*))(Il2CppBase() + 0x52269A4))(this);
	}
	template <typename T = void> T set_ds_ip(uint32_t value) {
		return ((T (*)(DsHostInfo*, uint32_t))(Il2CppBase() + 0x52269AC))(this, value);
	}
	template <typename T = uint32_t> T get_ds_port() {
		return ((T (*)(DsHostInfo*))(Il2CppBase() + 0x52269B4))(this);
	}
	template <typename T = void> T set_ds_port(uint32_t value) {
		return ((T (*)(DsHostInfo*, uint32_t))(Il2CppBase() + 0x52269BC))(this, value);
	}
	template <typename T = uint32_t> T get_ds_isp() {
		return ((T (*)(DsHostInfo*))(Il2CppBase() + 0x52269C4))(this);
	}
	template <typename T = void> T set_ds_isp(uint32_t value) {
		return ((T (*)(DsHostInfo*, uint32_t))(Il2CppBase() + 0x52269CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DsHostInfo*, bool))(Il2CppBase() + 0x52269D4))(this, createIfMissing);
	}

};

}
