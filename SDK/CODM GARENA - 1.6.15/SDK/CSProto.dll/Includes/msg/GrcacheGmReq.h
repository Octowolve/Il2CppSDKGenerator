#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GrcacheGmReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GrcacheGmReq"));
	}

	template <typename T = int32_t> T& _op_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _ticket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _one_key_req() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_op_type() {
		return ((T (*)(GrcacheGmReq*))(Il2CppBase() + 0x50CDB94))(this);
	}
	template <typename T = void> T set_op_type(int32_t value) {
		return ((T (*)(GrcacheGmReq*, int32_t))(Il2CppBase() + 0x50CDB9C))(this, value);
	}
	template <typename T = uintptr_t> T get_ticket() {
		return ((T (*)(GrcacheGmReq*))(Il2CppBase() + 0x50CDBA4))(this);
	}
	template <typename T = void> T set_ticket(uintptr_t value) {
		return ((T (*)(GrcacheGmReq*, uintptr_t))(Il2CppBase() + 0x50CDBAC))(this, value);
	}
	template <typename T = uintptr_t> T get_one_key_req() {
		return ((T (*)(GrcacheGmReq*))(Il2CppBase() + 0x50CDBB4))(this);
	}
	template <typename T = void> T set_one_key_req(uintptr_t value) {
		return ((T (*)(GrcacheGmReq*, uintptr_t))(Il2CppBase() + 0x50CDBBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GrcacheGmReq*, bool))(Il2CppBase() + 0x50CDBC4))(this, createIfMissing);
	}

};

}
