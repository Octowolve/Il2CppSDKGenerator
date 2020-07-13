#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamExitRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamExitRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _leader_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSTeamExitRes*))(Il2CppBase() + 0x51E2EB4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSTeamExitRes*, int32_t))(Il2CppBase() + 0x51E2EBC))(this, value);
	}
	template <typename T = uint64_t> T get_leader_uin() {
		return ((T (*)(CSTeamExitRes*))(Il2CppBase() + 0x51E2EC4))(this);
	}
	template <typename T = void> T set_leader_uin(uint64_t value) {
		return ((T (*)(CSTeamExitRes*, uint64_t))(Il2CppBase() + 0x51E2ECC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamExitRes*, bool))(Il2CppBase() + 0x51E2EDC))(this, createIfMissing);
	}

};

}
