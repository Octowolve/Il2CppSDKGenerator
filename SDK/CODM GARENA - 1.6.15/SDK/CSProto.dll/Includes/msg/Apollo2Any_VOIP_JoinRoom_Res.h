#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2AnyVOIPJoinRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2Any_VOIP_JoinRoom_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _user_access_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(Apollo2AnyVOIPJoinRoomRes*))(Il2CppBase() + 0x510C0A8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(Apollo2AnyVOIPJoinRoomRes*, int32_t))(Il2CppBase() + 0x510C0B0))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Apollo2AnyVOIPJoinRoomRes*))(Il2CppBase() + 0x510C0B8))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Apollo2AnyVOIPJoinRoomRes*, uint64_t))(Il2CppBase() + 0x510C0C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_user_access_list() {
		return ((T (*)(Apollo2AnyVOIPJoinRoomRes*))(Il2CppBase() + 0x510C0D0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2AnyVOIPJoinRoomRes*, bool))(Il2CppBase() + 0x510C0D8))(this, createIfMissing);
	}

};

}
