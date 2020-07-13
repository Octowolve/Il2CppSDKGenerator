#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomFetchInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomFetchInfoReq"));
	}

	template <typename T = int32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _room_svr_addr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_flag() {
		return ((T (*)(CSGroupRoomFetchInfoReq*))(Il2CppBase() + 0x51DE58C))(this);
	}
	template <typename T = void> T set_flag(int32_t value) {
		return ((T (*)(CSGroupRoomFetchInfoReq*, int32_t))(Il2CppBase() + 0x51DE594))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomFetchInfoReq*))(Il2CppBase() + 0x51DE59C))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomFetchInfoReq*, uint32_t))(Il2CppBase() + 0x51DE5A4))(this, value);
	}
	template <typename T = uint32_t> T get_room_svr_addr() {
		return ((T (*)(CSGroupRoomFetchInfoReq*))(Il2CppBase() + 0x51DE5AC))(this);
	}
	template <typename T = void> T set_room_svr_addr(uint32_t value) {
		return ((T (*)(CSGroupRoomFetchInfoReq*, uint32_t))(Il2CppBase() + 0x51DE5B4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomFetchInfoReq*, bool))(Il2CppBase() + 0x51DE5BC))(this, createIfMissing);
	}

};

}
