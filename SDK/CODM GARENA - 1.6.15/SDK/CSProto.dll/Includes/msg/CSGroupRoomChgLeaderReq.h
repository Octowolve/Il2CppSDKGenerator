#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChgLeaderReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChgLeaderReq"));
	}

	template <typename T = uint64_t> T& _target_player() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_target_player() {
		return ((T (*)(CSGroupRoomChgLeaderReq*))(Il2CppBase() + 0x51DDF70))(this);
	}
	template <typename T = void> T set_target_player(uint64_t value) {
		return ((T (*)(CSGroupRoomChgLeaderReq*, uint64_t))(Il2CppBase() + 0x51DDF78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChgLeaderReq*, bool))(Il2CppBase() + 0x51DDF88))(this, createIfMissing);
	}

};

}
