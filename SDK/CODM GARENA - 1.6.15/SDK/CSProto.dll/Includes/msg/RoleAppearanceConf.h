#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RoleAppearanceConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RoleAppearanceConf"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _attr_conf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(RoleAppearanceConf*))(Il2CppBase() + 0x5071DC4))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(RoleAppearanceConf*, uintptr_t))(Il2CppBase() + 0x5071DCC))(this, value);
	}
	template <typename T = uintptr_t> T get_attr_conf() {
		return ((T (*)(RoleAppearanceConf*))(Il2CppBase() + 0x5071DD4))(this);
	}
	template <typename T = void> T set_attr_conf(uintptr_t value) {
		return ((T (*)(RoleAppearanceConf*, uintptr_t))(Il2CppBase() + 0x5071DDC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RoleAppearanceConf*, bool))(Il2CppBase() + 0x5071DE4))(this, createIfMissing);
	}

};

}
