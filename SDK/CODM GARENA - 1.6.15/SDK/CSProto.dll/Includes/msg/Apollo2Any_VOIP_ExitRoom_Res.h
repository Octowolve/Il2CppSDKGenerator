#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2AnyVOIPExitRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2Any_VOIP_ExitRoom_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _member_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _member_count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*))(Il2CppBase() + 0x510BF90))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*, int32_t))(Il2CppBase() + 0x510BF98))(this, value);
	}
	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*))(Il2CppBase() + 0x510BFA0))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*, uint64_t))(Il2CppBase() + 0x510BFA8))(this, value);
	}
	template <typename T = uint32_t> T get_member_id() {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*))(Il2CppBase() + 0x510BFB8))(this);
	}
	template <typename T = void> T set_member_id(uint32_t value) {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*, uint32_t))(Il2CppBase() + 0x510BFC0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_open_id() {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*))(Il2CppBase() + 0x510BFC8))(this);
	}
	template <typename T = void> T set_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510BFD0))(this, value);
	}
	template <typename T = uint32_t> T get_member_count() {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*))(Il2CppBase() + 0x510BFD8))(this);
	}
	template <typename T = void> T set_member_count(uint32_t value) {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*, uint32_t))(Il2CppBase() + 0x510BFE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2AnyVOIPExitRoomRes*, bool))(Il2CppBase() + 0x510BFE8))(this, createIfMissing);
	}

};

}
