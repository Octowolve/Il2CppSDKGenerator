#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSRoomMatchBeforeJoinMatchNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSRoomMatchBeforeJoinMatchNtf"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*))(Il2CppBase() + 0x51E0564))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*, int32_t))(Il2CppBase() + 0x51E056C))(this, value);
	}
	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*))(Il2CppBase() + 0x51E0574))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E057C))(this, value);
	}
	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*))(Il2CppBase() + 0x51E0584))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*, uint32_t))(Il2CppBase() + 0x51E058C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSRoomMatchBeforeJoinMatchNtf*, bool))(Il2CppBase() + 0x51E0594))(this, createIfMissing);
	}

};

}
