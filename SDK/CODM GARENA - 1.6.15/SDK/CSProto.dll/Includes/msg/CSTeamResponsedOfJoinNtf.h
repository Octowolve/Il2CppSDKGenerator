#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamResponsedOfJoinNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamResponsedOfJoinNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _invitee() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _is_agree() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamResponsedOfJoinNtf*))(Il2CppBase() + 0x51B5E58))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamResponsedOfJoinNtf*, uint64_t))(Il2CppBase() + 0x51B5E60))(this, value);
	}
	template <typename T = uintptr_t> T get_invitee() {
		return ((T (*)(CSTeamResponsedOfJoinNtf*))(Il2CppBase() + 0x51B5E70))(this);
	}
	template <typename T = void> T set_invitee(uintptr_t value) {
		return ((T (*)(CSTeamResponsedOfJoinNtf*, uintptr_t))(Il2CppBase() + 0x51B5E78))(this, value);
	}
	template <typename T = int32_t> T get_is_agree() {
		return ((T (*)(CSTeamResponsedOfJoinNtf*))(Il2CppBase() + 0x51B5E80))(this);
	}
	template <typename T = void> T set_is_agree(int32_t value) {
		return ((T (*)(CSTeamResponsedOfJoinNtf*, int32_t))(Il2CppBase() + 0x51B5E88))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamResponsedOfJoinNtf*, bool))(Il2CppBase() + 0x51B5E90))(this, createIfMissing);
	}

};

}
