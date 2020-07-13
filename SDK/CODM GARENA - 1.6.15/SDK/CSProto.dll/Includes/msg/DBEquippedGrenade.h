#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBEquippedGrenade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBEquippedGrenade"));
	}

	template <typename T = uintptr_t> T& _LethalGrenadeData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _TacticalGrenadeData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_LethalGrenadeData() {
		return ((T (*)(DBEquippedGrenade*))(Il2CppBase() + 0x51B7B64))(this);
	}
	template <typename T = void> T set_LethalGrenadeData(uintptr_t value) {
		return ((T (*)(DBEquippedGrenade*, uintptr_t))(Il2CppBase() + 0x51B7B6C))(this, value);
	}
	template <typename T = uintptr_t> T get_TacticalGrenadeData() {
		return ((T (*)(DBEquippedGrenade*))(Il2CppBase() + 0x51B7B74))(this);
	}
	template <typename T = void> T set_TacticalGrenadeData(uintptr_t value) {
		return ((T (*)(DBEquippedGrenade*, uintptr_t))(Il2CppBase() + 0x51B7B7C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBEquippedGrenade*, bool))(Il2CppBase() + 0x51B7B84))(this, createIfMissing);
	}

};

}
