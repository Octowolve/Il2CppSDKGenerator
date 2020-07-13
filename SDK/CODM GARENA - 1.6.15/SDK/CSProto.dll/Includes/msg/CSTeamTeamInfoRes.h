#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamTeamInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamTeamInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _members() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _match_service_module() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSTeamTeamInfoRes*))(Il2CppBase() + 0x51B611C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSTeamTeamInfoRes*, int32_t))(Il2CppBase() + 0x51B6124))(this, value);
	}
	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamTeamInfoRes*))(Il2CppBase() + 0x51B612C))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamTeamInfoRes*, uint64_t))(Il2CppBase() + 0x51B6134))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_members() {
		return ((T (*)(CSTeamTeamInfoRes*))(Il2CppBase() + 0x51B6144))(this);
	}
	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSTeamTeamInfoRes*))(Il2CppBase() + 0x51B614C))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSTeamTeamInfoRes*, int32_t))(Il2CppBase() + 0x51B6154))(this, value);
	}
	template <typename T = int32_t> T get_match_service_module() {
		return ((T (*)(CSTeamTeamInfoRes*))(Il2CppBase() + 0x51B615C))(this);
	}
	template <typename T = void> T set_match_service_module(int32_t value) {
		return ((T (*)(CSTeamTeamInfoRes*, int32_t))(Il2CppBase() + 0x51B6164))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamTeamInfoRes*, bool))(Il2CppBase() + 0x51B616C))(this, createIfMissing);
	}

};

}
