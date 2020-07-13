#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBOpticData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBOpticData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBOpticData*))(Il2CppBase() + 0x51B8574))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBOpticData*, uintptr_t))(Il2CppBase() + 0x51B857C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBOpticData*, bool))(Il2CppBase() + 0x51B8584))(this, createIfMissing);
	}

};

}
