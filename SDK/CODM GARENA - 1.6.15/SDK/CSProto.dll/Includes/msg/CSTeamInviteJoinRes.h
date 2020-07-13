#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamInviteJoinRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamInviteJoinRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _invitee_uin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSTeamInviteJoinRes*))(Il2CppBase() + 0x51E3120))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSTeamInviteJoinRes*, int32_t))(Il2CppBase() + 0x51E3128))(this, value);
	}
	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamInviteJoinRes*))(Il2CppBase() + 0x51E3130))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamInviteJoinRes*, uint64_t))(Il2CppBase() + 0x51E3138))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_invitee_uin() {
		return ((T (*)(CSTeamInviteJoinRes*))(Il2CppBase() + 0x51E3148))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamInviteJoinRes*, bool))(Il2CppBase() + 0x51E3150))(this, createIfMissing);
	}

};

}
