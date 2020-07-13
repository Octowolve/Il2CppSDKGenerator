#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class OneOffWallConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "OneOffWallConf"));
	}

	template <typename T = uint32_t> T& _host_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _attr_conf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_host_id() {
		return ((T (*)(OneOffWallConf*))(Il2CppBase() + 0x4EA5A58))(this);
	}
	template <typename T = void> T set_host_id(uint32_t value) {
		return ((T (*)(OneOffWallConf*, uint32_t))(Il2CppBase() + 0x4EA5A60))(this, value);
	}
	template <typename T = uintptr_t> T get_data() {
		return ((T (*)(OneOffWallConf*))(Il2CppBase() + 0x4EA5A68))(this);
	}
	template <typename T = void> T set_data(uintptr_t value) {
		return ((T (*)(OneOffWallConf*, uintptr_t))(Il2CppBase() + 0x4EA5A70))(this, value);
	}
	template <typename T = uintptr_t> T get_attr_conf() {
		return ((T (*)(OneOffWallConf*))(Il2CppBase() + 0x4EA5A78))(this);
	}
	template <typename T = void> T set_attr_conf(uintptr_t value) {
		return ((T (*)(OneOffWallConf*, uintptr_t))(Il2CppBase() + 0x4EA5A80))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(OneOffWallConf*, bool))(Il2CppBase() + 0x4EA5A88))(this, createIfMissing);
	}

};

}
