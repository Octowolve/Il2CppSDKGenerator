#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWeaponUseCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWeapon_UseCardReq"));
	}

	template <typename T = uintptr_t> T& _Card() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Card() {
		return ((T (*)(CSWeaponUseCardReq*))(Il2CppBase() + 0x51B6EC0))(this);
	}
	template <typename T = void> T set_Card(uintptr_t value) {
		return ((T (*)(CSWeaponUseCardReq*, uintptr_t))(Il2CppBase() + 0x51B6EC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWeaponUseCardReq*, bool))(Il2CppBase() + 0x51B6ED0))(this, createIfMissing);
	}

};

}
