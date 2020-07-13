#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2AnyVOIPCreateRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2Any_VOIP_CreateRoom_Res"));
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
	template <typename T = uint32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*))(Il2CppBase() + 0x510BEF0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*, int32_t))(Il2CppBase() + 0x510BEF8))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*))(Il2CppBase() + 0x510BF00))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*, uint64_t))(Il2CppBase() + 0x510BF08))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_user_access_list() {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*))(Il2CppBase() + 0x510BF18))(this);
	}
	template <typename T = uint32_t> T get_camp() {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*))(Il2CppBase() + 0x510BF20))(this);
	}
	template <typename T = void> T set_camp(uint32_t value) {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*, uint32_t))(Il2CppBase() + 0x510BF28))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2AnyVOIPCreateRoomRes*, bool))(Il2CppBase() + 0x510BF30))(this, createIfMissing);
	}

};

}
