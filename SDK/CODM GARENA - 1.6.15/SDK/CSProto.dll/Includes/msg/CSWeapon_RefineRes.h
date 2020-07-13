#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponRefineRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_RefineRes"));
	}

	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSWeaponRefineRes*))(Il2CppBase() + 0x51B6BBC))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSWeaponRefineRes*, uintptr_t))(Il2CppBase() + 0x51B6BC4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponRefineRes*, bool))(Il2CppBase() + 0x51B6BCC))(this, createIfMissing);
	}

};

}
