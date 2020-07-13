#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPkgHead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPkgHead"));
	}

	template <typename T = uint32_t> T& _cmd() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _plat_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _client_sequence_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _mod_route_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_cmd() {
		return ((T (*)(CSPkgHead*))(Il2CppBase() + 0x51F11D8))(this);
	}
	template <typename T = void> T set_cmd(uint32_t value) {
		return ((T (*)(CSPkgHead*, uint32_t))(Il2CppBase() + 0x51F11E0))(this, value);
	}
	template <typename T = int32_t> T get_plat_id() {
		return ((T (*)(CSPkgHead*))(Il2CppBase() + 0x51F11E8))(this);
	}
	template <typename T = void> T set_plat_id(int32_t value) {
		return ((T (*)(CSPkgHead*, int32_t))(Il2CppBase() + 0x51F11F0))(this, value);
	}
	template <typename T = int32_t> T get_client_sequence_id() {
		return ((T (*)(CSPkgHead*))(Il2CppBase() + 0x51F11F8))(this);
	}
	template <typename T = void> T set_client_sequence_id(int32_t value) {
		return ((T (*)(CSPkgHead*, int32_t))(Il2CppBase() + 0x51F1200))(this, value);
	}
	template <typename T = uint64_t> T get_mod_route_id() {
		return ((T (*)(CSPkgHead*))(Il2CppBase() + 0x51F1208))(this);
	}
	template <typename T = void> T set_mod_route_id(uint64_t value) {
		return ((T (*)(CSPkgHead*, uint64_t))(Il2CppBase() + 0x51F1210))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPkgHead*))(Il2CppBase() + 0x51F1220))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPkgHead*, int32_t))(Il2CppBase() + 0x51F1228))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPkgHead*, bool))(Il2CppBase() + 0x51F1230))(this, createIfMissing);
	}

};

}
