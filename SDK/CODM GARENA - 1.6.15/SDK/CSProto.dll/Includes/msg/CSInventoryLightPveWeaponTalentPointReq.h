#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryLightPveWeaponTalentPointReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryLightPveWeaponTalentPointReq"));
	}

	template <typename T = int64_t> T& _weapon_guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _weapon_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _talent_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int64_t> T get_weapon_guid() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*))(Il2CppBase() + 0x5138264))(this);
	}
	template <typename T = void> T set_weapon_guid(int64_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*, int64_t))(Il2CppBase() + 0x513826C))(this, value);
	}
	template <typename T = uint32_t> T get_weapon_id() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*))(Il2CppBase() + 0x513827C))(this);
	}
	template <typename T = void> T set_weapon_id(uint32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*, uint32_t))(Il2CppBase() + 0x5138284))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*))(Il2CppBase() + 0x513828C))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*, int32_t))(Il2CppBase() + 0x5138294))(this, value);
	}
	template <typename T = int32_t> T get_talent_id() {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*))(Il2CppBase() + 0x513829C))(this);
	}
	template <typename T = void> T set_talent_id(int32_t value) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*, int32_t))(Il2CppBase() + 0x51382A4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryLightPveWeaponTalentPointReq*, bool))(Il2CppBase() + 0x51382AC))(this, createIfMissing);
	}

};

}
