#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMallRefreshRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMallRefreshRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _mall() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMallRefreshRes*))(Il2CppBase() + 0x51F049C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMallRefreshRes*, int32_t))(Il2CppBase() + 0x51F04A4))(this, value);
	}
	template <typename T = uintptr_t> T get_mall() {
		return ((T (*)(CSMallRefreshRes*))(Il2CppBase() + 0x51F04AC))(this);
	}
	template <typename T = void> T set_mall(uintptr_t value) {
		return ((T (*)(CSMallRefreshRes*, uintptr_t))(Il2CppBase() + 0x51F04B4))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSMallRefreshRes*))(Il2CppBase() + 0x51F04BC))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSMallRefreshRes*, uintptr_t))(Il2CppBase() + 0x51F04C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMallRefreshRes*, bool))(Il2CppBase() + 0x51F04CC))(this, createIfMissing);
	}

};

}
