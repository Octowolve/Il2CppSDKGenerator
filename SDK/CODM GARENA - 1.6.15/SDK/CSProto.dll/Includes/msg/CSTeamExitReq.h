#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamExitReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamExitReq"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamExitReq*))(Il2CppBase() + 0x51E2E70))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamExitReq*, uint64_t))(Il2CppBase() + 0x51E2E78))(this, value);
	}
	template <typename T = int32_t> T get_reason() {
		return ((T (*)(CSTeamExitReq*))(Il2CppBase() + 0x51E2E88))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(CSTeamExitReq*, int32_t))(Il2CppBase() + 0x51E2E90))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamExitReq*, bool))(Il2CppBase() + 0x51E2E98))(this, createIfMissing);
	}

};

}
