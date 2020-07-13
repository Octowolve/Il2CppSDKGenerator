#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamTeamInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamTeamInfoReq"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamTeamInfoReq*))(Il2CppBase() + 0x51B6044))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamTeamInfoReq*, uint64_t))(Il2CppBase() + 0x51B604C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamTeamInfoReq*, bool))(Il2CppBase() + 0x51B605C))(this, createIfMissing);
	}

};

}
