#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAvatarLODUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAvatarLODUtil"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD3Params_High() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD3Params_Mid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD3Params_Low() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD2Params() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& StandardMainWeaponSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& StandardParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& NoShadowLODForWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& NoShadowLODForWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& DisableLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& MaxLODCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& suffixLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LODNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppList<int32_t>*> static T& lodLevelList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& allRenderList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& lodRenderList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLODParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMainMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRenderSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyLODGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessLODs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddMeshAsset2WeaponLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLodLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveMeshAsset2WeaponLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverWeaponLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetLODParams(int32_t lodCount, uintptr_t mesh) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x2EB515C))(0, lodCount, mesh);
	}
	template <typename T = void> static T InitMainMesh(uintptr_t mainWeaponAsset, bool is3PWeapon) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x2EB53F4))(0, mainWeaponAsset, is3PWeapon);
	}
	template <typename T = void> static T ChangeRenderSetting(uintptr_t rd, int32_t lod, bool isWeapon) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x2EB6194))(0, rd, lod, isWeapon);
	}
	template <typename T = void> static T DestroyLODGroup(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EB62FC))(0, asset);
	}
	template <typename T = void> static T ProcessLODs(Il2CppList<uintptr_t>* renderList, Il2CppList<int32_t>* levelList, bool isComposePart, int32_t minLOD, uintptr_t partType) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<int32_t>*, bool, int32_t, uintptr_t))(Il2CppBase() + 0x2EB6488))(0, renderList, levelList, isComposePart, minLOD, partType);
	}
	template <typename T = void> static T AddMeshAsset2WeaponLOD(uintptr_t mainWeaponAsset, uintptr_t addMeshAsset, bool is3PWeapon, bool isComposePart, uintptr_t partType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x2EB6A68))(0, mainWeaponAsset, addMeshAsset, is3PWeapon, isComposePart, partType);
	}
	template <typename T = int32_t> static T FindLodLevel(Il2CppString* name, int32_t minLod) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x2EB5FF0))(0, name, minLod);
	}
	template <typename T = void> static T RemoveMeshAsset2WeaponLOD(uintptr_t mainWeaponAsset, uintptr_t addMeshAsset) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EB72FC))(0, mainWeaponAsset, addMeshAsset);
	}
	template <typename T = void> static T RecoverWeaponLOD(uintptr_t mainWeaponAsset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2EB792C))(0, mainWeaponAsset);
	}

};

}
