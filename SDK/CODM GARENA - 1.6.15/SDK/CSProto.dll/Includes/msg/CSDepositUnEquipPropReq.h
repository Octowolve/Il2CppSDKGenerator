#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositUnEquipPropReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositUnEquipPropReq"));
	}

	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(CSDepositUnEquipPropReq*))(Il2CppBase() + 0x51D1120))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(CSDepositUnEquipPropReq*, uintptr_t))(Il2CppBase() + 0x51D1128))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositUnEquipPropReq*, bool))(Il2CppBase() + 0x51D1130))(this, createIfMissing);
	}

};

}
