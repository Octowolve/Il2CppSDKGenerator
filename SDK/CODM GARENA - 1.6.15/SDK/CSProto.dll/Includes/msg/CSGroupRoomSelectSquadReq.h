#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSelectSquadReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSelectSquadReq"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _squad_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomSelectSquadReq*))(Il2CppBase() + 0x51DF368))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomSelectSquadReq*, uint32_t))(Il2CppBase() + 0x51DF370))(this, value);
	}
	template <typename T = int32_t> T get_squad_idx() {
		return ((T (*)(CSGroupRoomSelectSquadReq*))(Il2CppBase() + 0x51DF378))(this);
	}
	template <typename T = void> T set_squad_idx(int32_t value) {
		return ((T (*)(CSGroupRoomSelectSquadReq*, int32_t))(Il2CppBase() + 0x51DF380))(this, value);
	}
	template <typename T = uint32_t> T get_role_id() {
		return ((T (*)(CSGroupRoomSelectSquadReq*))(Il2CppBase() + 0x51DF388))(this);
	}
	template <typename T = void> T set_role_id(uint32_t value) {
		return ((T (*)(CSGroupRoomSelectSquadReq*, uint32_t))(Il2CppBase() + 0x51DF390))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSelectSquadReq*, bool))(Il2CppBase() + 0x51DF398))(this, createIfMissing);
	}

};

}
