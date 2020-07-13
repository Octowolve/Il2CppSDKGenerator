#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSearchRoomByRoomIdRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSearchRoomByRoomIdRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _team_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _roomsvr_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSSearchRoomByRoomIdRes*))(Il2CppBase() + 0x51E1244))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSSearchRoomByRoomIdRes*, int32_t))(Il2CppBase() + 0x51E124C))(this, value);
	}
	template <typename T = uint32_t> T get_team_id() {
		return ((T (*)(CSSearchRoomByRoomIdRes*))(Il2CppBase() + 0x51E1254))(this);
	}
	template <typename T = void> T set_team_id(uint32_t value) {
		return ((T (*)(CSSearchRoomByRoomIdRes*, uint32_t))(Il2CppBase() + 0x51E125C))(this, value);
	}
	template <typename T = int32_t> T get_roomsvr_id() {
		return ((T (*)(CSSearchRoomByRoomIdRes*))(Il2CppBase() + 0x51E1264))(this);
	}
	template <typename T = void> T set_roomsvr_id(int32_t value) {
		return ((T (*)(CSSearchRoomByRoomIdRes*, int32_t))(Il2CppBase() + 0x51E126C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSearchRoomByRoomIdRes*, bool))(Il2CppBase() + 0x51E1274))(this, createIfMissing);
	}

};

}
