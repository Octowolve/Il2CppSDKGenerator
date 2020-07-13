#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChatMsgInEs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChatMsgInEs"));
	}

	template <typename T = uint32_t> T& _chat_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _chat_content() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _sender_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_chat_type() {
		return ((T (*)(ChatMsgInEs*))(Il2CppBase() + 0x516E7F4))(this);
	}
	template <typename T = void> T set_chat_type(uint32_t value) {
		return ((T (*)(ChatMsgInEs*, uint32_t))(Il2CppBase() + 0x516E7FC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_chat_content() {
		return ((T (*)(ChatMsgInEs*))(Il2CppBase() + 0x516E804))(this);
	}
	template <typename T = void> T set_chat_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ChatMsgInEs*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516E80C))(this, value);
	}
	template <typename T = uint64_t> T get_sender_id() {
		return ((T (*)(ChatMsgInEs*))(Il2CppBase() + 0x516E814))(this);
	}
	template <typename T = void> T set_sender_id(uint64_t value) {
		return ((T (*)(ChatMsgInEs*, uint64_t))(Il2CppBase() + 0x516E81C))(this, value);
	}
	template <typename T = uint32_t> T get_time() {
		return ((T (*)(ChatMsgInEs*))(Il2CppBase() + 0x516E82C))(this);
	}
	template <typename T = void> T set_time(uint32_t value) {
		return ((T (*)(ChatMsgInEs*, uint32_t))(Il2CppBase() + 0x516E834))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChatMsgInEs*, bool))(Il2CppBase() + 0x516E83C))(this, createIfMissing);
	}

};

}
