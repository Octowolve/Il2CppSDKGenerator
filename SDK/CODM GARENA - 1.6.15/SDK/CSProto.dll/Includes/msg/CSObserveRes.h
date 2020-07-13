#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSObserveRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSObserveRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSObserveRes*))(Il2CppBase() + 0x51F0F64))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSObserveRes*, int32_t))(Il2CppBase() + 0x51F0F6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSObserveRes*, bool))(Il2CppBase() + 0x51F0F74))(this, createIfMissing);
	}

};

}
