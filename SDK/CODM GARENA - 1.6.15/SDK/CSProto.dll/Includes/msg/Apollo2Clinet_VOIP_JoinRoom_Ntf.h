#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class Apollo2ClinetVOIPJoinRoomNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "Apollo2Clinet_VOIP_JoinRoom_Ntf"));
	}

	template <typename T = uint64_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _user_access_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_room_id() {
		return ((T (*)(Apollo2ClinetVOIPJoinRoomNtf*))(Il2CppBase() + 0x510C324))(this);
	}
	template <typename T = void> T set_room_id(uint64_t value) {
		return ((T (*)(Apollo2ClinetVOIPJoinRoomNtf*, uint64_t))(Il2CppBase() + 0x510C32C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_user_access_list() {
		return ((T (*)(Apollo2ClinetVOIPJoinRoomNtf*))(Il2CppBase() + 0x510C33C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(Apollo2ClinetVOIPJoinRoomNtf*, bool))(Il2CppBase() + 0x510C344))(this, createIfMissing);
	}

};

}
