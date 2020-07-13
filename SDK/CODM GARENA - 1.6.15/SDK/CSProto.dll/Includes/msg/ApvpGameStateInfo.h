#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ApvpGameStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ApvpGameStateInfo"));
	}

	template <typename T = uintptr_t> T& _attack_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _defend_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_attack_info() {
		return ((T (*)(ApvpGameStateInfo*))(Il2CppBase() + 0x510C638))(this);
	}
	template <typename T = void> T set_attack_info(uintptr_t value) {
		return ((T (*)(ApvpGameStateInfo*, uintptr_t))(Il2CppBase() + 0x510C640))(this, value);
	}
	template <typename T = uintptr_t> T get_defend_info() {
		return ((T (*)(ApvpGameStateInfo*))(Il2CppBase() + 0x510C648))(this);
	}
	template <typename T = void> T set_defend_info(uintptr_t value) {
		return ((T (*)(ApvpGameStateInfo*, uintptr_t))(Il2CppBase() + 0x510C650))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ApvpGameStateInfo*, bool))(Il2CppBase() + 0x510C658))(this, createIfMissing);
	}

};

}
