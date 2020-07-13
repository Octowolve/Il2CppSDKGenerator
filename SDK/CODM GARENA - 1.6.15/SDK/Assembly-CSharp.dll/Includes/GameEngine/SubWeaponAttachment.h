#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SubWeaponAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SubWeaponAttachment"));
	}

	template <typename T = int32_t> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_SocketName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_MeshManaged() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_PullingInitSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_PullingAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_PullingMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_bIsActive() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& m_CurSkinID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_MainTexture() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FireComponent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_SecondaryFireComponent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ThirdFireComponent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_FireComponentIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ImpactComponentList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_ShotFired() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& m_INIPath() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWeaponImpactComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachObjectToSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponControllerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x34051FC))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(SubWeaponAttachment*, bool))(Il2CppBase() + 0x3405204))(this, value);
	}
	template <typename T = float> T get_PullingInitSpeed() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340520C))(this);
	}
	template <typename T = float> T get_PullingAccelSpeed() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3405214))(this);
	}
	template <typename T = float> T get_PullingMaxSpeed() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340521C))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3405224))(this);
	}
	template <typename T = void> T set_CurSkinID(uint32_t value) {
		return ((T (*)(SubWeaponAttachment*, uint32_t))(Il2CppBase() + 0x340522C))(this, value);
	}
	template <typename T = uint32_t> T get_CurSkinID() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3405234))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MeshRenderers() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340523C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentFireComponent() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3405244))(this);
	}
	template <typename T = uintptr_t> T get_CurrentImpactComponent() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340526C))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t owner) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34052C0))(0, owner);
	}
	template <typename T = void> T Init(uintptr_t owner) {
		return ((T (*)(SubWeaponAttachment*, uintptr_t))(Il2CppBase() + 0x3405384))(this, owner);
	}
	template <typename T = void> T Activate(int32_t weaponID, int32_t actorID, uint32_t skinID) {
		return ((T (*)(SubWeaponAttachment*, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x34054C4))(this, weaponID, actorID, skinID);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x34055B8))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(SubWeaponAttachment*, int32_t))(Il2CppBase() + 0x3406330))(this, assetID);
	}
	template <typename T = void> T DespawnMesh() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340601C))(this);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3405F1C))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406794))(this);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340568C))(this);
	}
	template <typename T = void> T DestroyWeaponImpactComponents() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x34061E8))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(SubWeaponAttachment*, bool))(Il2CppBase() + 0x3406914))(this, isHidden);
	}
	template <typename T = int32_t> T get_ShotFired() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406B44))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponINIPath() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406844))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSoundPlayer() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406B4C))(this);
	}
	template <typename T = void> T PlayFireSound() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406B54))(this);
	}
	template <typename T = uintptr_t> T GetWeaponRoot() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406F4C))(this);
	}
	template <typename T = int32_t> T GetWeaponActorId() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x3406FEC))(this);
	}
	template <typename T = Il2CppString*> T AttachObjectToSocket() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x340708C))(this);
	}
	template <typename T = void> T OnWeaponControllerLoaded(uintptr_t animatorController) {
		return ((T (*)(SubWeaponAttachment*, uintptr_t))(Il2CppBase() + 0x340712C))(this, animatorController);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex, bool aimedFire, bool isSingle, int32_t aommoCount) {
		return ((T (*)(SubWeaponAttachment*, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x34071CC))(this, inFireCompIndex, aimedFire, isSingle, aommoCount);
	}
	template <typename T = void> T ThirdPersonStopFire() {
		return ((T (*)(SubWeaponAttachment*))(Il2CppBase() + 0x34072C8))(this);
	}

};

}
