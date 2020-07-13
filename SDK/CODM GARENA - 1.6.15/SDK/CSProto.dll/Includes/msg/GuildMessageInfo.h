#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildMessageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildMessageInfo"));
	}

	template <typename T = uintptr_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _chat_msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_message_type() {
		return ((T (*)(GuildMessageInfo*))(Il2CppBase() + 0x50CFFD4))(this);
	}
	template <typename T = void> T set_message_type(uintptr_t value) {
		return ((T (*)(GuildMessageInfo*, uintptr_t))(Il2CppBase() + 0x50CFFDC))(this, value);
	}
	template <typename T = uintptr_t> T get_chat_msg() {
		return ((T (*)(GuildMessageInfo*))(Il2CppBase() + 0x50CFFE4))(this);
	}
	template <typename T = void> T set_chat_msg(uintptr_t value) {
		return ((T (*)(GuildMessageInfo*, uintptr_t))(Il2CppBase() + 0x50CFFEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildMessageInfo*, bool))(Il2CppBase() + 0x50CFFF4))(this, createIfMissing);
	}

};

}
