#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetPveWeaponTalentPointsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetPveWeaponTalentPointsReq"));
	}

	template <typename T = Il2CppList<int64_t>*> T& _weapon_guid_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<int64_t>*> T get_weapon_guid_list() {
		return ((T (*)(CSInventoryGetPveWeaponTalentPointsReq*))(Il2CppBase() + 0x5137F68))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetPveWeaponTalentPointsReq*, bool))(Il2CppBase() + 0x5137F70))(this, createIfMissing);
	}

};

}
