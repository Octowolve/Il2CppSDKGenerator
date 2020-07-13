#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatEsSendMessageReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_EsSendMessage_Req"));
	}

	template <typename T = uint32_t> T& _chat_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _broadcast_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _msg_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message_data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _matchroom_bus_id() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _room_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_chat_type() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFB70))(this);
	}
	template <typename T = void> T set_chat_type(uint32_t value) {
		return ((T (*)(CSChatEsSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFB78))(this, value);
	}
	template <typename T = uint32_t> T get_broadcast_type() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFB80))(this);
	}
	template <typename T = void> T set_broadcast_type(uint32_t value) {
		return ((T (*)(CSChatEsSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFB88))(this, value);
	}
	template <typename T = uint32_t> T get_msg_id() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFB90))(this);
	}
	template <typename T = void> T set_msg_id(uint32_t value) {
		return ((T (*)(CSChatEsSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFB98))(this, value);
	}
	template <typename T = int32_t> T get_message_type() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFBA0))(this);
	}
	template <typename T = void> T set_message_type(int32_t value) {
		return ((T (*)(CSChatEsSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFBA8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message_data() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFBB0))(this);
	}
	template <typename T = void> T set_message_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatEsSendMessageReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFBB8))(this, value);
	}
	template <typename T = uint32_t> T get_matchroom_bus_id() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFBC0))(this);
	}
	template <typename T = void> T set_matchroom_bus_id(uint32_t value) {
		return ((T (*)(CSChatEsSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFBC8))(this, value);
	}
	template <typename T = uint64_t> T get_room_guid() {
		return ((T (*)(CSChatEsSendMessageReq*))(Il2CppBase() + 0x51CFBD0))(this);
	}
	template <typename T = void> T set_room_guid(uint64_t value) {
		return ((T (*)(CSChatEsSendMessageReq*, uint64_t))(Il2CppBase() + 0x51CFBD8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatEsSendMessageReq*, bool))(Il2CppBase() + 0x51CFBE8))(this, createIfMissing);
	}

};

}
