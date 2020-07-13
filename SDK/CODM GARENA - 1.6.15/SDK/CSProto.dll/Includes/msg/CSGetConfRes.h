#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _conf_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetConfRes*))(Il2CppBase() + 0x5215EF4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetConfRes*, int32_t))(Il2CppBase() + 0x5215EFC))(this, value);
	}
	template <typename T = uintptr_t> T get_conf_data() {
		return ((T (*)(CSGetConfRes*))(Il2CppBase() + 0x5215F04))(this);
	}
	template <typename T = void> T set_conf_data(uintptr_t value) {
		return ((T (*)(CSGetConfRes*, uintptr_t))(Il2CppBase() + 0x5215F0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetConfRes*, bool))(Il2CppBase() + 0x5215F14))(this, createIfMissing);
	}

};

}
