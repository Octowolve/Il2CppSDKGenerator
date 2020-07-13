#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LoadoutAttrInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LoadoutAttrInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _role_skills() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _main_weapon_attr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _vice_weapon_attr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_role_skills() {
		return ((T (*)(LoadoutAttrInfo*))(Il2CppBase() + 0x4EA2DC4))(this);
	}
	template <typename T = uintptr_t> T get_main_weapon_attr() {
		return ((T (*)(LoadoutAttrInfo*))(Il2CppBase() + 0x4EA2DCC))(this);
	}
	template <typename T = void> T set_main_weapon_attr(uintptr_t value) {
		return ((T (*)(LoadoutAttrInfo*, uintptr_t))(Il2CppBase() + 0x4EA2DD4))(this, value);
	}
	template <typename T = uintptr_t> T get_vice_weapon_attr() {
		return ((T (*)(LoadoutAttrInfo*))(Il2CppBase() + 0x4EA2DDC))(this);
	}
	template <typename T = void> T set_vice_weapon_attr(uintptr_t value) {
		return ((T (*)(LoadoutAttrInfo*, uintptr_t))(Il2CppBase() + 0x4EA2DE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LoadoutAttrInfo*, bool))(Il2CppBase() + 0x4EA2DEC))(this, createIfMissing);
	}

};

}
