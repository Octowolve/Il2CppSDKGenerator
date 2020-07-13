#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RoleAppearance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RoleAppearance"));
	}

	template <typename T = uintptr_t> T& _hat() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _bag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _clothes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _suit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_hat() {
		return ((T (*)(RoleAppearance*))(Il2CppBase() + 0x5071D68))(this);
	}
	template <typename T = void> T set_hat(uintptr_t value) {
		return ((T (*)(RoleAppearance*, uintptr_t))(Il2CppBase() + 0x5071D70))(this, value);
	}
	template <typename T = uintptr_t> T get_bag() {
		return ((T (*)(RoleAppearance*))(Il2CppBase() + 0x5071D78))(this);
	}
	template <typename T = void> T set_bag(uintptr_t value) {
		return ((T (*)(RoleAppearance*, uintptr_t))(Il2CppBase() + 0x5071D80))(this, value);
	}
	template <typename T = uintptr_t> T get_clothes() {
		return ((T (*)(RoleAppearance*))(Il2CppBase() + 0x5071D88))(this);
	}
	template <typename T = void> T set_clothes(uintptr_t value) {
		return ((T (*)(RoleAppearance*, uintptr_t))(Il2CppBase() + 0x5071D90))(this, value);
	}
	template <typename T = uintptr_t> T get_suit() {
		return ((T (*)(RoleAppearance*))(Il2CppBase() + 0x5071D98))(this);
	}
	template <typename T = void> T set_suit(uintptr_t value) {
		return ((T (*)(RoleAppearance*, uintptr_t))(Il2CppBase() + 0x5071DA0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RoleAppearance*, bool))(Il2CppBase() + 0x5071DA8))(this, createIfMissing);
	}

};

}
