#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamResponseJoinReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamResponseJoinReq"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _is_agree() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _invitor_uin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamResponseJoinReq*))(Il2CppBase() + 0x51B5EAC))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamResponseJoinReq*, uint64_t))(Il2CppBase() + 0x51B5EB4))(this, value);
	}
	template <typename T = int32_t> T get_is_agree() {
		return ((T (*)(CSTeamResponseJoinReq*))(Il2CppBase() + 0x51B5EC4))(this);
	}
	template <typename T = void> T set_is_agree(int32_t value) {
		return ((T (*)(CSTeamResponseJoinReq*, int32_t))(Il2CppBase() + 0x51B5ECC))(this, value);
	}
	template <typename T = uint64_t> T get_invitor_uin() {
		return ((T (*)(CSTeamResponseJoinReq*))(Il2CppBase() + 0x51B5ED4))(this);
	}
	template <typename T = void> T set_invitor_uin(uint64_t value) {
		return ((T (*)(CSTeamResponseJoinReq*, uint64_t))(Il2CppBase() + 0x51B5EDC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamResponseJoinReq*, bool))(Il2CppBase() + 0x51B5EEC))(this, createIfMissing);
	}

};

}
