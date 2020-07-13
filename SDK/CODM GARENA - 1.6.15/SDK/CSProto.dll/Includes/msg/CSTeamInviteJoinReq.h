#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamInviteJoinReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamInviteJoinReq"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _invite_friend_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _invite_clan_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamInviteJoinReq*))(Il2CppBase() + 0x51E3018))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamInviteJoinReq*, uint64_t))(Il2CppBase() + 0x51E3020))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_invite_friend_list() {
		return ((T (*)(CSTeamInviteJoinReq*))(Il2CppBase() + 0x51E3030))(this);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_invite_clan_list() {
		return ((T (*)(CSTeamInviteJoinReq*))(Il2CppBase() + 0x51E3038))(this);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSTeamInviteJoinReq*))(Il2CppBase() + 0x51E3040))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSTeamInviteJoinReq*, int32_t))(Il2CppBase() + 0x51E3048))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(CSTeamInviteJoinReq*))(Il2CppBase() + 0x51E3050))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(CSTeamInviteJoinReq*, int32_t))(Il2CppBase() + 0x51E3058))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamInviteJoinReq*, bool))(Il2CppBase() + 0x51E3060))(this, createIfMissing);
	}

};

}
