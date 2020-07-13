#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetInvitationAwardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetInvitationAwardReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSInviteNewbieGetInvitationAwardReq*))(Il2CppBase() + 0x5139274))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetInvitationAwardReq*, uint64_t))(Il2CppBase() + 0x513927C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetInvitationAwardReq*, bool))(Il2CppBase() + 0x513928C))(this, createIfMissing);
	}

};

}
