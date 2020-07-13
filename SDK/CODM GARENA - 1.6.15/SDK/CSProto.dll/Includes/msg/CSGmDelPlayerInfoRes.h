#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGmDelPlayerInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGmDelPlayerInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGmDelPlayerInfoRes*))(Il2CppBase() + 0x51DD274))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGmDelPlayerInfoRes*, int32_t))(Il2CppBase() + 0x51DD27C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGmDelPlayerInfoRes*, bool))(Il2CppBase() + 0x51DD284))(this, createIfMissing);
	}

};

}
