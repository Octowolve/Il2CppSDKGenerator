#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatGuildSendMessageRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_GuildSendMessage_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _forbid_talk_timestamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChatGuildSendMessageRes*))(Il2CppBase() + 0x51CFE24))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChatGuildSendMessageRes*, int32_t))(Il2CppBase() + 0x51CFE2C))(this, value);
	}
	template <typename T = uint32_t> T get_forbid_talk_timestamp() {
		return ((T (*)(CSChatGuildSendMessageRes*))(Il2CppBase() + 0x51CFE34))(this);
	}
	template <typename T = void> T set_forbid_talk_timestamp(uint32_t value) {
		return ((T (*)(CSChatGuildSendMessageRes*, uint32_t))(Il2CppBase() + 0x51CFE3C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(CSChatGuildSendMessageRes*))(Il2CppBase() + 0x51CFE44))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatGuildSendMessageRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFE4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatGuildSendMessageRes*, bool))(Il2CppBase() + 0x51CFE54))(this, createIfMissing);
	}

};

}
