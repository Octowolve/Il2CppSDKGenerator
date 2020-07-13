#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetStrengthPveWeaponReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetStrengthPveWeaponReq"));
	}

	template <typename T = int64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int64_t> T get_weapon_guid() {
		return ((T (*)(CSInventoryGetStrengthPveWeaponReq*))(Il2CppBase() + 0x5138064))(this);
	}
	template <typename T = void> T set_weapon_guid(int64_t value) {
		return ((T (*)(CSInventoryGetStrengthPveWeaponReq*, int64_t))(Il2CppBase() + 0x513806C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetStrengthPveWeaponReq*, bool))(Il2CppBase() + 0x513807C))(this, createIfMissing);
	}

};

}
