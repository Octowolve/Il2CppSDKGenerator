#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MultiPVEDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MultiPVEDrop"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _prop_drops() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resource_drops() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_prop_drops() {
		return ((T (*)(MultiPVEDrop*))(Il2CppBase() + 0x4EA55D4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_resource_drops() {
		return ((T (*)(MultiPVEDrop*))(Il2CppBase() + 0x4EA55DC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MultiPVEDrop*, bool))(Il2CppBase() + 0x4EA55E4))(this, createIfMissing);
	}

};

}
