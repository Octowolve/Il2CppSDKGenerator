#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAdvertisingGetAdRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAdvertisingGetAdRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _advertising_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _current_ad_index() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAdvertisingGetAdRes*))(Il2CppBase() + 0x51E43D4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAdvertisingGetAdRes*, int32_t))(Il2CppBase() + 0x51E43DC))(this, value);
	}
	template <typename T = uintptr_t> T get_advertising_info() {
		return ((T (*)(CSAdvertisingGetAdRes*))(Il2CppBase() + 0x51E43E4))(this);
	}
	template <typename T = void> T set_advertising_info(uintptr_t value) {
		return ((T (*)(CSAdvertisingGetAdRes*, uintptr_t))(Il2CppBase() + 0x51E43EC))(this, value);
	}
	template <typename T = int32_t> T get_current_ad_index() {
		return ((T (*)(CSAdvertisingGetAdRes*))(Il2CppBase() + 0x51E43F4))(this);
	}
	template <typename T = void> T set_current_ad_index(int32_t value) {
		return ((T (*)(CSAdvertisingGetAdRes*, int32_t))(Il2CppBase() + 0x51E43FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAdvertisingGetAdRes*, bool))(Il2CppBase() + 0x51E4404))(this, createIfMissing);
	}

};

}
