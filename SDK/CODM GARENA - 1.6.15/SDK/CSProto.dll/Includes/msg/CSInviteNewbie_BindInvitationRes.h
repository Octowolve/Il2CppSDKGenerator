#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieBindInvitationRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_BindInvitationRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _inviter_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSInviteNewbieBindInvitationRes*))(Il2CppBase() + 0x5138E08))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSInviteNewbieBindInvitationRes*, uint32_t))(Il2CppBase() + 0x5138E10))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSInviteNewbieBindInvitationRes*))(Il2CppBase() + 0x5138E18))(this);
	}
	template <typename T = uint64_t> T get_inviter_id() {
		return ((T (*)(CSInviteNewbieBindInvitationRes*))(Il2CppBase() + 0x5138E20))(this);
	}
	template <typename T = void> T set_inviter_id(uint64_t value) {
		return ((T (*)(CSInviteNewbieBindInvitationRes*, uint64_t))(Il2CppBase() + 0x5138E28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieBindInvitationRes*, bool))(Il2CppBase() + 0x5138E38))(this, createIfMissing);
	}

};

}
