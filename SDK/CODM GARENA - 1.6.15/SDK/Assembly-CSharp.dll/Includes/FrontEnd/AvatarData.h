#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarData"));
	}

	template <typename T = uintptr_t> static T& CharacterData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFemale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCharacterTypeByAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarDataAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarWeaponAssetIDFromPackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarWeaponAssetIDFromItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> static T IsFemale(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32EB0AC))(0, data);
	}
	template <typename T = uintptr_t> static T GetCharacterTypeByAssetID(uintptr_t assetID) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x32EB188))(0, assetID);
	}
	template <typename T = uintptr_t> static T GetAvatarDataAssetID(uintptr_t cd, uintptr_t cp) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x32EB41C))(0, cd, cp);
	}
	template <typename T = void> static T GetAvatarWeaponAssetIDFromPackage(uintptr_t rightWeaponAssetID, uintptr_t leftWeaponAssetID) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x32EB66C))(0, rightWeaponAssetID, leftWeaponAssetID);
	}
	template <typename T = void> static T GetAvatarWeaponAssetIDFromItemID(uint64_t itemID, uintptr_t rightWeaponAssetID, uintptr_t leftWeaponAssetID) {
		return ((T (*)(void *, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x32EB73C))(0, itemID, rightWeaponAssetID, leftWeaponAssetID);
	}

};

}
