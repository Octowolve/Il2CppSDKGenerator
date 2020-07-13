#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GrcacheGmRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GrcacheGmRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _ticket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _ticket_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(GrcacheGmRes*))(Il2CppBase() + 0x50CDC84))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(GrcacheGmRes*, int32_t))(Il2CppBase() + 0x50CDC8C))(this, value);
	}
	template <typename T = uintptr_t> T get_ticket() {
		return ((T (*)(GrcacheGmRes*))(Il2CppBase() + 0x50CDC94))(this);
	}
	template <typename T = void> T set_ticket(uintptr_t value) {
		return ((T (*)(GrcacheGmRes*, uintptr_t))(Il2CppBase() + 0x50CDC9C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ticket_list() {
		return ((T (*)(GrcacheGmRes*))(Il2CppBase() + 0x50CDCA4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GrcacheGmRes*, bool))(Il2CppBase() + 0x50CDCAC))(this, createIfMissing);
	}

};

}
