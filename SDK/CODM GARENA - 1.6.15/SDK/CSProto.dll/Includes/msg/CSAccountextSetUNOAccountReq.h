#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextSetUNOAccountReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextSetUNOAccountReq"));
	}

	template <typename T = uint32_t> T& _account_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_account_type() {
		return ((T (*)(CSAccountextSetUNOAccountReq*))(Il2CppBase() + 0x5170024))(this);
	}
	template <typename T = void> T set_account_type(uint32_t value) {
		return ((T (*)(CSAccountextSetUNOAccountReq*, uint32_t))(Il2CppBase() + 0x517002C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextSetUNOAccountReq*, bool))(Il2CppBase() + 0x5170034))(this, createIfMissing);
	}

};

}
