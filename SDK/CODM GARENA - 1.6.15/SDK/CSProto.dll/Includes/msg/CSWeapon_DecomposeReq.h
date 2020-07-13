#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponDecomposeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_DecomposeReq"));
	}

	template <typename T = uintptr_t> T& _msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_msg() {
		return ((T (*)(CSWeaponDecomposeReq*))(Il2CppBase() + 0x51B6A78))(this);
	}
	template <typename T = void> T set_msg(uintptr_t value) {
		return ((T (*)(CSWeaponDecomposeReq*, uintptr_t))(Il2CppBase() + 0x51B6A80))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponDecomposeReq*, bool))(Il2CppBase() + 0x51B6A88))(this, createIfMissing);
	}

};

}
