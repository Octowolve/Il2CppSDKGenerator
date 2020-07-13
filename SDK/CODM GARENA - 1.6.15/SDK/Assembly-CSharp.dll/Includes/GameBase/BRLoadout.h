#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BRLoadout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BRLoadout"));
	}

	template <typename T = uintptr_t> T& Hero() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Melee() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ProfessionChip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WingSuit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Parachute() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& WeaponCamoPairs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& ProfessionChipSkinPairs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& VehicleSkinPairs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& WeaponIdForLobbyShow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToBREquippedSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBREquipmentSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultVehicleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProfessionChipSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetLoadout(uintptr_t info) {
		return ((T (*)(BRLoadout*, uintptr_t))(Il2CppBase() + 0x374192C))(this, info);
	}
	template <typename T = uintptr_t> T ChangeToBREquippedSkin(uintptr_t brEquipmentType, uintptr_t equippedItem) {
		return ((T (*)(BRLoadout*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3742598))(this, brEquipmentType, equippedItem);
	}
	template <typename T = uintptr_t> T GetBREquipmentSkin(uintptr_t brEquipmentType) {
		return ((T (*)(BRLoadout*, uintptr_t))(Il2CppBase() + 0x3742880))(this, brEquipmentType);
	}
	template <typename T = uintptr_t> T GetRealWeaponSkin(int32_t weaponId) {
		return ((T (*)(BRLoadout*, int32_t))(Il2CppBase() + 0x3742944))(this, weaponId);
	}
	template <typename T = uint32_t> T GetDefaultWeaponSkin(int32_t weaponId) {
		return ((T (*)(BRLoadout*, int32_t))(Il2CppBase() + 0x3742AB4))(this, weaponId);
	}
	template <typename T = uint32_t> T GetDefaultVehicleSkin(int32_t vehicleId) {
		return ((T (*)(BRLoadout*, int32_t))(Il2CppBase() + 0x3742C78))(this, vehicleId);
	}
	template <typename T = void> T SetDefaultWeaponSkin(int32_t weaponId, uintptr_t skinItem) {
		return ((T (*)(BRLoadout*, int32_t, uintptr_t))(Il2CppBase() + 0x3742D84))(this, weaponId, skinItem);
	}
	template <typename T = uint32_t> T GetProfessionChipSkin(int32_t weaponId) {
		return ((T (*)(BRLoadout*, int32_t))(Il2CppBase() + 0x3742F20))(this, weaponId);
	}

};

}
