#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBGrenadeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBGrenadeData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBGrenadeData*))(Il2CppBase() + 0x51B8298))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBGrenadeData*, uintptr_t))(Il2CppBase() + 0x51B82A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBGrenadeData*, bool))(Il2CppBase() + 0x51B82A8))(this, createIfMissing);
	}

};

}
