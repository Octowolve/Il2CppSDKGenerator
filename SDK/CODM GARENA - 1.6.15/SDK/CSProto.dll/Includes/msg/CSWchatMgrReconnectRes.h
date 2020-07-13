#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatMgrReconnectRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatMgrReconnectRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _node_ip() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _port() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _secret() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _war_zone_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _domain() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSWchatMgrReconnectRes*))(Il2CppBase() + 0x51B67C4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSWchatMgrReconnectRes*, int32_t))(Il2CppBase() + 0x51B67CC))(this, value);
	}
	template <typename T = uint32_t> T get_node_ip() {
		return ((T (*)(CSWchatMgrReconnectRes*))(Il2CppBase() + 0x51B67D4))(this);
	}
	template <typename T = void> T set_node_ip(uint32_t value) {
		return ((T (*)(CSWchatMgrReconnectRes*, uint32_t))(Il2CppBase() + 0x51B67DC))(this, value);
	}
	template <typename T = uint32_t> T get_port() {
		return ((T (*)(CSWchatMgrReconnectRes*))(Il2CppBase() + 0x51B67E4))(this);
	}
	template <typename T = void> T set_port(uint32_t value) {
		return ((T (*)(CSWchatMgrReconnectRes*, uint32_t))(Il2CppBase() + 0x51B67EC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_secret() {
		return ((T (*)(CSWchatMgrReconnectRes*))(Il2CppBase() + 0x51B67F4))(this);
	}
	template <typename T = void> T set_secret(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatMgrReconnectRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B67FC))(this, value);
	}
	template <typename T = uint32_t> T get_war_zone_id() {
		return ((T (*)(CSWchatMgrReconnectRes*))(Il2CppBase() + 0x51B6804))(this);
	}
	template <typename T = void> T set_war_zone_id(uint32_t value) {
		return ((T (*)(CSWchatMgrReconnectRes*, uint32_t))(Il2CppBase() + 0x51B680C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_domain() {
		return ((T (*)(CSWchatMgrReconnectRes*))(Il2CppBase() + 0x51B6814))(this);
	}
	template <typename T = void> T set_domain(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatMgrReconnectRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B681C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatMgrReconnectRes*, bool))(Il2CppBase() + 0x51B6824))(this, createIfMissing);
	}

};

}
