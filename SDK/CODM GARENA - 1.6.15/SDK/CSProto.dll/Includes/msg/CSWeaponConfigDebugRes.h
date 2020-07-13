#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponConfigDebugRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeaponConfigDebugRes"));
	}

	template <typename T = uint32_t> T& _enable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_enable() {
		return ((T (*)(CSWeaponConfigDebugRes*))(Il2CppBase() + 0x51B6F44))(this);
	}
	template <typename T = void> T set_enable(uint32_t value) {
		return ((T (*)(CSWeaponConfigDebugRes*, uint32_t))(Il2CppBase() + 0x51B6F4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponConfigDebugRes*, bool))(Il2CppBase() + 0x51B6F54))(this, createIfMissing);
	}

};

}
