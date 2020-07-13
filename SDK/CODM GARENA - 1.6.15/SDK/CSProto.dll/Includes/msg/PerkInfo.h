#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PerkInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PerkInfo"));
	}

	template <typename T = uint32_t> T& _perk_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_locked() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_perk_id() {
		return ((T (*)(PerkInfo*))(Il2CppBase() + 0x4EA6094))(this);
	}
	template <typename T = void> T set_perk_id(uint32_t value) {
		return ((T (*)(PerkInfo*, uint32_t))(Il2CppBase() + 0x4EA609C))(this, value);
	}
	template <typename T = bool> T get_is_locked() {
		return ((T (*)(PerkInfo*))(Il2CppBase() + 0x4EA60A4))(this);
	}
	template <typename T = void> T set_is_locked(bool value) {
		return ((T (*)(PerkInfo*, bool))(Il2CppBase() + 0x4EA60AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PerkInfo*, bool))(Il2CppBase() + 0x4EA60B4))(this, createIfMissing);
	}

};

}
