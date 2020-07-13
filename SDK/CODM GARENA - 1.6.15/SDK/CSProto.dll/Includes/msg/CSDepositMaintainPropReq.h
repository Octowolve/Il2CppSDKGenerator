#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDepositMaintainPropReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDepositMaintainPropReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSDepositMaintainPropReq*))(Il2CppBase() + 0x51D0FBC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDepositMaintainPropReq*, bool))(Il2CppBase() + 0x51D0FC4))(this, createIfMissing);
	}

};

}
