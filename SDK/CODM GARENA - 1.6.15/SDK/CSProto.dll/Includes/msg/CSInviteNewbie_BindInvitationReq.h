#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieBindInvitationReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_BindInvitationReq"));
	}

	template <typename T = Il2CppString*> T& _invitation_code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_invitation_code() {
		return ((T (*)(CSInviteNewbieBindInvitationReq*))(Il2CppBase() + 0x5138D38))(this);
	}
	template <typename T = void> T set_invitation_code(Il2CppString* value) {
		return ((T (*)(CSInviteNewbieBindInvitationReq*, Il2CppString*))(Il2CppBase() + 0x5138D40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieBindInvitationReq*, bool))(Il2CppBase() + 0x5138D48))(this, createIfMissing);
	}

};

}
