#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CommonAttrNumer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CommonAttrNumer"));
	}

	template <typename T = int32_t> T& _comm_attr_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _comm_attr_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_comm_attr_type() {
		return ((T (*)(CommonAttrNumer*))(Il2CppBase() + 0x516EECC))(this);
	}
	template <typename T = void> T set_comm_attr_type(int32_t value) {
		return ((T (*)(CommonAttrNumer*, int32_t))(Il2CppBase() + 0x516EED4))(this, value);
	}
	template <typename T = int32_t> T get_comm_attr_value() {
		return ((T (*)(CommonAttrNumer*))(Il2CppBase() + 0x516EEDC))(this);
	}
	template <typename T = void> T set_comm_attr_value(int32_t value) {
		return ((T (*)(CommonAttrNumer*, int32_t))(Il2CppBase() + 0x516EEE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CommonAttrNumer*, bool))(Il2CppBase() + 0x516EEEC))(this, createIfMissing);
	}

};

}
