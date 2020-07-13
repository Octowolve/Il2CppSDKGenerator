#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountStaminaChgNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_StaminaChgNtf"));
	}

	template <typename T = int32_t> T& _new_stamina() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_new_stamina() {
		return ((T (*)(CSAccountStaminaChgNtf*))(Il2CppBase() + 0x516F794))(this);
	}
	template <typename T = void> T set_new_stamina(int32_t value) {
		return ((T (*)(CSAccountStaminaChgNtf*, int32_t))(Il2CppBase() + 0x516F79C))(this, value);
	}
	template <typename T = int32_t> T get_reason() {
		return ((T (*)(CSAccountStaminaChgNtf*))(Il2CppBase() + 0x516F7A4))(this);
	}
	template <typename T = void> T set_reason(int32_t value) {
		return ((T (*)(CSAccountStaminaChgNtf*, int32_t))(Il2CppBase() + 0x516F7AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountStaminaChgNtf*, bool))(Il2CppBase() + 0x516F7B4))(this, createIfMissing);
	}

};

}
