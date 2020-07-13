#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspWeaponSuiteBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspWeaponSuiteBonus"));
	}

	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_exp() {
		return ((T (*)(GspWeaponSuiteBonus*))(Il2CppBase() + 0x50CF6B8))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(GspWeaponSuiteBonus*, int32_t))(Il2CppBase() + 0x50CF6C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspWeaponSuiteBonus*, bool))(Il2CppBase() + 0x50CF6C8))(this, createIfMissing);
	}

};

}
