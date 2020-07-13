#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamMemberExitBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamMemberExitBCNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _exit_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamMemberExitBCNtf*))(Il2CppBase() + 0x51B5D14))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamMemberExitBCNtf*, uint64_t))(Il2CppBase() + 0x51B5D1C))(this, value);
	}
	template <typename T = uint64_t> T get_exit_uin() {
		return ((T (*)(CSTeamMemberExitBCNtf*))(Il2CppBase() + 0x51B5D2C))(this);
	}
	template <typename T = void> T set_exit_uin(uint64_t value) {
		return ((T (*)(CSTeamMemberExitBCNtf*, uint64_t))(Il2CppBase() + 0x51B5D34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamMemberExitBCNtf*, bool))(Il2CppBase() + 0x51B5D44))(this, createIfMissing);
	}

};

}
