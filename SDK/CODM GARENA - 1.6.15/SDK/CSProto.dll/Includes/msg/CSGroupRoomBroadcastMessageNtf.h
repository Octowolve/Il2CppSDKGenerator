#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomBroadcastMessageNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomBroadcastMessageNtf"));
	}

	template <typename T = uintptr_t> T& _message_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _message_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_message_type() {
		return ((T (*)(CSGroupRoomBroadcastMessageNtf*))(Il2CppBase() + 0x51DD8BC))(this);
	}
	template <typename T = void> T set_message_type(uintptr_t value) {
		return ((T (*)(CSGroupRoomBroadcastMessageNtf*, uintptr_t))(Il2CppBase() + 0x51DD8C4))(this, value);
	}
	template <typename T = uintptr_t> T get_message_info() {
		return ((T (*)(CSGroupRoomBroadcastMessageNtf*))(Il2CppBase() + 0x51DD8CC))(this);
	}
	template <typename T = void> T set_message_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomBroadcastMessageNtf*, uintptr_t))(Il2CppBase() + 0x51DD8D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomBroadcastMessageNtf*, bool))(Il2CppBase() + 0x51DD8DC))(this, createIfMissing);
	}

};

}
