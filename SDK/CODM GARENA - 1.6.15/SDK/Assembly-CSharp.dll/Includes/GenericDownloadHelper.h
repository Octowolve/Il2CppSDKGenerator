#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenericDownloadHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericDownloadHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttachedByWaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttachedByLethalID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttachedByBREquipmentSkinItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttachedByBRVehicleSkinItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAttachedRoleSkinItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeModelToNeedDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentMaterialArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T FindAttachedByWaponID(uint32_t weaponID, uintptr_t assetIDList) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x4456A18))(0, weaponID, assetIDList);
	}
	template <typename T = void> static T FindAttachedByLethalID(uint32_t lethalID, uintptr_t assetIDList) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x445894C))(0, lethalID, assetIDList);
	}
	template <typename T = void> static T FindAttachedByBREquipmentSkinItemID(uint32_t brequipmentSkinItemID, uintptr_t assetIDList) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x445950C))(0, brequipmentSkinItemID, assetIDList);
	}
	template <typename T = void> static T FindAttachedByBRVehicleSkinItemID(uint32_t vehicleID, uintptr_t assetIDList) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x4459A4C))(0, vehicleID, assetIDList);
	}
	template <typename T = void> static T FindAttachedRoleSkinItemID(uint32_t roleSkin, uintptr_t assetIDList) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x4459C08))(0, roleSkin, assetIDList);
	}
	template <typename T = void> static T ChangeModelToNeedDownload(uintptr_t trans) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4459F04))(0, trans);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetCurrentMaterialArray(uintptr_t curRenderer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x445A810))(0, curRenderer);
	}

};

}
