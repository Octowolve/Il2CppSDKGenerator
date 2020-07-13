#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2ClinetVOIPExitRoomNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2Clinet_VOIP_ExitRoom_Ntf"));
	}

	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _member_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _open_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _member_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*))(Il2CppBase() + 0x510C21C))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*, uint64_t))(Il2CppBase() + 0x510C224))(this, value);
	}
	template <typename T = uint32_t> T get_member_id() {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*))(Il2CppBase() + 0x510C234))(this);
	}
	template <typename T = void> T set_member_id(uint32_t value) {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*, uint32_t))(Il2CppBase() + 0x510C23C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_open_id() {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*))(Il2CppBase() + 0x510C244))(this);
	}
	template <typename T = void> T set_open_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510C24C))(this, value);
	}
	template <typename T = uint32_t> T get_member_count() {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*))(Il2CppBase() + 0x510C254))(this);
	}
	template <typename T = void> T set_member_count(uint32_t value) {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*, uint32_t))(Il2CppBase() + 0x510C25C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2ClinetVOIPExitRoomNtf*, bool))(Il2CppBase() + 0x510C264))(this, createIfMissing);
	}

};

}
