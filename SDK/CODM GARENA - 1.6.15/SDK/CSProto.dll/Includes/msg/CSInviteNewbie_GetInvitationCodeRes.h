#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetInvitationCodeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetInvitationCodeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _invitation_code() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _inviter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _max_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bind_award() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*))(Il2CppBase() + 0x5139474))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*, int32_t))(Il2CppBase() + 0x513947C))(this, value);
	}
	template <typename T = Il2CppString*> T get_invitation_code() {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*))(Il2CppBase() + 0x5139484))(this);
	}
	template <typename T = void> T set_invitation_code(Il2CppString* value) {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*, Il2CppString*))(Il2CppBase() + 0x513948C))(this, value);
	}
	template <typename T = uintptr_t> T get_inviter() {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*))(Il2CppBase() + 0x5139494))(this);
	}
	template <typename T = void> T set_inviter(uintptr_t value) {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*, uintptr_t))(Il2CppBase() + 0x513949C))(this, value);
	}
	template <typename T = int32_t> T get_max_level() {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*))(Il2CppBase() + 0x51394A4))(this);
	}
	template <typename T = void> T set_max_level(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*, int32_t))(Il2CppBase() + 0x51394AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bind_award() {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*))(Il2CppBase() + 0x51394B4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetInvitationCodeRes*, bool))(Il2CppBase() + 0x51394BC))(this, createIfMissing);
	}

};

}
