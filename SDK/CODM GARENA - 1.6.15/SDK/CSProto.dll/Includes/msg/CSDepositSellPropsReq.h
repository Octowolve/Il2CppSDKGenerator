#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositSellPropsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositSellPropsReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSDepositSellPropsReq*))(Il2CppBase() + 0x51D10C0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositSellPropsReq*, bool))(Il2CppBase() + 0x51D10C8))(this, createIfMissing);
	}

};

}
