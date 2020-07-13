#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponSkinManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponSkinManager"));
	}

	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<int32_t>*>*> T& m_WeaponRendererDict() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& m_RendererDefaultMaterials() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Holigram_Material_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> static T& SUFFIX_SOCKETNAME_COLONE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SUFFIX_SOCKETNAME_COLONE_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SUFFIX_SOCKETNAME_POINT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SUFFIX_SOCKETNAME_POINT_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SUFFIX_SOCKETNAME_WEAPON_PART() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMatCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMaterialLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMaterialInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChipMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrEquipmentMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentMaterialArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceMaterialArrayBeta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceBrEquipmentMaterialArrayBeta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNameFlagFromMatName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCamos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRendererSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointRendererSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChangeForBatchRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Process() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessForBatchRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessForReloadingMag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNewMaterialMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = Il2CppDictionary<uint64_t, Il2CppList<int32_t>*>*> T get_WeaponRendererDict() {
		return ((T (*)(WeaponSkinManager*))(Il2CppBase() + 0x33B2950))(this);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T get_RendererDefaultMaterials() {
		return ((T (*)(WeaponSkinManager*))(Il2CppBase() + 0x33B2A00))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(WeaponSkinManager*))(Il2CppBase() + 0x33B2AB0))(this);
	}
	template <typename T = void> T ClearMatCache() {
		return ((T (*)(WeaponSkinManager*))(Il2CppBase() + 0x33B2B54))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponMaterialLobby(uint32_t skinID, uint64_t WeapID, Il2CppString* SocketName) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, Il2CppString*))(Il2CppBase() + 0x33B2C5C))(this, skinID, WeapID, SocketName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetWeaponMaterialInGame(uint32_t skinID, uint64_t WeapID, Il2CppString* SocketName, bool is1P) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, Il2CppString*, bool))(Il2CppBase() + 0x33B3300))(this, skinID, WeapID, SocketName, is1P);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetChipMaterial(uint32_t skinID) {
		return ((T (*)(WeaponSkinManager*, uint32_t))(Il2CppBase() + 0x33B3AC0))(this, skinID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBrEquipmentMaterial(uint32_t skinID) {
		return ((T (*)(WeaponSkinManager*, uint32_t))(Il2CppBase() + 0x33B3D5C))(this, skinID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T SpawnMaterial(uint32_t skinID, uint64_t objID, Il2CppString* SocketName, bool IsUIMesh, bool is1P, uintptr_t changeType, Il2CppDictionary<int32_t, uintptr_t>* InstantiateMaterials, uintptr_t loadSuccess) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, Il2CppString*, bool, bool, uintptr_t, Il2CppDictionary<int32_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x33B404C))(this, skinID, objID, SocketName, IsUIMesh, is1P, changeType, InstantiateMaterials, loadSuccess);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurrentMaterialArray(uintptr_t curRenderer) {
		return ((T (*)(WeaponSkinManager*, uintptr_t))(Il2CppBase() + 0x33B455C))(this, curRenderer);
	}
	template <typename T = void> T ReplaceMaterialArrayBeta(uintptr_t curRenderer, Il2CppList<uintptr_t>* NewMats, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x33B4974))(this, curRenderer, NewMats, isCleanCamo);
	}
	template <typename T = void> T ReplaceBrEquipmentMaterialArrayBeta(uintptr_t curRenderer, Il2CppList<uintptr_t>* NewMats, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uintptr_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x33B51C0))(this, curRenderer, NewMats, isCleanCamo);
	}
	template <typename T = Il2CppString*> T GetNameFlagFromMatName(Il2CppString* matName) {
		return ((T (*)(WeaponSkinManager*, Il2CppString*))(Il2CppBase() + 0x33B50A8))(this, matName);
	}
	template <typename T = void> T ClearCamos(uintptr_t Mats) {
		return ((T (*)(WeaponSkinManager*, uintptr_t))(Il2CppBase() + 0x33B4EE0))(this, Mats);
	}
	template <typename T = Il2CppString*> T GetRendererSocketName(uintptr_t curRenderer, Il2CppString* rootName) {
		return ((T (*)(WeaponSkinManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x33B570C))(this, curRenderer, rootName);
	}
	template <typename T = Il2CppString*> T GetPointRendererSocketName(uintptr_t tf) {
		return ((T (*)(WeaponSkinManager*, uintptr_t))(Il2CppBase() + 0x33B5D74))(this, tf);
	}
	template <typename T = void> T DoChange3P(uint32_t skinID, uint64_t objID, uintptr_t RootMeshAsset, uintptr_t changeType, bool IsUIMesh, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x33B0DEC))(this, skinID, objID, RootMeshAsset, changeType, IsUIMesh, isCleanCamo);
	}
	template <typename T = void> T RemoveChange3P(uintptr_t RootMeshAsset) {
		return ((T (*)(WeaponSkinManager*, uintptr_t))(Il2CppBase() + 0x33B15D8))(this, RootMeshAsset);
	}
	template <typename T = void> T DoChange(uint32_t skinID, uint64_t objID, uintptr_t RootMeshAsset, bool is1P, uintptr_t changeType, bool IsUIMesh, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x33AF6DC))(this, skinID, objID, RootMeshAsset, is1P, changeType, IsUIMesh, isCleanCamo);
	}
	template <typename T = void> T RemoveChange(uintptr_t RootMeshAsset) {
		return ((T (*)(WeaponSkinManager*, uintptr_t))(Il2CppBase() + 0x33B1528))(this, RootMeshAsset);
	}
	template <typename T = void> T RemoveChangeForBatchRenderer(uintptr_t optimizedModel) {
		return ((T (*)(WeaponSkinManager*, uintptr_t))(Il2CppBase() + 0x33B6858))(this, optimizedModel);
	}
	template <typename T = void> T Process(uint32_t skinID, uint64_t objID, uintptr_t RootMeshAsset, bool is1P, uintptr_t changeType, bool IsUIMesh, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x33B60B4))(this, skinID, objID, RootMeshAsset, is1P, changeType, IsUIMesh, isCleanCamo);
	}
	template <typename T = void> T ProcessForBatchRenderer(uint32_t skinID, uint64_t objID, uintptr_t RootMeshAsset, uintptr_t optimizedModel, bool is1P, uintptr_t changeType, bool IsUIMesh, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, uintptr_t, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x33B69E8))(this, skinID, objID, RootMeshAsset, optimizedModel, is1P, changeType, IsUIMesh, isCleanCamo);
	}
	template <typename T = void> T ProcessForReloadingMag(uint32_t skinID, uint64_t objID, uintptr_t RootMeshAsset, bool is1P, uintptr_t changeType, bool IsUIMesh, bool isCleanCamo) {
		return ((T (*)(WeaponSkinManager*, uint32_t, uint64_t, uintptr_t, bool, uintptr_t, bool, bool))(Il2CppBase() + 0x33B725C))(this, skinID, objID, RootMeshAsset, is1P, changeType, IsUIMesh, isCleanCamo);
	}
	template <typename T = bool> T CheckNewMaterialMatch(Il2CppString* oldMatName, int32_t newMatAssetId) {
		return ((T (*)(WeaponSkinManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x33B708C))(this, oldMatName, newMatAssetId);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(WeaponSkinManager*))(Il2CppBase() + 0x33B7824))(this);
	}

};

}
