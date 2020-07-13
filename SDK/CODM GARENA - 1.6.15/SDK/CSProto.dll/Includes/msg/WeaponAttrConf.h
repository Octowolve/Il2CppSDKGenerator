#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WeaponAttrConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WeaponAttrConf"));
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
		return ((T (*)(WeaponAttrConf*))(Il2CppBase() + 0x51AAD58))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(WeaponAttrConf*, uintptr_t))(Il2CppBase() + 0x51AAD60))(this, value);
	}
	template <typename T = uintptr_t> T get_attr_conf() {
		return ((T (*)(WeaponAttrConf*))(Il2CppBase() + 0x51AAD68))(this);
	}
	template <typename T = void> T set_attr_conf(uintptr_t value) {
		return ((T (*)(WeaponAttrConf*, uintptr_t))(Il2CppBase() + 0x51AAD70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WeaponAttrConf*, bool))(Il2CppBase() + 0x51AAD78))(this, createIfMissing);
	}

};

}
