#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamMemberJoinBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamMemberJoinBCNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _members() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamMemberJoinBCNtf*))(Il2CppBase() + 0x51B5DFC))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamMemberJoinBCNtf*, uint64_t))(Il2CppBase() + 0x51B5E04))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_members() {
		return ((T (*)(CSTeamMemberJoinBCNtf*))(Il2CppBase() + 0x51B5E14))(this);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSTeamMemberJoinBCNtf*))(Il2CppBase() + 0x51B5E1C))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSTeamMemberJoinBCNtf*, int32_t))(Il2CppBase() + 0x51B5E24))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(CSTeamMemberJoinBCNtf*))(Il2CppBase() + 0x51B5E2C))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(CSTeamMemberJoinBCNtf*, int32_t))(Il2CppBase() + 0x51B5E34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamMemberJoinBCNtf*, bool))(Il2CppBase() + 0x51B5E3C))(this, createIfMissing);
	}

};

}
