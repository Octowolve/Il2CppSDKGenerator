#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamStopMatchBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamStopMatchBCNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamStopMatchBCNtf*))(Il2CppBase() + 0x51B5FC8))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamStopMatchBCNtf*, uint64_t))(Il2CppBase() + 0x51B5FD0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamStopMatchBCNtf*, bool))(Il2CppBase() + 0x51B5FE0))(this, createIfMissing);
	}

};

}
