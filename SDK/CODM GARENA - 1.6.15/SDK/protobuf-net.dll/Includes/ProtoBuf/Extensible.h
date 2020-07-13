#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class Extensible
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "Extensible"));
	}

	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Extensible*, bool))(Il2CppBase() + 0x5060A54))(this, createIfMissing);
	}
	template <typename T = uintptr_t> T GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Extensible*, bool))(Il2CppBase() + 0x5060A64))(this, createIfMissing);
	}
	template <typename T = uintptr_t> static T GetExtensionObject_1(uintptr_t extensionObject, bool createIfMissing) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x5060A70))(0, extensionObject, createIfMissing);
	}

};

}
