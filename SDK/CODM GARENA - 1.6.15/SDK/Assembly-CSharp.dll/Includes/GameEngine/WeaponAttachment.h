#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponAttachment"));
	}

	template <typename T = float> static T& VisibleCullDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_WeaponLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& m_CurSkinID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_SlotID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_CrossHairID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CacheWeaponPromotionUnlockData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_INIPath() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_Category() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_SubCategory() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CurWeaponPartInfoList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponPartAttachmentList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_FireComponent() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_SecondaryFireComponent() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_ThirdFireComponent() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_FireComponentIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ImpactComponentList() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_bEnableSelfAniControl() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_PrimaryAnimatorController() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_WeaponSelfAniAnimatorController() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_WeaponSelfAniComponent() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_SourceAnimatorControllerDict() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_UseSlowWalk() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_PreLoadAttachmentAssetID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_UsingMeshAssetID() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& m_UsingMeshAssetID_L() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_MeshAssetID_L() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_MeshAssetID_1P() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& m_OldMeshAssetID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_OldActorID() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_CurMesh() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_Mesh_L() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_OldMeshAssetID_L() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& m_AttachmentSocketName() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& m_AttachmentSocketName_L() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_FireSoundLogicType() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_ShotFired() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsPlayingFire() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_IsStartedFire() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SkillStrengthen() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_WeaponFireSound() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_WeaponSoundEventHandler() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_PreLoadAttachmentAssetIDHand() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_StepSoundRangeOverride() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> static T& m_SingleFireSoundAdvanceTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_WeaponTransformAdjusted() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_WeaponData() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_MainTexture() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_WeaponControllerLoader() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& m_CurrentWeaponControllerId() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& m_OptimizedModel() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppList<void*>*> T& m_ComposePartAssets() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& m_WeaponAnimationEvent() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_curMeshAnimator() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UnuseModeAttachment() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mUnuseModeAttachmentList() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& m_IsInitWeapon() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& m_LoadCompleteAssetId() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_LoadCompleteAsset() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& m_TickActivateWeapon() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = int32_t> static T& FrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ApplyOCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_IsHidden() {
		return *(T*)((uintptr_t)this + 0x129);
	}
	template <typename T = float> T& m_SyncEquipWeaponTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& m_SyncEquipWeaponId() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& m_LastSynEquipWeaponTime() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& m_CheckStopEquipAnim() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& m_LastPlayEquipStopTime() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = float> T& m_LastChangeClipTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& m_LastChangeClipLength() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& m_IsProjectilePendingFire() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppQuaternion> T& syncWeaponQuaternion() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& m_BulletTrackInterval() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = int32_t> T& m_FireAnimationID() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = bool> T& m_IsAimedFire() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = float> static T& m_LastPlayFireEffectTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& PlayFireEffectInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& HQPlayFireEffectInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& ms_statFireCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& isSingleFire() {
		return *(T*)((uintptr_t)this + 0x165);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = int32_t> T& m_MuzzleFlashAssetID() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = int32_t> T& m_MuzzleFlashEffectGroupID() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MuzzleFlashSocketNames() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MuzzleFlashTransforms() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MuzzleFlashEffects() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> static T& COMBINE_TEXTURE_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_WeaponPartCombineGO() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppString*> T& m_LeftHandCenterName() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& m_LeftHandCenterTrans() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& ActiveCallBackFastThrow() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& m_ActiveCallBackThrowWeaponStartFunc() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsControllableWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUseSlowWalk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFootstepAuditionOverride() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsContainerUnuseAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWaitActivateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickTryActivateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorControler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivateWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentChangedForSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProloadEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetIDMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachmentSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPistol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsC4Weapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSniperWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPurifierWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsScythe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShotgun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFireStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOwnerFemalePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideSelfInMiniMapWhenFiring() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedGripHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRunningIK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponMoveScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncSentryGunCanFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTPController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponDataFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMeshAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMuzzleSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponCompnent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponControllerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeaponPartAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponPartAttachmentModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadWeaponPartAttachmentModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponPartLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLeftWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponAttachmentModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponFireSoundLogic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLoadAudioSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAudioSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoHideWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAndHideWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetMeshPartName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckWeaponFlyBySound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckFlyByVoxForPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStopEquipAnimtion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUnequipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHoldWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEquipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayEquipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayGetWeaponAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwithWeaponAttachByUnequip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwithWeaponAttachByEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwithWeaponAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachObjectToSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckEquipWeaponAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopChangeClipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChangeClipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeClipEndToIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustAimQuaternion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMuzzleEffectGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMuzzleFireAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayBulletSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBulletSmokeAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadWeaponEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStopFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThirdPersonStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1AC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayThirdPersonFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayMuzzleFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPlayBulletTraceEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHighQualitySettting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1BC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStopSimulatedFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddStatsFireCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1CC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedFireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayThirdPersonOneFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrackIsRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EffectIsRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1DC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBulletTraceEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBulletSmokeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMeleeFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFireStartPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1EC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearMuzzleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMuzzleFlash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMuzzleFlashLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1FC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncLoadMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AsyncLoadMuzzleFlashEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMuzzleSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSourceAnimatorRuntimeController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimatorRuntimeController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x21C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOwnerBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDespawnOldMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWeaponPartList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnOldMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x22C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWeaponImpactComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponActorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CombineWeaponMeshAndMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponControllerLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x23C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReloadingMagActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReloadingMag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeftHandCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitComposePartInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearComposePartInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartThrowWeaponByUseCallbackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseStartThrowWeaponAfterActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTankWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x26C);
	}

	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E976F8))(this);
	}
	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2E97700))(this, value);
	}
	template <typename T = int32_t> T get_WeaponID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97804))(this);
	}
	template <typename T = void> T set_WeaponID(int32_t value) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E9780C))(this, value);
	}
	template <typename T = int32_t> T get_WeaponLevel() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97910))(this);
	}
	template <typename T = void> T set_WeaponLevel(int32_t value) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E97918))(this, value);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97920))(this);
	}
	template <typename T = void> T set_ActorID(int32_t value) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E97928))(this, value);
	}
	template <typename T = void> T set_CurSkinID(uint32_t value) {
		return ((T (*)(WeaponAttachment*, uint32_t))(Il2CppBase() + 0x2E97930))(this, value);
	}
	template <typename T = uint32_t> T get_CurSkinID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97938))(this);
	}
	template <typename T = int32_t> T get_SlotID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97940))(this);
	}
	template <typename T = void> T set_SlotID(int32_t value) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E97948))(this, value);
	}
	template <typename T = uint32_t> T get_CrossHairID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97950))(this);
	}
	template <typename T = void> T set_CrossHairID(uint32_t value) {
		return ((T (*)(WeaponAttachment*, uint32_t))(Il2CppBase() + 0x2E97958))(this, value);
	}
	template <typename T = uintptr_t> T get_WeaponName() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97960))(this);
	}
	template <typename T = uintptr_t> T get_CacheWeaponPromotionUnlockData() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97968))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponINIPath() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97A6C))(this);
	}
	template <typename T = uintptr_t> T get_Category() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97B3C))(this);
	}
	template <typename T = uintptr_t> T get_SubCategory() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97B44))(this);
	}
	template <typename T = bool> T IsControllableWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97B4C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CurWeaponPartInfoList() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97C34))(this);
	}
	template <typename T = void> T set_CurWeaponPartInfoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(WeaponAttachment*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2E97C3C))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentFireComponent() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97C44))(this);
	}
	template <typename T = uintptr_t> T get_CurrentImpactComponent() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97C6C))(this);
	}
	template <typename T = bool> T GetUseSlowWalk() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97CC0))(this);
	}
	template <typename T = float> T get_SprintMovementScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97D98))(this);
	}
	template <typename T = float> T get_MovementScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97DB8))(this);
	}
	template <typename T = float> T get_ProneSpeedScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97DD8))(this);
	}
	template <typename T = float> T get_CrouchingSpeedScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97DF8))(this);
	}
	template <typename T = float> T get_CrouchingSprintSpeedScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97E18))(this);
	}
	template <typename T = float> T get_DyingMovementScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97E38))(this);
	}
	template <typename T = float> T get_AimingMovementScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97E58))(this);
	}
	template <typename T = float> T get_AimingCrouchMovementScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E97F98))(this);
	}
	template <typename T = int32_t> T get_AttachmentAssetID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E980D8))(this);
	}
	template <typename T = bool> T get_UsePlayTricky() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E980E0))(this);
	}
	template <typename T = uintptr_t> T get_Mesh() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98100))(this);
	}
	template <typename T = uintptr_t> T get_Mesh_L() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98108))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_MeshRenderers() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98110))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRenderers(Il2CppList<uintptr_t>* outRenderers) {
		return ((T (*)(WeaponAttachment*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2E98118))(this, outRenderers);
	}
	template <typename T = uintptr_t> T get_CurMesh() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E982E0))(this);
	}
	template <typename T = bool> T get_OwnerIsVisible() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E982E8))(this);
	}
	template <typename T = bool> T get_IsSingleShot() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E983D0))(this);
	}
	template <typename T = bool> T get_ForcePlaySingleFireAnim() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98458))(this);
	}
	template <typename T = int32_t> T get_ShotFired() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E984E0))(this);
	}
	template <typename T = bool> T get_IsPlayingFire() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E984E8))(this);
	}
	template <typename T = uintptr_t> T get_WeaponSoundPlayer() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E984F0))(this);
	}
	template <typename T = uintptr_t> T get_WeaponHand() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E984F8))(this);
	}
	template <typename T = void> T PlayWeaponSound(uintptr_t pType, int32_t iID) {
		return ((T (*)(WeaponAttachment*, uintptr_t, int32_t))(Il2CppBase() + 0x2E98500))(this, pType, iID);
	}
	template <typename T = void> T PlayFireSound() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98614))(this);
	}
	template <typename T = void> T StopFireSound() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9873C))(this);
	}
	template <typename T = float> T GetFootstepAuditionOverride() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98878))(this);
	}
	template <typename T = uintptr_t> T get_OptimizedModel() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98948))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_ComposePartAssets() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98950))(this);
	}
	template <typename T = bool> T get_IsLoading() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98958))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_UnuseModeAttachment() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E989A8))(this);
	}
	template <typename T = bool> T IsContainerUnuseAttachment(uintptr_t type) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2E98B2C))(this, type);
	}
	template <typename T = bool> T IsSubWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98CA8))(this);
	}
	template <typename T = bool> T IsWaitActivateWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98D88))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E98E60))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponAttachment*, float))(Il2CppBase() + 0x2E99100))(this, deltaTime);
	}
	template <typename T = void> T TickTryActivateWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E99424))(this);
	}
	template <typename T = void> T TickStep() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E99288))(this);
	}
	template <typename T = uintptr_t> T GetWeaponRoot() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E99638))(this);
	}
	template <typename T = void> T ChangeWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E99784))(this);
	}
	template <typename T = void> T EquipAttachment(int32_t actorID, int32_t attachmentID) {
		return ((T (*)(WeaponAttachment*, int32_t, int32_t))(Il2CppBase() + 0x2E9A24C))(this, actorID, attachmentID);
	}
	template <typename T = void> T UnEquipAttachment(int32_t actorID, int32_t attachmentID) {
		return ((T (*)(WeaponAttachment*, int32_t, int32_t))(Il2CppBase() + 0x2E9AC38))(this, actorID, attachmentID);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E9AFDC))(this, assetID);
	}
	template <typename T = void> T SetAnimatorControler(int32_t assetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E9B160))(this, assetID);
	}
	template <typename T = void> T ActivateWeapon(int32_t assetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E9BDC4))(this, assetID);
	}
	template <typename T = void> T OnAttachmentChangedForSpectating() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9D860))(this);
	}
	template <typename T = bool> T CheckPlayFire() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9D9D4))(this);
	}
	template <typename T = void> T ProloadEffects() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9D38C))(this);
	}
	template <typename T = bool> T IsAssetIDMatch(int32_t meshAssetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E9C9C0))(this, meshAssetID);
	}
	template <typename T = Il2CppString*> T GetAttachmentSocketName(int32_t meshAssetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2E9CAF0))(this, meshAssetID);
	}
	template <typename T = bool> T IsThrowWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9DB6C))(this);
	}
	template <typename T = bool> T IsPistol() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9DC48))(this);
	}
	template <typename T = bool> T IsController() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9DD24))(this);
	}
	template <typename T = bool> T IsMeleeWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9DE00))(this);
	}
	template <typename T = bool> T IsC4Weapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9DEDC))(this);
	}
	template <typename T = bool> T IsSniperWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9DFF4))(this);
	}
	template <typename T = bool> T IsPurifierWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E0D0))(this);
	}
	template <typename T = bool> T IsScythe() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E1B0))(this);
	}
	template <typename T = bool> T IsShotgun() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E290))(this);
	}
	template <typename T = bool> T IsSpecialWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E378))(this);
	}
	template <typename T = bool> T NeedFireStopSprint() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E454))(this);
	}
	template <typename T = bool> T ShouldStopIK() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E524))(this);
	}
	template <typename T = bool> T IsOwnerFemalePawn() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E5F4))(this);
	}
	template <typename T = bool> T IsHideSelfInMiniMapWhenFiring() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E80C))(this);
	}
	template <typename T = bool> T HadSilencerWeaponPart() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9E9B4))(this);
	}
	template <typename T = bool> T HasWeaponPart(uintptr_t weaponPartName) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2E9EB64))(this, weaponPartName);
	}
	template <typename T = bool> T NeedGripHold() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9ED14))(this);
	}
	template <typename T = bool> T ShouldRunningIK() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9EEF8))(this);
	}
	template <typename T = bool> T get_IsShow() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9EFFC))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponAttachment*, bool))(Il2CppBase() + 0x2E9F010))(this, isHidden);
	}
	template <typename T = float> T GetWeaponMoveScale() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9F4FC))(this);
	}
	template <typename T = void> T SyncSentryGunCanFire(bool canFire) {
		return ((T (*)(WeaponAttachment*, bool))(Il2CppBase() + 0x2E9F804))(this, canFire);
	}
	template <typename T = uintptr_t> T GetTPController() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9F8D4))(this);
	}
	template <typename T = void> T ResetWeaponAnimatorController() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9FB44))(this);
	}
	template <typename T = void> T ResetAnimatorController(uintptr_t controller) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2E9FF58))(this, controller);
	}
	template <typename T = bool> T get_IdleStateEnable() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA00D0))(this);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA00F0))(this);
	}
	template <typename T = void> T InitWeaponDataFromConfig() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA03D8))(this);
	}
	template <typename T = void> T InitMeshAssetID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA04DC))(this);
	}
	template <typename T = void> T InitMuzzleSocket() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA09E8))(this);
	}
	template <typename T = void> T InitWeaponCompnent() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA0B98))(this);
	}
	template <typename T = void> T InitWeaponControllerId() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA10CC))(this);
	}
	template <typename T = void> T ChangeWeaponPartAttachment() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA1CD8))(this);
	}
	template <typename T = void> T LoadWeaponPartAttachmentModel() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9CE70))(this);
	}
	template <typename T = void> T LoadWeaponPartAttachmentModel_1(uintptr_t info) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2E9A7F0))(this, info);
	}
	template <typename T = void> T CheckWeaponPartLoadOver() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA1FC4))(this);
	}
	template <typename T = bool> T HasLeftWeaponAttachment() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA3944))(this);
	}
	template <typename T = void> T LoadWeaponAttachmentModel() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA3A30))(this);
	}
	template <typename T = void> T CreateWeaponFireSoundLogic() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA1844))(this);
	}
	template <typename T = void> T OnSpectatingStart() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA3ED0))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA4088))(this);
	}
	template <typename T = void> T ReLoadAudioSound() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA3FA4))(this);
	}
	template <typename T = void> T LoadAudioSound() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9D4D8))(this);
	}
	template <typename T = void> T DoHideWeaponPart(int32_t weaponPartCategory) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2EA415C))(this, weaponPartCategory);
	}
	template <typename T = void> T DoShowWeaponPart(int32_t weaponPartCategory) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2EA4D9C))(this, weaponPartCategory);
	}
	template <typename T = void> T ShowAndHideWeaponPart(Il2CppList<int32_t>* ShowAssetIDList, Il2CppList<int32_t>* HideAssetIDList) {
		return ((T (*)(WeaponAttachment*, Il2CppList<int32_t>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x2EA46E4))(this, ShowAssetIDList, HideAssetIDList);
	}
	template <typename T = Il2CppString*> T GetAssetMeshPartName(Il2CppString* assetName) {
		return ((T (*)(WeaponAttachment*, Il2CppString*))(Il2CppBase() + 0x2EA5248))(this, assetName);
	}
	template <typename T = Il2CppVector3> T _CheckWeaponFlyBySound(uintptr_t pTargetPawn, Il2CppVector3 startPos, Il2CppVector3 vecFireRayNormalized) {
		return ((T (*)(WeaponAttachment*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EA538C))(this, pTargetPawn, startPos, vecFireRayNormalized);
	}
	template <typename T = bool> T _CheckFlyByVoxForPawn(uintptr_t pPawn, Il2CppVector3 startPos, Il2CppVector3 vecFireRayNormalized) {
		return ((T (*)(WeaponAttachment*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EA560C))(this, pPawn, startPos, vecFireRayNormalized);
	}
	template <typename T = void> T CheckStopEquipAnimtion() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA595C))(this);
	}
	template <typename T = float> T get_UnequipTime() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA5BE8))(this);
	}
	template <typename T = void> T SyncUnequipWeapon(uintptr_t data) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EA5D5C))(this, data);
	}
	template <typename T = void> T SyncEquipWeapon(uintptr_t data) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EA64C0))(this, data);
	}
	template <typename T = void> T SyncHoldWeapon(uintptr_t data) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EA6C10))(this, data);
	}
	template <typename T = void> T PlayEquipAnim() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA7024))(this);
	}
	template <typename T = void> T PlayEquipAnim_1(float equipTime, bool realEquip) {
		return ((T (*)(WeaponAttachment*, float, bool))(Il2CppBase() + 0x2EA6770))(this, equipTime, realEquip);
	}
	template <typename T = void> T PlayGetWeaponAnimation() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA7100))(this);
	}
	template <typename T = void> T SwithWeaponAttachByUnequip() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA727C))(this);
	}
	template <typename T = void> T SwithWeaponAttachByEquip() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA7650))(this);
	}
	template <typename T = void> T SwithWeaponAttach(bool equip) {
		return ((T (*)(WeaponAttachment*, bool))(Il2CppBase() + 0x2EA7354))(this, equip);
	}
	template <typename T = Il2CppString*> T AttachObjectToSocket() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA7728))(this);
	}
	template <typename T = void> T OnCheckEquipWeaponAnim() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9D0A8))(this);
	}
	template <typename T = void> T TryStopChangeClipAnim() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA7968))(this);
	}
	template <typename T = void> T SetChangeClipTime(float animLength) {
		return ((T (*)(WeaponAttachment*, float))(Il2CppBase() + 0x2EA7CC8))(this, animLength);
	}
	template <typename T = bool> T IsInChangeClip() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA7BC8))(this);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(WeaponAttachment*, uintptr_t, float, float))(Il2CppBase() + 0x2EA7DC0))(this, animName, animLength, Param1);
	}
	template <typename T = void> T ChangeClipEndToIdle() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA8F5C))(this);
	}
	template <typename T = Il2CppQuaternion> T get_SyncWeaponQuaternion() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA91A0))(this);
	}
	template <typename T = void> T set_SyncWeaponQuaternion(Il2CppQuaternion value) {
		return ((T (*)(WeaponAttachment*, Il2CppQuaternion))(Il2CppBase() + 0x2EA91B0))(this, value);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustAimQuaternion(Il2CppVector3 inFirePos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3))(Il2CppBase() + 0x2EA91C8))(this, inFirePos);
	}
	template <typename T = uintptr_t> T GetMuzzleEffectGroup() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA97DC))(this);
	}
	template <typename T = void> T UpdateMuzzleFireAssetID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA173C))(this);
	}
	template <typename T = bool> T CanPlayBulletSmokeEffect() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA993C))(this);
	}
	template <typename T = int32_t> T GetBulletSmokeAssetID() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA9A98))(this);
	}
	template <typename T = void> T PreloadWeaponEffects() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E99CB0))(this);
	}
	template <typename T = void> T StopFireEffect() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA9BA8))(this);
	}
	template <typename T = void> T ThirdPersonStopFire() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA9D98))(this);
	}
	template <typename T = void> T ThirdPersonStartFire(int32_t inFireCompIndex, bool aimedFire, bool isSingle, int32_t aommoCount) {
		return ((T (*)(WeaponAttachment*, int32_t, bool, bool, int32_t))(Il2CppBase() + 0x2EAA25C))(this, inFireCompIndex, aimedFire, isSingle, aommoCount);
	}
	template <typename T = void> T SetFireMode(unsigned char fireMode) {
		return ((T (*)(WeaponAttachment*, unsigned char))(Il2CppBase() + 0x2EAAEB8))(this, fireMode);
	}
	template <typename T = void> T PlayFireAnimation(bool isPlaySingle) {
		return ((T (*)(WeaponAttachment*, bool))(Il2CppBase() + 0x2EAAF90))(this, isPlaySingle);
	}
	template <typename T = void> T PlayThirdPersonFireEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EAB49C))(this, startPos, endPos);
	}
	template <typename T = bool> T CanPlayMuzzleFireEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EABF54))(this, startPos, endPos);
	}
	template <typename T = bool> T CanPlayBulletTraceEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EACFD0))(this, startPos, endPos);
	}
	template <typename T = bool> static T IsHighQualitySettting() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EACECC))(0);
	}
	template <typename T = bool> static T IsLowQualitySetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EA9510))(0);
	}
	template <typename T = void> T TryStopSimulatedFireAmmunition() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EADD68))(this);
	}
	template <typename T = int32_t> static T get_StatFireCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EADE3C))(0);
	}
	template <typename T = void> static T ResetStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EADEEC))(0);
	}
	template <typename T = void> static T AddStatsFireCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x2EADFF0))(0);
	}
	template <typename T = void> T SimulatedFireAmmunition() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EAE0F8))(this);
	}
	template <typename T = void> T PlayThirdPersonOneFireEffect(Il2CppVector3 startPos, Il2CppVector3 endPos, uintptr_t muzzleFlashEffect, uintptr_t muzzleFlashTransform) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EAC23C))(this, startPos, endPos, muzzleFlashEffect, muzzleFlashTransform);
	}
	template <typename T = bool> T TrackIsRelevant(Il2CppVector3 start, Il2CppVector3 end, float visibleDistance, Il2CppVector3 cameraPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3, float, Il2CppVector3))(Il2CppBase() + 0x2EAD898))(this, start, end, visibleDistance, cameraPos);
	}
	template <typename T = bool> T EffectIsRelevant(Il2CppVector3 start, float VisibleCullDistance, Il2CppVector3 cameraPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, float, Il2CppVector3))(Il2CppBase() + 0x2EAD564))(this, start, VisibleCullDistance, cameraPos);
	}
	template <typename T = bool> T PlayBulletTraceEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EAD1D8))(this, startPos, endPos);
	}
	template <typename T = void> T PlayBulletSmokeEffect(Il2CppVector3 startPos, Il2CppVector3 endPos) {
		return ((T (*)(WeaponAttachment*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2EAF31C))(this, startPos, endPos);
	}
	template <typename T = void> T PlayMeleeFireEffect() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EAEB8C))(this);
	}
	template <typename T = Il2CppVector3> T GetFireStartPos() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EAF62C))(this);
	}
	template <typename T = void> T ClearMuzzleEffect() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA14A8))(this);
	}
	template <typename T = void> T LoadMuzzleFlash(uintptr_t callback) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EAF810))(this, callback);
	}
	template <typename T = uintptr_t> T GetOwnerGameObject() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB0128))(this);
	}
	template <typename T = void> T OnMuzzleFlashLoaded(uintptr_t effect, uintptr_t socket, uintptr_t callback) {
		return ((T (*)(WeaponAttachment*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EB0214))(this, effect, socket, callback);
	}
	template <typename T = void> T SyncLoadMuzzleFlashEffect(uintptr_t callback, uintptr_t socket) {
		return ((T (*)(WeaponAttachment*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EAFF1C))(this, callback, socket);
	}
	template <typename T = void> T AsyncLoadMuzzleFlashEffect(uintptr_t callback, uintptr_t socket) {
		return ((T (*)(WeaponAttachment*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2EAFD08))(this, callback, socket);
	}
	template <typename T = void> T ResetMuzzleSocketName(Il2CppString* socketName, int32_t MuzzleFlashAssetID, bool shouldChangeMuzzleFlashEffect) {
		return ((T (*)(WeaponAttachment*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x2EB05C4))(this, socketName, MuzzleFlashAssetID, shouldChangeMuzzleFlashEffect);
	}
	template <typename T = void> T RecordSourceAnimatorRuntimeController(uintptr_t animator) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2E9B984))(this, animator);
	}
	template <typename T = void> T ResetAnimatorRuntimeController(uintptr_t mesh) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EB07F4))(this, mesh);
	}
	template <typename T = void> T DestroyComponent() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB0A50))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB0B3C))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E99AA8))(this);
	}
	template <typename T = void> T NotifyOwnerBeginDestroy() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB0D80))(this);
	}
	template <typename T = void> T PreDespawnOldMesh(int32_t newAssetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2EB0E64))(this, newAssetID);
	}
	template <typename T = void> T ClearWeaponPartList() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA1E40))(this);
	}
	template <typename T = void> T DespawnOldMesh(int32_t newAssetID) {
		return ((T (*)(WeaponAttachment*, int32_t))(Il2CppBase() + 0x2EB0F34))(this, newAssetID);
	}
	template <typename T = void> T DestroyWeaponImpactComponents() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA19DC))(this);
	}
	template <typename T = int32_t> T GetWeaponActorId() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB1560))(this);
	}
	template <typename T = void> T CombineWeaponMeshAndMaterial() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EA243C))(this);
	}
	template <typename T = void> T OnWeaponControllerLoaded(uintptr_t animatorController) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EB1630))(this, animatorController);
	}
	template <typename T = void> T SetReloadingMagActive(bool value) {
		return ((T (*)(WeaponAttachment*, bool))(Il2CppBase() + 0x2EB1700))(this, value);
	}
	template <typename T = uintptr_t> T GetReloadingMag() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB1BD4))(this);
	}
	template <typename T = void> T UpdateLeftHandCenter() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9CD58))(this);
	}
	template <typename T = uintptr_t> T GetLeftHandCenter() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB1F78))(this);
	}
	template <typename T = void> T InitComposePartInfo(int32_t actorID, int32_t modelID) {
		return ((T (*)(WeaponAttachment*, int32_t, int32_t))(Il2CppBase() + 0x2E9CC40))(this, actorID, modelID);
	}
	template <typename T = void> T ClearComposePartInfo() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB148C))(this);
	}
	template <typename T = void> T StartThrowWeaponByUseCallbackFunc(uintptr_t callBackfunc) {
		return ((T (*)(WeaponAttachment*, uintptr_t))(Il2CppBase() + 0x2EB2048))(this, callBackfunc);
	}
	template <typename T = void> T UseStartThrowWeaponAfterActive() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2E9D778))(this);
	}
	template <typename T = void> T CancelThrowWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB2120))(this);
	}
	template <typename T = void> T AddAnimationClipEvent_3P() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB2378))(this);
	}
	template <typename T = bool> T IsTankWeapon() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB2794))(this);
	}
	template <typename T = bool> T IsCanUse1PView() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB2874))(this);
	}
	template <typename T = void> T ActivateWeaponm__0() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB29EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAttachment*, float))(Il2CppBase() + 0x2EB2A00))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyComponent() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB2A08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(WeaponAttachment*))(Il2CppBase() + 0x2EB2A10))(this);
	}

};

}
