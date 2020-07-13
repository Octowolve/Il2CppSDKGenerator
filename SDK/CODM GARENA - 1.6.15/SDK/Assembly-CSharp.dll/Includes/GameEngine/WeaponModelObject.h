#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponModelObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponModelObject"));
	}

	template <typename T = int32_t> T& parentActorid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& weaponModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& FrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowWeaponMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnWeaponMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init(int32_t weaponId, uintptr_t callback) {
		return ((T (*)(WeaponModelObject*, int32_t, uintptr_t))(Il2CppBase() + 0x240B66C))(this, weaponId, callback);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240B760))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(WeaponModelObject*, int32_t))(Il2CppBase() + 0x240BA7C))(this, assetID);
	}
	template <typename T = void> T DoShowWeaponMesh() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240BB58))(this);
	}
	template <typename T = int32_t> T GetWeaponAssetID(int32_t itemId) {
		return ((T (*)(WeaponModelObject*, int32_t))(Il2CppBase() + 0x240BC38))(this, itemId);
	}
	template <typename T = void> T ShowWeaponMesh() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240BDDC))(this);
	}
	template <typename T = void> T SpawnWeaponMesh() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240C2AC))(this);
	}
	template <typename T = void> T Despawn() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240CD94))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240E180))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponModelObject*))(Il2CppBase() + 0x240E260))(this);
	}

};

}
