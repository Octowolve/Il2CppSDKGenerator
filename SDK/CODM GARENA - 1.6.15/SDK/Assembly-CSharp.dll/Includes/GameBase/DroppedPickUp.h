#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DroppedPickUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DroppedPickUp"));
	}

	template <typename T = int32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_AssetID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& m_SkinID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Attachments() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uint32_t>*> T& m_weaponSkillID() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_NeedPickupConfirm() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_CamoMainTexture() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& ROTATE_DEGREE_PER_SECOND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DroppedPickUpModel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_EffectGO() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_SndCfg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_AudioPlayer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_PosOffset() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_EulerOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_PickUpType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& m_LifeSpan() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> static T& m_DefaultPosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& IsRunning() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& rotateMesh() {
		return *(T*)((uintptr_t)this + 0xB5);
	}
	template <typename T = bool> T& m_HasCustomRotation() {
		return *(T*)((uintptr_t)this + 0xB6);
	}
	template <typename T = Il2CppQuaternion> T& m_CustomRatation() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& firstShowMesh() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& shouldChangeEffect() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = bool> T& effectActive() {
		return *(T*)((uintptr_t)this + 0xCA);
	}
	template <typename T = bool> T& m_HasDespawned() {
		return *(T*)((uintptr_t)this + 0xCB);
	}
	template <typename T = float> T& mDuration() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& mDurationCountTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> static T& FLASHING_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& ForceSpawnNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& m_InRotateRange() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> static T& RotateRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& CheckRangeFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& kNearlyDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kSpeedBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kSpeedEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kSpeedUpTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_FollowLP() {
		return *(T*)((uintptr_t)this + 0xD5);
	}
	template <typename T = float> T& m_FollowTime() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& mGuide() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPickUpMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPickupEffectSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAttachmentSkillData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FLASHING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFlashingInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffectGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPickUpMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOtherAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAttachmentComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAttachMentConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOtherAttachments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowPickupMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMeshVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBRPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectAsyncSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickupConfirmed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCustomRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PowerUpFollow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}

	template <typename T = uintptr_t> T get_PickUpType() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACBC))(this);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACC4))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40E5184))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Attachments() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACCC))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_WeaponSkillID() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACD4))(this);
	}
	template <typename T = bool> T get_NeedPickupConfirm() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACDC))(this);
	}
	template <typename T = bool> T get_IsRunning() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACE4))(this);
	}
	template <typename T = void> T set_IsRunning(bool value) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EACEC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EACF4))(this);
	}
	template <typename T = void> T Initialize(uintptr_t inParameterData, bool needPickupConfirm) {
		return ((T (*)(DroppedPickUp*, uintptr_t, bool))(Il2CppBase() + 0x40EAE68))(this, inParameterData, needPickupConfirm);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(DroppedPickUp*, uintptr_t))(Il2CppBase() + 0x40EB194))(this, other);
	}
	template <typename T = void> T SpawnPickUpMesh() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EB278))(this);
	}
	template <typename T = void> T Despawn(uint32_t pickedByPlayerId) {
		return ((T (*)(DroppedPickUp*, uint32_t))(Il2CppBase() + 0x40E518C))(this, pickedByPlayerId);
	}
	template <typename T = void> T ClearAttachment(bool despawn) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EBB10))(this, despawn);
	}
	template <typename T = void> T Despawn_1(bool isPicked) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EC0D4))(this, isPicked);
	}
	template <typename T = void> T OnPickupEffectSpawned(uintptr_t inst) {
		return ((T (*)(DroppedPickUp*, uintptr_t))(Il2CppBase() + 0x40EC6BC))(this, inst);
	}
	template <typename T = void> T Initialize_1(Il2CppVector3 inPosition, int32_t actorID, int32_t itemID, Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* weaponSkillID, bool inNeedConfirm, int32_t duration, uint32_t skinID, uintptr_t type) {
		return ((T (*)(DroppedPickUp*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x40ECA60))(this, inPosition, actorID, itemID, attachmentID, weaponSkillID, inNeedConfirm, duration, skinID, type);
	}
	template <typename T = void> T InitAttachmentSkillData(Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* skillID) {
		return ((T (*)(DroppedPickUp*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40ECE9C))(this, attachmentID, skillID);
	}
	template <typename T = uintptr_t> T FLASHING(float duration) {
		return ((T (*)(DroppedPickUp*, float))(Il2CppBase() + 0x40EDAE0))(this, duration);
	}
	template <typename T = float> T GetFlashingInterval(float disappearanceTime) {
		return ((T (*)(DroppedPickUp*, float))(Il2CppBase() + 0x40EDC14))(this, disappearanceTime);
	}
	template <typename T = void> T ChangeShow(bool wantShow) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EDD5C))(this, wantShow);
	}
	template <typename T = void> T ChangeEffectGO(bool wantShow) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EDF40))(this, wantShow);
	}
	template <typename T = void> T ShowMesh(bool value) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EE0D0))(this, value);
	}
	template <typename T = void> T ShowPickUpMesh() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40ED140))(this);
	}
	template <typename T = void> T HideOtherAttachment(uintptr_t att, uintptr_t parent) {
		return ((T (*)(DroppedPickUp*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40EE6B0))(this, att, parent);
	}
	template <typename T = uintptr_t> T GetAttachParent(Il2CppString* Socket, uintptr_t* isSraPointR) {
		return ((T (*)(DroppedPickUp*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x40EED54))(this, Socket, isSraPointR);
	}
	template <typename T = void> T OnLoadAttachmentComplete(int32_t assetID, uintptr_t data) {
		return ((T (*)(DroppedPickUp*, int32_t, uintptr_t))(Il2CppBase() + 0x40EEFDC))(this, assetID, data);
	}
	template <typename T = void> T UpdateAttachMentConfig() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EE1D0))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(DroppedPickUp*, int32_t))(Il2CppBase() + 0x40EF598))(this, assetID);
	}
	template <typename T = void> T SpawnOtherAttachments() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EF914))(this);
	}
	template <typename T = void> T DoShowPickupMesh() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40EF674))(this);
	}
	template <typename T = void> T SetVisibility(bool visible) {
		return ((T (*)(DroppedPickUp*, bool))(Il2CppBase() + 0x40EB07C))(this, visible);
	}
	template <typename T = void> T TickDroppedPickUp(float deltaTime) {
		return ((T (*)(DroppedPickUp*, float))(Il2CppBase() + 0x40E49AC))(this, deltaTime);
	}
	template <typename T = bool> T IsMeshVisible() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40F015C))(this);
	}
	template <typename T = bool> T IsBRPickUp() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40ECDBC))(this);
	}
	template <typename T = void> T RotateMesh(float deltaTime) {
		return ((T (*)(DroppedPickUp*, float))(Il2CppBase() + 0x40EFD80))(this, deltaTime);
	}
	template <typename T = void> T SyncDroppedPickUp(Il2CppVector3 inSyncPosition, int32_t actorID, int32_t itemID, float duration, Il2CppArray<uintptr_t>* attachments, Il2CppArray<uintptr_t>* skills, uint32_t skinID, uintptr_t type) {
		return ((T (*)(DroppedPickUp*, Il2CppVector3, int32_t, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, uintptr_t))(Il2CppBase() + 0x40F02D4))(this, inSyncPosition, actorID, itemID, duration, attachments, skills, skinID, type);
	}
	template <typename T = void> T CreateEffect(uintptr_t inAssetID) {
		return ((T (*)(DroppedPickUp*, uintptr_t))(Il2CppBase() + 0x40EE40C))(this, inAssetID);
	}
	template <typename T = void> T OnEffectAsyncSpawned(uintptr_t inst) {
		return ((T (*)(DroppedPickUp*, uintptr_t))(Il2CppBase() + 0x40F04EC))(this, inst);
	}
	template <typename T = void> T PickupConfirmed() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40F08B8))(this);
	}
	template <typename T = void> T SetCustomRotation(Il2CppQuaternion rot) {
		return ((T (*)(DroppedPickUp*, Il2CppQuaternion))(Il2CppBase() + 0x40F0980))(this, rot);
	}
	template <typename T = void> T PowerUpFollow(float deltaTime) {
		return ((T (*)(DroppedPickUp*, float))(Il2CppBase() + 0x40F0A98))(this, deltaTime);
	}
	template <typename T = float> T GetSpeed() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40F0F64))(this);
	}
	template <typename T = void> T ShowWeaponGuide() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40ED768))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(DroppedPickUp*))(Il2CppBase() + 0x40F1218))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(DroppedPickUp*, uintptr_t))(Il2CppBase() + 0x40F1220))(this, P0);
	}

};

}
