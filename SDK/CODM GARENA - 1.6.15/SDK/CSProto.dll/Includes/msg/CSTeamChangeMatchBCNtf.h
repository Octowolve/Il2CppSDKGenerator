#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamChangeMatchBCNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamChangeMatchBCNtf"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamChangeMatchBCNtf*))(Il2CppBase() + 0x51E2DA0))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamChangeMatchBCNtf*, uint64_t))(Il2CppBase() + 0x51E2DA8))(this, value);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSTeamChangeMatchBCNtf*))(Il2CppBase() + 0x51E2DB8))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSTeamChangeMatchBCNtf*, int32_t))(Il2CppBase() + 0x51E2DC0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamChangeMatchBCNtf*, bool))(Il2CppBase() + 0x51E2DC8))(this, createIfMissing);
	}

};

}
