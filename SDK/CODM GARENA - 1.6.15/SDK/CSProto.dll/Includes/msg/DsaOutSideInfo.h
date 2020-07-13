#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DsaOutSideInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DsaOutSideInfo"));
	}

	template <typename T = uint32_t> T& _dsa_ip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _dsa_domain() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _dsa_score() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _dsa_port() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_dsa_ip() {
		return ((T (*)(DsaOutSideInfo*))(Il2CppBase() + 0x52267F8))(this);
	}
	template <typename T = void> T set_dsa_ip(uint32_t value) {
		return ((T (*)(DsaOutSideInfo*, uint32_t))(Il2CppBase() + 0x5226800))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_dsa_domain() {
		return ((T (*)(DsaOutSideInfo*))(Il2CppBase() + 0x5226808))(this);
	}
	template <typename T = void> T set_dsa_domain(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DsaOutSideInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5226810))(this, value);
	}
	template <typename T = uint32_t> T get_dsa_score() {
		return ((T (*)(DsaOutSideInfo*))(Il2CppBase() + 0x5226818))(this);
	}
	template <typename T = void> T set_dsa_score(uint32_t value) {
		return ((T (*)(DsaOutSideInfo*, uint32_t))(Il2CppBase() + 0x5226820))(this, value);
	}
	template <typename T = uint32_t> T get_dsa_port() {
		return ((T (*)(DsaOutSideInfo*))(Il2CppBase() + 0x5226828))(this);
	}
	template <typename T = void> T set_dsa_port(uint32_t value) {
		return ((T (*)(DsaOutSideInfo*, uint32_t))(Il2CppBase() + 0x5226830))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DsaOutSideInfo*, bool))(Il2CppBase() + 0x5226838))(this, createIfMissing);
	}

};

}
