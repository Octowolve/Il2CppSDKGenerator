#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatMgrSendNodeIpNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatMgrSendNodeIpNtf"));
	}

	template <typename T = uint32_t> T& _node_ip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _port() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _secret() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _war_zone_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _domain() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _forbid_talk_timestamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_node_ip() {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*))(Il2CppBase() + 0x51B6840))(this);
	}
	template <typename T = void> T set_node_ip(uint32_t value) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, uint32_t))(Il2CppBase() + 0x51B6848))(this, value);
	}
	template <typename T = uint32_t> T get_port() {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*))(Il2CppBase() + 0x51B6850))(this);
	}
	template <typename T = void> T set_port(uint32_t value) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, uint32_t))(Il2CppBase() + 0x51B6858))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_secret() {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*))(Il2CppBase() + 0x51B6860))(this);
	}
	template <typename T = void> T set_secret(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B6868))(this, value);
	}
	template <typename T = uint32_t> T get_war_zone_id() {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*))(Il2CppBase() + 0x51B6870))(this);
	}
	template <typename T = void> T set_war_zone_id(uint32_t value) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, uint32_t))(Il2CppBase() + 0x51B6878))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_domain() {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*))(Il2CppBase() + 0x51B6880))(this);
	}
	template <typename T = void> T set_domain(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B6888))(this, value);
	}
	template <typename T = uint32_t> T get_forbid_talk_timestamp() {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*))(Il2CppBase() + 0x51B6890))(this);
	}
	template <typename T = void> T set_forbid_talk_timestamp(uint32_t value) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, uint32_t))(Il2CppBase() + 0x51B6898))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatMgrSendNodeIpNtf*, bool))(Il2CppBase() + 0x51B68A0))(this, createIfMissing);
	}

};

}
