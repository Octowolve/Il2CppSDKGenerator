#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BREquipmentSkinManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BREquipmentSkinManager"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SHADER_Prop_DetailAlbedoMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*>*> T& m_WeaponDefaultMaterials() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkinForBREquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCamo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceMaterialArrayBeta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNameFlagFromMatName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCamos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRendererSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveCamo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMaterialLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMaterical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentMaterialArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4186434))(0);
	}
	template <typename T = void> T ChangeSkinForBREquipment(uint32_t weaponID, uint32_t skinID, uintptr_t RootMeshAsset) {
		return ((T (*)(BREquipmentSkinManager*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4186590))(this, weaponID, skinID, RootMeshAsset);
	}
	template <typename T = void> T RemoveChange(uintptr_t RootMeshAsset) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t))(Il2CppBase() + 0x4186A88))(this, RootMeshAsset);
	}
	template <typename T = void> T DoCamo(uint32_t skinID, uint64_t objID, int32_t CamoID, uintptr_t RootMeshAsset) {
		return ((T (*)(BREquipmentSkinManager*, uint32_t, uint64_t, int32_t, uintptr_t))(Il2CppBase() + 0x4186DC4))(this, skinID, objID, CamoID, RootMeshAsset);
	}
	template <typename T = Il2CppDictionary<uint64_t, Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*>*> T get_WeaponDefaultMaterials() {
		return ((T (*)(BREquipmentSkinManager*))(Il2CppBase() + 0x4187708))(this);
	}
	template <typename T = void> T DoChange(uint32_t skinID, uint64_t objID, uintptr_t RootMeshAsset, bool is1P, bool IsUIMesh, bool isCleanCamo) {
		return ((T (*)(BREquipmentSkinManager*, uint32_t, uint64_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x4187214))(this, skinID, objID, RootMeshAsset, is1P, IsUIMesh, isCleanCamo);
	}
	template <typename T = void> T ReplaceMaterialArrayBeta(uintptr_t curRenderer, Il2CppList<uintptr_t>* NewMats, bool isCleanCamo) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x41878C0))(this, curRenderer, NewMats, isCleanCamo);
	}
	template <typename T = Il2CppString*> T GetNameFlagFromMatName(Il2CppString* matName) {
		return ((T (*)(BREquipmentSkinManager*, Il2CppString*))(Il2CppBase() + 0x41895A4))(this, matName);
	}
	template <typename T = void> T ClearCamos(uintptr_t Mats) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t))(Il2CppBase() + 0x41893AC))(this, Mats);
	}
	template <typename T = Il2CppString*> T GetRendererSocketName(uintptr_t curRenderer, Il2CppString* rootName) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41877B8))(this, curRenderer, rootName);
	}
	template <typename T = void> T RemoveCamo(uintptr_t RootMeshAsset) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t))(Il2CppBase() + 0x41881A8))(this, RootMeshAsset);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SpawnMaterial(uint32_t skinID, uint64_t objID, Il2CppString* SocketName, bool IsUIMesh, bool is1P) {
		return ((T (*)(BREquipmentSkinManager*, uint32_t, uint64_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x4188C44))(this, skinID, objID, SocketName, IsUIMesh, is1P);
	}
	template <typename T = uintptr_t> T SpawnMaterial_1(int32_t CamoID, int32_t WeaponWeaAssetID, uintptr_t SrcMaterial) {
		return ((T (*)(BREquipmentSkinManager*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x41886EC))(this, CamoID, WeaponWeaAssetID, SrcMaterial);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponMaterialLobby(uint32_t skinID, uint64_t WeapID, Il2CppString* SocketName) {
		return ((T (*)(BREquipmentSkinManager*, uint32_t, uint64_t, Il2CppString*))(Il2CppBase() + 0x4189808))(this, skinID, WeapID, SocketName);
	}
	template <typename T = void> T RemoveMaterical(uintptr_t SrcMaterial) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t))(Il2CppBase() + 0x41896EC))(this, SrcMaterial);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurrentMaterialArray(uintptr_t curRenderer) {
		return ((T (*)(BREquipmentSkinManager*, uintptr_t))(Il2CppBase() + 0x4188F6C))(this, curRenderer);
	}

};

}
