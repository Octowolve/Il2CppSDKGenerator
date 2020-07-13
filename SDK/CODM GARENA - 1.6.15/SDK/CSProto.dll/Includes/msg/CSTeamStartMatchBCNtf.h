#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamStartMatchBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamStartMatchBCNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamStartMatchBCNtf*))(Il2CppBase() + 0x51B5F4C))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamStartMatchBCNtf*, uint64_t))(Il2CppBase() + 0x51B5F54))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamStartMatchBCNtf*, bool))(Il2CppBase() + 0x51B5F64))(this, createIfMissing);
	}

};

}
