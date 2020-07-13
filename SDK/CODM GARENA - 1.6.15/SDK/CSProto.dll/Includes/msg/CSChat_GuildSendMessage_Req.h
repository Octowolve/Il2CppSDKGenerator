#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatGuildSendMessageReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_GuildSendMessage_Req"));
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
	template <typename T = uint64_t> T& _clan_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _link_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_system() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _message_info() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_message_type() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFD90))(this);
	}
	template <typename T = void> T set_message_type(int32_t value) {
		return ((T (*)(CSChatGuildSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFD98))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message_data() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFDA0))(this);
	}
	template <typename T = void> T set_message_data(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatGuildSendMessageReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFDA8))(this, value);
	}
	template <typename T = uint32_t> T get_message_seq() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFDB0))(this);
	}
	template <typename T = void> T set_message_seq(uint32_t value) {
		return ((T (*)(CSChatGuildSendMessageReq*, uint32_t))(Il2CppBase() + 0x51CFDB8))(this, value);
	}
	template <typename T = uint64_t> T get_clan_id() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFDC0))(this);
	}
	template <typename T = void> T set_clan_id(uint64_t value) {
		return ((T (*)(CSChatGuildSendMessageReq*, uint64_t))(Il2CppBase() + 0x51CFDC8))(this, value);
	}
	template <typename T = int32_t> T get_link_type() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFDD8))(this);
	}
	template <typename T = void> T set_link_type(int32_t value) {
		return ((T (*)(CSChatGuildSendMessageReq*, int32_t))(Il2CppBase() + 0x51CFDE0))(this, value);
	}
	template <typename T = bool> T get_is_system() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFDE8))(this);
	}
	template <typename T = void> T set_is_system(bool value) {
		return ((T (*)(CSChatGuildSendMessageReq*, bool))(Il2CppBase() + 0x51CFDF0))(this, value);
	}
	template <typename T = uintptr_t> T get_message_info() {
		return ((T (*)(CSChatGuildSendMessageReq*))(Il2CppBase() + 0x51CFDF8))(this);
	}
	template <typename T = void> T set_message_info(uintptr_t value) {
		return ((T (*)(CSChatGuildSendMessageReq*, uintptr_t))(Il2CppBase() + 0x51CFE00))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatGuildSendMessageReq*, bool))(Il2CppBase() + 0x51CFE08))(this, createIfMissing);
	}

};

}
