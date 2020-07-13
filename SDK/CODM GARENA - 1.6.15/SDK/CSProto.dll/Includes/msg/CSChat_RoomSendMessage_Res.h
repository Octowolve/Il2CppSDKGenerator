#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChatRoomSendMessageRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChat_RoomSendMessage_Res"));
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
		return ((T (*)(CSChatRoomSendMessageRes*))(Il2CppBase() + 0x51CFF08))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChatRoomSendMessageRes*, int32_t))(Il2CppBase() + 0x51CFF10))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason() {
		return ((T (*)(CSChatRoomSendMessageRes*))(Il2CppBase() + 0x51CFF18))(this);
	}
	template <typename T = void> T set_reason(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSChatRoomSendMessageRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51CFF20))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChatRoomSendMessageRes*, bool))(Il2CppBase() + 0x51CFF28))(this, createIfMissing);
	}

};

}
