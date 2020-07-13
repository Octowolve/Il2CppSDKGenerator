#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamResponseJoinRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamResponseJoinRes"));
	}

	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamResponseJoinRes*))(Il2CppBase() + 0x51B5F08))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamResponseJoinRes*, uint64_t))(Il2CppBase() + 0x51B5F10))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSTeamResponseJoinRes*))(Il2CppBase() + 0x51B5F20))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSTeamResponseJoinRes*, int32_t))(Il2CppBase() + 0x51B5F28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamResponseJoinRes*, bool))(Il2CppBase() + 0x51B5F30))(this, createIfMissing);
	}

};

}
