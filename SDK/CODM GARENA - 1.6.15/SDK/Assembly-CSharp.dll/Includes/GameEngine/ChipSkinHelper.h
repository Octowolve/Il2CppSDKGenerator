#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ChipSkinHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ChipSkinHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChangeForLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChange3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveChange3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkinAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> static T GetModelAssetID(int32_t assetID, uint32_t skinID) {
		return ((T (*)(void *, int32_t, uint32_t))(Il2CppBase() + 0x4196E34))(0, assetID, skinID);
	}
	template <typename T = void> static T DoChangeForLobby(uint32_t chipID, uint32_t skinID, uintptr_t RootMeshAsset) {
		return ((T (*)(void *, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4196F74))(0, chipID, skinID, RootMeshAsset);
	}
	template <typename T = void> static T DoChange(uint32_t skinID, uintptr_t RootMeshAsset, bool isUI, bool is1P) {
		return ((T (*)(void *, uint32_t, uintptr_t, bool, bool))(Il2CppBase() + 0x4197544))(0, skinID, RootMeshAsset, isUI, is1P);
	}
	template <typename T = uintptr_t> static T DoChange3P(uint32_t skinID, uintptr_t RootMeshAsset, uintptr_t tex) {
		return ((T (*)(void *, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41978E8))(0, skinID, RootMeshAsset, tex);
	}
	template <typename T = void> static T RemoveChange(uintptr_t RootMeshAsset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41972FC))(0, RootMeshAsset);
	}
	template <typename T = void> static T RemoveChange3P(uintptr_t RootMeshAsset, uintptr_t tex) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4197C90))(0, RootMeshAsset, tex);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetSkinAssetIDs(uint32_t skinID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4197EE4))(0, skinID);
	}

};

}
