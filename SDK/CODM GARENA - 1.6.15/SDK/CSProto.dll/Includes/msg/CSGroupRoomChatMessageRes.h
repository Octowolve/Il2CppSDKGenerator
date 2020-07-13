#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChatMessageRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChatMessageRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomChatMessageRes*))(Il2CppBase() + 0x51DDF34))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomChatMessageRes*, int32_t))(Il2CppBase() + 0x51DDF3C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(CSGroupRoomChatMessageRes*))(Il2CppBase() + 0x51DDF44))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomChatMessageRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DDF4C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChatMessageRes*, bool))(Il2CppBase() + 0x51DDF54))(this, createIfMissing);
	}

};

}
