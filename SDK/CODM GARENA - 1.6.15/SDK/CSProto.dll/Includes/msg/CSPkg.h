#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPkg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPkg"));
	}

	template <typename T = uintptr_t> T& _head() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _body() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_head() {
		return ((T (*)(CSPkg*))(Il2CppBase() + 0x51F119C))(this);
	}
	template <typename T = void> T set_head(uintptr_t value) {
		return ((T (*)(CSPkg*, uintptr_t))(Il2CppBase() + 0x51F11A4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_body() {
		return ((T (*)(CSPkg*))(Il2CppBase() + 0x51F11AC))(this);
	}
	template <typename T = void> T set_body(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSPkg*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F11B4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPkg*, bool))(Il2CppBase() + 0x51F11BC))(this, createIfMissing);
	}

};

}
