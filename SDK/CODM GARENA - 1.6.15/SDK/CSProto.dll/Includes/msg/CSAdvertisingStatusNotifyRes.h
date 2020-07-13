#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAdvertisingStatusNotifyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAdvertisingStatusNotifyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _need_notify() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAdvertisingStatusNotifyRes*))(Il2CppBase() + 0x51E4484))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAdvertisingStatusNotifyRes*, int32_t))(Il2CppBase() + 0x51E448C))(this, value);
	}
	template <typename T = int32_t> T get_need_notify() {
		return ((T (*)(CSAdvertisingStatusNotifyRes*))(Il2CppBase() + 0x51E4494))(this);
	}
	template <typename T = void> T set_need_notify(int32_t value) {
		return ((T (*)(CSAdvertisingStatusNotifyRes*, int32_t))(Il2CppBase() + 0x51E449C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAdvertisingStatusNotifyRes*, bool))(Il2CppBase() + 0x51E44A4))(this, createIfMissing);
	}

};

}
