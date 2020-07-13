#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarLoadOP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarLoadOP"));
	}

	template <typename T = void*> static T& m_EquipMrg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadUIRoleForCharacterModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadUIRoleForCharacterModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadRoles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadEquips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceUIRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceUIRoleEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstanceRoleEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBodyAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuitAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> static T LoadUIRoleForCharacterModel(uint64_t inCharacterModelID, uintptr_t inCallback, Il2CppArray<uintptr_t>* inEquipAssetIDs) {
		return ((T (*)(void *, uint64_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x360162C))(0, inCharacterModelID, inCallback, inEquipAssetIDs);
	}
	template <typename T = void> static T LoadUIRoleForCharacterModel_1(uint64_t inCharacterModelID, uintptr_t inCallback, uintptr_t inCallBackData, uintptr_t inTaskPriority, Il2CppArray<uintptr_t>* inEquipAssetIDs) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3601764))(0, inCharacterModelID, inCallback, inCallBackData, inTaskPriority, inEquipAssetIDs);
	}
	template <typename T = void> static T OnLoadRoles(Il2CppArray<uintptr_t>* assetIDs, uintptr_t inObj) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3601E1C))(0, assetIDs, inObj);
	}
	template <typename T = void> static T OnLoadEquips(Il2CppArray<uintptr_t>* assetIDs, uintptr_t inObj) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3602340))(0, assetIDs, inObj);
	}
	template <typename T = uintptr_t> static T InstanceUIRole(Il2CppArray<uintptr_t>* inEquipAssetIDs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35FFC84))(0, inEquipAssetIDs);
	}
	template <typename T = uintptr_t> static T InstanceRole(Il2CppVector3 inLocation, Il2CppQuaternion inRotation, uintptr_t inParent, Il2CppArray<uintptr_t>* inEquipAssetIDs) {
		return ((T (*)(void *, Il2CppVector3, Il2CppQuaternion, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3602570))(0, inLocation, inRotation, inParent, inEquipAssetIDs);
	}
	template <typename T = void> static T InstanceUIRoleEquip(uintptr_t inAvatar, Il2CppArray<uintptr_t>* inEquipAssetIDs) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3600010))(0, inAvatar, inEquipAssetIDs);
	}
	template <typename T = void> static T InstanceRoleEquip(uintptr_t inAvatar, bool isReplace, Il2CppArray<uintptr_t>* inEquipAssetIDs) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3602CE8))(0, inAvatar, isReplace, inEquipAssetIDs);
	}
	template <typename T = uintptr_t> static T Create(int32_t inID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x334FA2C))(0, inID);
	}
	template <typename T = void> static T Despawn(uintptr_t inAvatar, uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35EF994))(0, inAvatar, inObj);
	}
	template <typename T = int32_t> static T RegisterAsset(uintptr_t inObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35EDF60))(0, inObj);
	}
	template <typename T = uintptr_t> static T UnregisterAsset(int32_t inID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35EEDF8))(0, inID);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetBagAssets(int32_t inBagID, bool isUI) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x36035C4))(0, inBagID, isUI);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetHeadAssets(int32_t inBagID, bool isUI) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x36038EC))(0, inBagID, isUI);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetBodyAssets(int32_t inBagID, bool isUI) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x3603C14))(0, inBagID, isUI);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetSuitAssets(int32_t inBagID, bool isUI) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x3603E7C))(0, inBagID, isUI);
	}

};

}
