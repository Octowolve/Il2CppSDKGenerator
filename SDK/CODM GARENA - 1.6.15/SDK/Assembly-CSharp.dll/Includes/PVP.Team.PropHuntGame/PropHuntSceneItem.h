#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntSceneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntSceneItem"));
	}

	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_ServerPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_InLoading() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_HaveInit() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& m_CurrentGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_Scale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& AssetId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_BaseItem() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_CreateRound() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRegist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_AssetId() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B11CC))(this);
	}
	template <typename T = void> T set_AssetId(int32_t value) {
		return ((T (*)(PropHuntSceneItem*, int32_t))(Il2CppBase() + 0x34B11D4))(this, value);
	}
	template <typename T = uintptr_t> T get_BaseItem() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B11DC))(this);
	}
	template <typename T = int32_t> T get_CreateRound() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B11E4))(this);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B11EC))(this);
	}
	template <typename T = void> T ClearLoad() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B1350))(this);
	}
	template <typename T = bool> T CanRegist() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B14A0))(this);
	}
	template <typename T = void> T OnAssetReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(PropHuntSceneItem*, int32_t, uintptr_t))(Il2CppBase() + 0x34B1540))(this, assetID, obj);
	}
	template <typename T = void> T Init(int32_t ItemAssetID, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 scale, int32_t itemID, int32_t createRound) {
		return ((T (*)(PropHuntSceneItem*, int32_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, int32_t, int32_t))(Il2CppBase() + 0x34B1AB0))(this, ItemAssetID, pos, rot, scale, itemID, createRound);
	}
	template <typename T = void> T ClearAsset() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B1C84))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PropHuntSceneItem*))(Il2CppBase() + 0x34B1F18))(this);
	}

};

}
