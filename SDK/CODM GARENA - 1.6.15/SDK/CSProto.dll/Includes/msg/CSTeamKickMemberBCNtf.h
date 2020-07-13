#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamKickMemberBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamKickMemberBCNtf"));
	}

	template <typename T = uint64_t> T& _kick_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_kick_uin() {
		return ((T (*)(CSTeamKickMemberBCNtf*))(Il2CppBase() + 0x51B5C68))(this);
	}
	template <typename T = void> T set_kick_uin(uint64_t value) {
		return ((T (*)(CSTeamKickMemberBCNtf*, uint64_t))(Il2CppBase() + 0x51B5C70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamKickMemberBCNtf*, bool))(Il2CppBase() + 0x51B5C80))(this, createIfMissing);
	}

};

}
