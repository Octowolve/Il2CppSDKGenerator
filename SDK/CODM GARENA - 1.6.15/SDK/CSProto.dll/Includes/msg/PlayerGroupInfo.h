#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerGroupInfo"));
	}

	template <typename T = uintptr_t> T& _attack_group() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _defend_group() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_attack_group() {
		return ((T (*)(PlayerGroupInfo*))(Il2CppBase() + 0x4EA8918))(this);
	}
	template <typename T = void> T set_attack_group(uintptr_t value) {
		return ((T (*)(PlayerGroupInfo*, uintptr_t))(Il2CppBase() + 0x4EA8920))(this, value);
	}
	template <typename T = uintptr_t> T get_defend_group() {
		return ((T (*)(PlayerGroupInfo*))(Il2CppBase() + 0x4EA8928))(this);
	}
	template <typename T = void> T set_defend_group(uintptr_t value) {
		return ((T (*)(PlayerGroupInfo*, uintptr_t))(Il2CppBase() + 0x4EA8930))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerGroupInfo*, bool))(Il2CppBase() + 0x4EA8938))(this, createIfMissing);
	}

};

}
