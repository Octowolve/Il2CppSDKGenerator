#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorSendInviteRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorSendInviteRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _target_openid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPromotorSendInviteRes*))(Il2CppBase() + 0x51F1BE0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPromotorSendInviteRes*, int32_t))(Il2CppBase() + 0x51F1BE8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_target_openid() {
		return ((T (*)(CSPromotorSendInviteRes*))(Il2CppBase() + 0x51F1BF0))(this);
	}
	template <typename T = void> T set_target_openid(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSPromotorSendInviteRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51F1BF8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorSendInviteRes*, bool))(Il2CppBase() + 0x51F1C00))(this, createIfMissing);
	}

};

}
