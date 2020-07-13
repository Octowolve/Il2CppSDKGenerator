#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatMgrReconnectReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatMgrReconnectReq"));
	}

	template <typename T = int32_t> T& _reason_code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reason_desc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _secret() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_reason_code() {
		return ((T (*)(CSWchatMgrReconnectReq*))(Il2CppBase() + 0x51B6778))(this);
	}
	template <typename T = void> T set_reason_code(int32_t value) {
		return ((T (*)(CSWchatMgrReconnectReq*, int32_t))(Il2CppBase() + 0x51B6780))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reason_desc() {
		return ((T (*)(CSWchatMgrReconnectReq*))(Il2CppBase() + 0x51B6788))(this);
	}
	template <typename T = void> T set_reason_desc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatMgrReconnectReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B6790))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_secret() {
		return ((T (*)(CSWchatMgrReconnectReq*))(Il2CppBase() + 0x51B6798))(this);
	}
	template <typename T = void> T set_secret(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatMgrReconnectReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B67A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatMgrReconnectReq*, bool))(Il2CppBase() + 0x51B67A8))(this, createIfMissing);
	}

};

}
