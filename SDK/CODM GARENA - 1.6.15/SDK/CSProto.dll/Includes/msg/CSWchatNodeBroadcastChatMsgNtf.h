#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatNodeBroadcastChatMsgNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatNodeBroadcastChatMsgNtf"));
	}

	template <typename T = uintptr_t> T& _message_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _forbid_talk_timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _forbid_talk_reason() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_message_data() {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*))(Il2CppBase() + 0x51B68E8))(this);
	}
	template <typename T = void> T set_message_data(uintptr_t value) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*, uintptr_t))(Il2CppBase() + 0x51B68F0))(this, value);
	}
	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*))(Il2CppBase() + 0x51B68F8))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*, uint32_t))(Il2CppBase() + 0x51B6900))(this, value);
	}
	template <typename T = uint32_t> T get_forbid_talk_timestamp() {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*))(Il2CppBase() + 0x51B6908))(this);
	}
	template <typename T = void> T set_forbid_talk_timestamp(uint32_t value) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*, uint32_t))(Il2CppBase() + 0x51B6910))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_forbid_talk_reason() {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*))(Il2CppBase() + 0x51B6918))(this);
	}
	template <typename T = void> T set_forbid_talk_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B6920))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatNodeBroadcastChatMsgNtf*, bool))(Il2CppBase() + 0x51B6928))(this, createIfMissing);
	}

};

}
