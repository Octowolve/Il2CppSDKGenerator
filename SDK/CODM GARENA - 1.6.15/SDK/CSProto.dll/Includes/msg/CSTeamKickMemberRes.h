#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamKickMemberRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamKickMemberRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _kick_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSTeamKickMemberRes*))(Il2CppBase() + 0x51B5CD0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSTeamKickMemberRes*, int32_t))(Il2CppBase() + 0x51B5CD8))(this, value);
	}
	template <typename T = uint64_t> T get_kick_uin() {
		return ((T (*)(CSTeamKickMemberRes*))(Il2CppBase() + 0x51B5CE0))(this);
	}
	template <typename T = void> T set_kick_uin(uint64_t value) {
		return ((T (*)(CSTeamKickMemberRes*, uint64_t))(Il2CppBase() + 0x51B5CE8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamKickMemberRes*, bool))(Il2CppBase() + 0x51B5CF8))(this, createIfMissing);
	}

};

}
