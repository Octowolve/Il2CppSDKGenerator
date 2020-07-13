#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GroupRoomTicketOpNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GroupRoomTicketOpNtf"));
	}

	template <typename T = uint32_t> T& _op_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _ticket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_op_type() {
		return ((T (*)(GroupRoomTicketOpNtf*))(Il2CppBase() + 0x50CEAC8))(this);
	}
	template <typename T = void> T set_op_type(uint32_t value) {
		return ((T (*)(GroupRoomTicketOpNtf*, uint32_t))(Il2CppBase() + 0x50CEAD0))(this, value);
	}
	template <typename T = uintptr_t> T get_ticket() {
		return ((T (*)(GroupRoomTicketOpNtf*))(Il2CppBase() + 0x50CEAD8))(this);
	}
	template <typename T = void> T set_ticket(uintptr_t value) {
		return ((T (*)(GroupRoomTicketOpNtf*, uintptr_t))(Il2CppBase() + 0x50CEAE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GroupRoomTicketOpNtf*, bool))(Il2CppBase() + 0x50CEAE8))(this, createIfMissing);
	}

};

}
