#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BpNumberItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BpNumberItem"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _buf_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(BpNumberItem*))(Il2CppBase() + 0x510DE80))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(BpNumberItem*, int32_t))(Il2CppBase() + 0x510DE88))(this, value);
	}
	template <typename T = int32_t> T get_buf_value() {
		return ((T (*)(BpNumberItem*))(Il2CppBase() + 0x510DE90))(this);
	}
	template <typename T = void> T set_buf_value(int32_t value) {
		return ((T (*)(BpNumberItem*, int32_t))(Il2CppBase() + 0x510DE98))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BpNumberItem*, bool))(Il2CppBase() + 0x510DEA0))(this, createIfMissing);
	}

};

}
