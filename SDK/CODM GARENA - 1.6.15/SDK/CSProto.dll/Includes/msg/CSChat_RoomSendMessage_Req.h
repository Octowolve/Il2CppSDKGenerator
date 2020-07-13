#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatRoomSendMessageReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_RoomSendMessage_Req"));
	}

	template <typename T = int32_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _message_seq() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _link_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _group_room_bus_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_message_type() {
		return ((T (*)(CSChatRoomSendMessageReq*))(Il2CppBase() + 0x51CFE9C))(this);
	}
	template <typename T = void> T set_message_type(int32_t value) {
		return ((T (*)(CSChatRoomSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFEA4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message_data() {
		return ((T (*)(CSChatRoomSendMessageReq*))(Il2CppBase() + 0x51CFEAC))(this);
	}
	template <typename T = void> T set_message_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatRoomSendMessageReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFEB4))(this, value);
	}
	template <typename T = uint32_t> T get_message_seq() {
		return ((T (*)(CSChatRoomSendMessageReq*))(Il2CppBase() + 0x51CFEBC))(this);
	}
	template <typename T = void> T set_message_seq(uint32_t value) {
		return ((T (*)(CSChatRoomSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFEC4))(this, value);
	}
	template <typename T = int32_t> T get_link_type() {
		return ((T (*)(CSChatRoomSendMessageReq*))(Il2CppBase() + 0x51CFECC))(this);
	}
	template <typename T = void> T set_link_type(int32_t value) {
		return ((T (*)(CSChatRoomSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFED4))(this, value);
	}
	template <typename T = uint32_t> T get_group_room_bus_id() {
		return ((T (*)(CSChatRoomSendMessageReq*))(Il2CppBase() + 0x51CFEDC))(this);
	}
	template <typename T = void> T set_group_room_bus_id(uint32_t value) {
		return ((T (*)(CSChatRoomSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFEE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatRoomSendMessageReq*, bool))(Il2CppBase() + 0x51CFEEC))(this, createIfMissing);
	}

};

}
