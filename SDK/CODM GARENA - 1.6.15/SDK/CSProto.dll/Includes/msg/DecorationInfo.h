#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DecorationInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DecorationInfo"));
	}

	template <typename T = uintptr_t> T& _ornament() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _crosshair() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_ornament() {
		return ((T (*)(DecorationInfo*))(Il2CppBase() + 0x522643C))(this);
	}
	template <typename T = void> T set_ornament(uintptr_t value) {
		return ((T (*)(DecorationInfo*, uintptr_t))(Il2CppBase() + 0x5226444))(this, value);
	}
	template <typename T = uintptr_t> T get_crosshair() {
		return ((T (*)(DecorationInfo*))(Il2CppBase() + 0x522644C))(this);
	}
	template <typename T = void> T set_crosshair(uintptr_t value) {
		return ((T (*)(DecorationInfo*, uintptr_t))(Il2CppBase() + 0x5226454))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DecorationInfo*, bool))(Il2CppBase() + 0x522645C))(this, createIfMissing);
	}

};

}
