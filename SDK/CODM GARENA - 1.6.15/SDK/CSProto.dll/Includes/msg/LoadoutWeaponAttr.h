#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LoadoutWeaponAttr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LoadoutWeaponAttr"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _skills() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attachments() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _skin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _decorations() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_skills() {
		return ((T (*)(LoadoutWeaponAttr*))(Il2CppBase() + 0x4EA3154))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_attachments() {
		return ((T (*)(LoadoutWeaponAttr*))(Il2CppBase() + 0x4EA315C))(this);
	}
	template <typename T = uintptr_t> T get_skin() {
		return ((T (*)(LoadoutWeaponAttr*))(Il2CppBase() + 0x4EA3164))(this);
	}
	template <typename T = void> T set_skin(uintptr_t value) {
		return ((T (*)(LoadoutWeaponAttr*, uintptr_t))(Il2CppBase() + 0x4EA316C))(this, value);
	}
	template <typename T = uintptr_t> T get_decorations() {
		return ((T (*)(LoadoutWeaponAttr*))(Il2CppBase() + 0x4EA3174))(this);
	}
	template <typename T = void> T set_decorations(uintptr_t value) {
		return ((T (*)(LoadoutWeaponAttr*, uintptr_t))(Il2CppBase() + 0x4EA317C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LoadoutWeaponAttr*, bool))(Il2CppBase() + 0x4EA3184))(this, createIfMissing);
	}

};

}
