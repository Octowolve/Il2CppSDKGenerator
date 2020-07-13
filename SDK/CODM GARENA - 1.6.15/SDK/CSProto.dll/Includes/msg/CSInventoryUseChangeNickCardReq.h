#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryUseChangeNickCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryUseChangeNickCardReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _new_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _use_card() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_new_name() {
		return ((T (*)(CSInventoryUseChangeNickCardReq*))(Il2CppBase() + 0x5138A14))(this);
	}
	template <typename T = void> T set_new_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSInventoryUseChangeNickCardReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5138A1C))(this, value);
	}
	template <typename T = uintptr_t> T get_use_card() {
		return ((T (*)(CSInventoryUseChangeNickCardReq*))(Il2CppBase() + 0x5138A24))(this);
	}
	template <typename T = void> T set_use_card(uintptr_t value) {
		return ((T (*)(CSInventoryUseChangeNickCardReq*, uintptr_t))(Il2CppBase() + 0x5138A2C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryUseChangeNickCardReq*, bool))(Il2CppBase() + 0x5138A34))(this, createIfMissing);
	}

};

}
