#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquippedGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquippedGrenade"));
	}

	template <typename T = uintptr_t> T& _lethal_grenade_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _tactical_grenade_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_lethal_grenade_data() {
		return ((T (*)(SSEquippedGrenade*))(Il2CppBase() + 0x51A9208))(this);
	}
	template <typename T = void> T set_lethal_grenade_data(uintptr_t value) {
		return ((T (*)(SSEquippedGrenade*, uintptr_t))(Il2CppBase() + 0x51A9210))(this, value);
	}
	template <typename T = uintptr_t> T get_tactical_grenade_data() {
		return ((T (*)(SSEquippedGrenade*))(Il2CppBase() + 0x51A9218))(this);
	}
	template <typename T = void> T set_tactical_grenade_data(uintptr_t value) {
		return ((T (*)(SSEquippedGrenade*, uintptr_t))(Il2CppBase() + 0x51A9220))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquippedGrenade*, bool))(Il2CppBase() + 0x51A9228))(this, createIfMissing);
	}

};

}
