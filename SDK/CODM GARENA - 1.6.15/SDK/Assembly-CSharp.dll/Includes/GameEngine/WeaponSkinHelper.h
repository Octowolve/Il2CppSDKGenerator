#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSkinHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSkinHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponSkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRWeaponSkinIDInFrontEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultWeaponSkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultThrowWeaponSkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRSkinWeaponIDBySkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecialSkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealSkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkinColorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkinSubColorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChangeForUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkinAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeVehicleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeVehicleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uint32_t> static T GetWeaponSkinID(uint32_t weaponID, uint32_t skinID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x33ADA60))(0, weaponID, skinID);
	}
	template <typename T = uint32_t> static T GetBRWeaponSkinIDInFrontEnd(uint32_t weaponID, uint32_t skinID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x33ADD58))(0, weaponID, skinID);
	}
	template <typename T = uint32_t> static T GetDefaultWeaponSkinID(uint32_t weaponID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x33ADB30))(0, weaponID);
	}
	template <typename T = uint32_t> static T GetDefaultThrowWeaponSkinID(uint32_t id) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x33ADC44))(0, id);
	}
	template <typename T = uint32_t> static T GetBRSkinWeaponIDBySkinID(uint32_t skinID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x33ADE8C))(0, skinID);
	}
	template <typename T = uint32_t> static T GetRealWeaponID(uint32_t weaponId, uint32_t skinID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x33ADFC4))(0, weaponId, skinID);
	}
	template <typename T = uint32_t> static T GetSpecialSkinID(uint32_t weaponID, uint32_t skinID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x33AE084))(0, weaponID, skinID);
	}
	template <typename T = uint32_t> static T GetRealSkinID(uint32_t weaponId, uint32_t skinID) {
		return ((T (*)(void *, uint32_t, uint32_t))(Il2CppBase() + 0x33AE380))(0, weaponId, skinID);
	}
	template <typename T = int32_t> static T GetSkinColorID(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33AE4A4))(0, config);
	}
	template <typename T = int32_t> static T GetSkinSubColorID(uintptr_t config) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33AE6A0))(0, config);
	}
	template <typename T = void> static T DoChangeForUI(uint32_t weaponID, uint32_t skinID, uintptr_t RootMeshAsset) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x33AE8B0))(0, weaponID, skinID, RootMeshAsset);
	}
	template <typename T = void> static T DoChange(int32_t weaponID, uint32_t skinID, uintptr_t RootMeshAsset, bool is1P) {
		return ((T (*)(void *, int32_t, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x33AF7E0))(0, weaponID, skinID, RootMeshAsset, is1P);
	}
	template <typename T = uintptr_t> static T DoChange3P(int32_t weaponID, uint32_t skinID, uintptr_t RootMeshAsset, uintptr_t tex, uintptr_t pawn) {
		return ((T (*)(void *, int32_t, uint32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x33B0148))(0, weaponID, skinID, RootMeshAsset, tex, pawn);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetSkinAssetIDs(int32_t weaponID, uint32_t skinID) {
		return ((T (*)(void *, int32_t, uint32_t))(Il2CppBase() + 0x33B0EF8))(0, weaponID, skinID);
	}
	template <typename T = void> static T AddAssetIDList(uintptr_t result, Il2CppArray<uintptr_t>* assetArray) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x33B1334))(0, result, assetArray);
	}
	template <typename T = void> static T AddAssetID(uintptr_t result, int32_t assetID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x33B1244))(0, result, assetID);
	}
	template <typename T = void> static T RemoveChange(uintptr_t RootMeshAsset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33AF3C8))(0, RootMeshAsset);
	}
	template <typename T = void> static T RemoveChange3P(uintptr_t RootMeshAsset, uintptr_t tex) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33B0B9C))(0, RootMeshAsset, tex);
	}
	template <typename T = bool> static T IsAssetReady(int32_t assetID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x33B141C))(0, assetID);
	}
	template <typename T = void> static T ChangeVehicleSkin(uintptr_t vehicleObj, uint32_t vehicleSkinId) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x33B1A3C))(0, vehicleObj, vehicleSkinId);
	}
	template <typename T = void> static T ChangeVehicleSkin_1(uintptr_t vehicleObj, uintptr_t vehConf) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33B1B54))(0, vehicleObj, vehConf);
	}

};

}
