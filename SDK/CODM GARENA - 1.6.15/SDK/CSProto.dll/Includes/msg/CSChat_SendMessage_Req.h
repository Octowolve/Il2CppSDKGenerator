#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatSendMessageReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_SendMessage_Req"));
	}

	template <typename T = uint64_t> T& _recv_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message_data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _message_seq() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _link_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _is_system() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _message_info() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint64_t> T get_recv_player_id() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFF44))(this);
	}
	template <typename T = void> T set_recv_player_id(uint64_t value) {
		return ((T (*)(CSChatSendMessageReq*, uint64_t))(Il2CppBase() + 0x51CFF4C))(this, value);
	}
	template <typename T = int32_t> T get_message_type() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFF5C))(this);
	}
	template <typename T = void> T set_message_type(int32_t value) {
		return ((T (*)(CSChatSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFF64))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message_data() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFF6C))(this);
	}
	template <typename T = void> T set_message_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatSendMessageReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFF74))(this, value);
	}
	template <typename T = uint32_t> T get_message_seq() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFF7C))(this);
	}
	template <typename T = void> T set_message_seq(uint32_t value) {
		return ((T (*)(CSChatSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFF84))(this, value);
	}
	template <typename T = int32_t> T get_link_type() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFF8C))(this);
	}
	template <typename T = void> T set_link_type(int32_t value) {
		return ((T (*)(CSChatSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFF94))(this, value);
	}
	template <typename T = bool> T get_is_system() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFF9C))(this);
	}
	template <typename T = void> T set_is_system(bool value) {
		return ((T (*)(CSChatSendMessageReq*, bool))(Il2CppBase() + 0x51CFFA4))(this, value);
	}
	template <typename T = uintptr_t> T get_message_info() {
		return ((T (*)(CSChatSendMessageReq*))(Il2CppBase() + 0x51CFFAC))(this);
	}
	template <typename T = void> T set_message_info(uintptr_t value) {
		return ((T (*)(CSChatSendMessageReq*, uintptr_t))(Il2CppBase() + 0x51CFFB4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatSendMessageReq*, bool))(Il2CppBase() + 0x51CFFBC))(this, createIfMissing);
	}

};

}
