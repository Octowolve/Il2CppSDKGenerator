#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamInvitedToJoinNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamInvitedToJoinNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _inviter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamInvitedToJoinNtf*))(Il2CppBase() + 0x51E2EF8))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamInvitedToJoinNtf*, uint64_t))(Il2CppBase() + 0x51E2F00))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSTeamInvitedToJoinNtf*))(Il2CppBase() + 0x51E2F10))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSTeamInvitedToJoinNtf*, int32_t))(Il2CppBase() + 0x51E2F18))(this, value);
	}
	template <typename T = uintptr_t> T get_inviter() {
		return ((T (*)(CSTeamInvitedToJoinNtf*))(Il2CppBase() + 0x51E2F20))(this);
	}
	template <typename T = void> T set_inviter(uintptr_t value) {
		return ((T (*)(CSTeamInvitedToJoinNtf*, uintptr_t))(Il2CppBase() + 0x51E2F28))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(CSTeamInvitedToJoinNtf*))(Il2CppBase() + 0x51E2F30))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(CSTeamInvitedToJoinNtf*, int32_t))(Il2CppBase() + 0x51E2F38))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamInvitedToJoinNtf*, bool))(Il2CppBase() + 0x51E2F40))(this, createIfMissing);
	}

};

}
