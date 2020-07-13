#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetCompositeOutputRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetCompositeOutputRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetCompositeOutputRes*))(Il2CppBase() + 0x5215E8C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetCompositeOutputRes*, int32_t))(Il2CppBase() + 0x5215E94))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSGetCompositeOutputRes*))(Il2CppBase() + 0x5215E9C))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSGetCompositeOutputRes*, uint32_t))(Il2CppBase() + 0x5215EA4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetCompositeOutputRes*, bool))(Il2CppBase() + 0x5215EAC))(this, createIfMissing);
	}

};

}
