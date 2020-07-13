#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ConfData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ConfData"));
	}

	template <typename T = int32_t> T& _conf_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _conf_int_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_conf_id() {
		return ((T (*)(ConfData*))(Il2CppBase() + 0x516F03C))(this);
	}
	template <typename T = void> T set_conf_id(int32_t value) {
		return ((T (*)(ConfData*, int32_t))(Il2CppBase() + 0x516F044))(this, value);
	}
	template <typename T = int32_t> T get_conf_int_value() {
		return ((T (*)(ConfData*))(Il2CppBase() + 0x516F04C))(this);
	}
	template <typename T = void> T set_conf_int_value(int32_t value) {
		return ((T (*)(ConfData*, int32_t))(Il2CppBase() + 0x516F054))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ConfData*, bool))(Il2CppBase() + 0x516F05C))(this, createIfMissing);
	}

};

}
