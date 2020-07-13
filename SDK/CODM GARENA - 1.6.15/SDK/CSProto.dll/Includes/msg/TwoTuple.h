#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TwoTuple
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TwoTuple"));
	}

	template <typename T = int32_t> T& _start() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _end() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_start() {
		return ((T (*)(TwoTuple*))(Il2CppBase() + 0x51AA73C))(this);
	}
	template <typename T = void> T set_start(int32_t value) {
		return ((T (*)(TwoTuple*, int32_t))(Il2CppBase() + 0x51AA744))(this, value);
	}
	template <typename T = int32_t> T get_end() {
		return ((T (*)(TwoTuple*))(Il2CppBase() + 0x51AA74C))(this);
	}
	template <typename T = void> T set_end(int32_t value) {
		return ((T (*)(TwoTuple*, int32_t))(Il2CppBase() + 0x51AA754))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TwoTuple*, bool))(Il2CppBase() + 0x51AA75C))(this, createIfMissing);
	}

};

}
