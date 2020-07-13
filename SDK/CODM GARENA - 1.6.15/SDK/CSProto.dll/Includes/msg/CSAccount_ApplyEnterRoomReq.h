#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountApplyEnterRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_ApplyEnterRoomReq"));
	}

	template <typename T = uint64_t> T& _dst_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_dst_player_id() {
		return ((T (*)(CSAccountApplyEnterRoomReq*))(Il2CppBase() + 0x516F1EC))(this);
	}
	template <typename T = void> T set_dst_player_id(uint64_t value) {
		return ((T (*)(CSAccountApplyEnterRoomReq*, uint64_t))(Il2CppBase() + 0x516F1F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountApplyEnterRoomReq*, bool))(Il2CppBase() + 0x516F204))(this, createIfMissing);
	}

};

}
