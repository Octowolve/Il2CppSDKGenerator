#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPromotorSuccessInviteNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPromotorSuccessInviteNtf"));
	}

	template <typename T = uintptr_t> T& _success_invite_player() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _cur_success_invited_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_success_invite_player() {
		return ((T (*)(CSPromotorSuccessInviteNtf*))(Il2CppBase() + 0x51F1C1C))(this);
	}
	template <typename T = void> T set_success_invite_player(uintptr_t value) {
		return ((T (*)(CSPromotorSuccessInviteNtf*, uintptr_t))(Il2CppBase() + 0x51F1C24))(this, value);
	}
	template <typename T = uint32_t> T get_cur_success_invited_num() {
		return ((T (*)(CSPromotorSuccessInviteNtf*))(Il2CppBase() + 0x51F1C2C))(this);
	}
	template <typename T = void> T set_cur_success_invited_num(uint32_t value) {
		return ((T (*)(CSPromotorSuccessInviteNtf*, uint32_t))(Il2CppBase() + 0x51F1C34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPromotorSuccessInviteNtf*, bool))(Il2CppBase() + 0x51F1C3C))(this, createIfMissing);
	}

};

}
