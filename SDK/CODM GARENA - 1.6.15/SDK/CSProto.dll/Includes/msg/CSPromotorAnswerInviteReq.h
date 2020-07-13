#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorAnswerInviteReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorAnswerInviteReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _invite_code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_invite_code() {
		return ((T (*)(CSPromotorAnswerInviteReq*))(Il2CppBase() + 0x51F1888))(this);
	}
	template <typename T = void> T set_invite_code(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSPromotorAnswerInviteReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F1890))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorAnswerInviteReq*, bool))(Il2CppBase() + 0x51F1898))(this, createIfMissing);
	}

};

}
