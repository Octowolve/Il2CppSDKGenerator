#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Resource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Resource"));
	}

	template <typename T = int32_t> T& _res_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_res_type() {
		return ((T (*)(Resource*))(Il2CppBase() + 0x5071A60))(this);
	}
	template <typename T = void> T set_res_type(int32_t value) {
		return ((T (*)(Resource*, int32_t))(Il2CppBase() + 0x5071A68))(this, value);
	}
	template <typename T = int32_t> T get_count() {
		return ((T (*)(Resource*))(Il2CppBase() + 0x5071A70))(this);
	}
	template <typename T = void> T set_count(int32_t value) {
		return ((T (*)(Resource*, int32_t))(Il2CppBase() + 0x5071A78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Resource*, bool))(Il2CppBase() + 0x5071A80))(this, createIfMissing);
	}

};

}
