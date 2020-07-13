#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartAssetLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPartAssetLoader"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponPartManagedAssetList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LoadAssetComposerList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponPartAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComposerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComposedWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPartTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponPartManagedAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsLoading() {
		return ((T (*)(WeaponPartAssetLoader*))(Il2CppBase() + 0x241F368))(this);
	}
	template <typename T = void> T Init(uintptr_t callback) {
		return ((T (*)(WeaponPartAssetLoader*, uintptr_t))(Il2CppBase() + 0x240B9CC))(this, callback);
	}
	template <typename T = void> T LoadWeaponPartAsset(int32_t weaponAssetID, uintptr_t TaskPriority, bool callbakAfterCompose, int32_t actorID, int32_t itemID, uint32_t skinID, bool is3PWeapon, bool sync, bool cacheComposePart) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, uintptr_t, bool, int32_t, int32_t, uint32_t, bool, bool, bool))(Il2CppBase() + 0x240BFE4))(this, weaponAssetID, TaskPriority, callbakAfterCompose, actorID, itemID, skinID, is3PWeapon, sync, cacheComposePart);
	}
	template <typename T = void> T OnAssetLoadComplete(int32_t assetID, uintptr_t param) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, uintptr_t))(Il2CppBase() + 0x241F410))(this, assetID, param);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponPartAssetLoader*))(Il2CppBase() + 0x240D8CC))(this);
	}
	template <typename T = void> T Despawn(int32_t weaponActorID, int32_t weaponAssetID, uintptr_t mainMesh, bool keepPending) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x240CEE0))(this, weaponActorID, weaponAssetID, mainMesh, keepPending);
	}
	template <typename T = uintptr_t> T ComposerWeaponPart(int32_t actorID, int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, float lifeTime, uintptr_t parent, bool bUseMangedAsset, bool is3PWeapon, bool cacheComposePart) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, int32_t, Il2CppVector3, Il2CppQuaternion, float, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x240CADC))(this, actorID, assetID, pos, rot, lifeTime, parent, bUseMangedAsset, is3PWeapon, cacheComposePart);
	}
	template <typename T = uintptr_t> T GetComposedWeaponPart(int32_t actorID, int32_t assetID, Il2CppVector3 pos, Il2CppQuaternion rot, uintptr_t parent) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, int32_t, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x240C86C))(this, actorID, assetID, pos, rot, parent);
	}
	template <typename T = bool> T TickStep() {
		return ((T (*)(WeaponPartAssetLoader*))(Il2CppBase() + 0x240E3EC))(this);
	}
	template <typename T = uintptr_t> T FindPartTransform(int32_t weaponActorID, int32_t weaponAssetID, int32_t partAssetID, Il2CppString* attachPoint) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x241F630))(this, weaponActorID, weaponAssetID, partAssetID, attachPoint);
	}
	template <typename T = uintptr_t> T GetWeaponPartManagedAssetInfo(int32_t weaponActorID, int32_t weaponAssetID) {
		return ((T (*)(WeaponPartAssetLoader*, int32_t, int32_t))(Il2CppBase() + 0x241FC88))(this, weaponActorID, weaponAssetID);
	}

};

}
