#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarItemStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarItem_Stage"));
	}

	template <typename T = uintptr_t> T& ModelRoot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ModelObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeaponObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& modelAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& hatAsset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bagAsset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& clothAsset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Weaponid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& WeaponSkinid() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& WeaponAssetid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_WeaponData() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachObjToParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadCompletes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadWeaponComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRoleAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x35FF308))(this);
	}
	template <typename T = void> T LoadAvatar() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x35FF430))(this);
	}
	template <typename T = void> T AttachObjToParent(uintptr_t subObj, uintptr_t parentObj) {
		return ((T (*)(AvatarItemStage*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35FF770))(this, subObj, parentObj);
	}
	template <typename T = void> T OnLoadCompletes(Il2CppArray<uintptr_t>* assetID, uintptr_t callBackData) {
		return ((T (*)(AvatarItemStage*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FF974))(this, assetID, callBackData);
	}
	template <typename T = int32_t> T GetWeaponAssetid() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x36009A4))(this);
	}
	template <typename T = void> T LoadWeapon() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x3600C44))(this);
	}
	template <typename T = void> T OnLoadWeaponComplete(int32_t AssetID) {
		return ((T (*)(AvatarItemStage*, int32_t))(Il2CppBase() + 0x3600D40))(this, AssetID);
	}
	template <typename T = void> T OnLoadOver() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x360085C))(this);
	}
	template <typename T = void> T ProcessRoleAnimator() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x36011FC))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AvatarItemStage*))(Il2CppBase() + 0x36013A0))(this);
	}

};

}
