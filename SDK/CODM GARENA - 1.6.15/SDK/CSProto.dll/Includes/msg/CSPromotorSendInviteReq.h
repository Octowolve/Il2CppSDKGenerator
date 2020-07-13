#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorSendInviteReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorSendInviteReq"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _target_openid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _model_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSPromotorSendInviteReq*))(Il2CppBase() + 0x51F1B94))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSPromotorSendInviteReq*, int32_t))(Il2CppBase() + 0x51F1B9C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_target_openid() {
		return ((T (*)(CSPromotorSendInviteReq*))(Il2CppBase() + 0x51F1BA4))(this);
	}
	template <typename T = void> T set_target_openid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSPromotorSendInviteReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F1BAC))(this, value);
	}
	template <typename T = int32_t> T get_model_id() {
		return ((T (*)(CSPromotorSendInviteReq*))(Il2CppBase() + 0x51F1BB4))(this);
	}
	template <typename T = void> T set_model_id(int32_t value) {
		return ((T (*)(CSPromotorSendInviteReq*, int32_t))(Il2CppBase() + 0x51F1BBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorSendInviteReq*, bool))(Il2CppBase() + 0x51F1BC4))(this, createIfMissing);
	}

};

}
