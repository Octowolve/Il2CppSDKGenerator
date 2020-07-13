#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchMakingReadyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchMakingReadyReq"));
	}

	template <typename T = uint64_t> T& _multi_team_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_multi_team_id() {
		return ((T (*)(CSMatchMakingReadyReq*))(Il2CppBase() + 0x51F06CC))(this);
	}
	template <typename T = void> T set_multi_team_id(uint64_t value) {
		return ((T (*)(CSMatchMakingReadyReq*, uint64_t))(Il2CppBase() + 0x51F06D4))(this, value);
	}
	template <typename T = uint64_t> T get_team_id() {
		return ((T (*)(CSMatchMakingReadyReq*))(Il2CppBase() + 0x51F06E4))(this);
	}
	template <typename T = void> T set_team_id(uint64_t value) {
		return ((T (*)(CSMatchMakingReadyReq*, uint64_t))(Il2CppBase() + 0x51F06EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchMakingReadyReq*, bool))(Il2CppBase() + 0x51F06FC))(this, createIfMissing);
	}

};

}
