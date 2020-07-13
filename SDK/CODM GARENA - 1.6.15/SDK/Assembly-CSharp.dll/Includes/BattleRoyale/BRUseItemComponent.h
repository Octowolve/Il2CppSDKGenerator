#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRUseItemComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRUseItemComponent"));
	}

	template <typename T = Il2CppString*> T& PREFIX_STAND() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& PREFIX_PRONE() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& PREFIX_UPPERBODY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& PREFIX_FPS() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& FX_SOCKET_1P() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& FX_SOCKET_3P() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ENERGY_FOOD_ID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ANALGESICS_ID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ADRENALINE_ID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Hemostatic_ID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& WaitRequestUseItemTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CurrentEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_CurrentItemModel() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsUseItem() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_UseItemItemId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_LastStartUseItemTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_UseItemTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_CachedAnimLayer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& m_CachedAnimName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_KnifeWeaponItemId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_CheckKnifeCoroutine() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_nRequestUseItemCoroutine() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_IsInSprintUseItem() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_IsRequestUseItem() {
		return *(T*)((uintptr_t)this + 0x75);
	}
	template <typename T = float> T& m_RequestUseItemTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_CheckPlayAnim() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& RecordWeaponId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = unsigned char> T& RecordWeaponSlotId() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& RecordWeaponActorId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_LastWeapon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> static T& m_WaitToStopRequestStopUseItemTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastStopRequestStopUseItemTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& m_IsStopRequestStopUseItem() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& m_Prefix() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& m_AnimationName() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& m_AnimationSpeed() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& m_StopSound() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& mLockProneing() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& mLockSwimming() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = int32_t> T& animationLayer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_CurrentEffectAssetId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestUseItemResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwimSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPlaying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopRequestStopUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUseItemError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponThenRequestUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUseItemAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCameraAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCheckKnifeCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCheckHideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_installEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DettachModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPreUsedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimationEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_resetWeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIdleInSwim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_hideWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimStateSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = bool> T get_IsUseItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2641580))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRUseItemComponent*, uintptr_t))(Il2CppBase() + 0x2641588))(this, pawn);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26416E0))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26419A0))(this);
	}
	template <typename T = void> T TryUseItem(uintptr_t data) {
		return ((T (*)(BRUseItemComponent*, uintptr_t))(Il2CppBase() + 0x2641A50))(this, data);
	}
	template <typename T = void> T OnRequestUseItemResult() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26424F4))(this);
	}
	template <typename T = bool> T CanSwimSprint() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x261092C))(this);
	}
	template <typename T = bool> T IsPlaying() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26425E0))(this);
	}
	template <typename T = bool> T get_IsStopRequestStopUseItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x264274C))(this);
	}
	template <typename T = void> T set_IsStopRequestStopUseItem(bool value) {
		return ((T (*)(BRUseItemComponent*, bool))(Il2CppBase() + 0x264279C))(this, value);
	}
	template <typename T = void> T StopRequestStopUseItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26427C4))(this);
	}
	template <typename T = void> T ServerUseItem(int32_t itemId) {
		return ((T (*)(BRUseItemComponent*, int32_t))(Il2CppBase() + 0x26428D8))(this, itemId);
	}
	template <typename T = void> T UseItem(int32_t itemId) {
		return ((T (*)(BRUseItemComponent*, int32_t))(Il2CppBase() + 0x2642BDC))(this, itemId);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRUseItemComponent*, float))(Il2CppBase() + 0x2643590))(this, deltaTime);
	}
	template <typename T = void> T OnUseItemError(int32_t itemId) {
		return ((T (*)(BRUseItemComponent*, int32_t))(Il2CppBase() + 0x26444D8))(this, itemId);
	}
	template <typename T = void> T OnFinishItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x264463C))(this);
	}
	template <typename T = void> T ForceStopUseItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2642AE4))(this);
	}
	template <typename T = void> T StopUseItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26446EC))(this);
	}
	template <typename T = void> T HideItem() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2644F88))(this);
	}
	template <typename T = void> T SyncUseItem(int32_t actorId, int32_t itemId, int32_t posId, uint32_t playerId) {
		return ((T (*)(BRUseItemComponent*, int32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x26423A0))(this, actorId, itemId, posId, playerId);
	}
	template <typename T = uintptr_t> T SwitchWeaponThenRequestUseItem(int32_t actorId, int32_t itemId, int32_t posId) {
		return ((T (*)(BRUseItemComponent*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2645360))(this, actorId, itemId, posId);
	}
	template <typename T = void> T PlayUseItemAnim(float playTime) {
		return ((T (*)(BRUseItemComponent*, float))(Il2CppBase() + 0x264383C))(this, playTime);
	}
	template <typename T = void> T StopCameraAnimation() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2644BDC))(this);
	}
	template <typename T = void> T ClearCheckKnifeCoroutine() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x264547C))(this);
	}
	template <typename T = void> T SetWeaponVisible(bool isVisible) {
		return ((T (*)(BRUseItemComponent*, bool))(Il2CppBase() + 0x264554C))(this, isVisible);
	}
	template <typename T = void> T OnCheckHideWeapon() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26455EC))(this);
	}
	template <typename T = void> T PlayEffect(float time) {
		return ((T (*)(BRUseItemComponent*, float))(Il2CppBase() + 0x2643F5C))(this, time);
	}
	template <typename T = void> T OnEffectLoaded(int32_t assetId, uintptr_t obj) {
		return ((T (*)(BRUseItemComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x26459E8))(this, assetId, obj);
	}
	template <typename T = void> T ClearEffect() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2641790))(this);
	}
	template <typename T = void> T AttachModel() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2645710))(this);
	}
	template <typename T = void> T OnModelReady(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRUseItemComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x2645F34))(this, assetId, arg);
	}
	template <typename T = void> T installEquip(uintptr_t gameObject, uintptr_t inBone) {
		return ((T (*)(BRUseItemComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2646538))(this, gameObject, inBone);
	}
	template <typename T = void> T DettachModel() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2645038))(this);
	}
	template <typename T = void> T ResetPreUsedWeapon() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26445A4))(this);
	}
	template <typename T = void> T OnAnimationEnd() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x26441B8))(this);
	}
	template <typename T = void> T resetWeaponState(int32_t actorID) {
		return ((T (*)(BRUseItemComponent*, int32_t))(Il2CppBase() + 0x2646B64))(this, actorID);
	}
	template <typename T = bool> T CheckIdleInSwim() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2646DA0))(this);
	}
	template <typename T = void> T hideWeapon(bool inHide) {
		return ((T (*)(BRUseItemComponent*, bool))(Il2CppBase() + 0x264311C))(this, inHide);
	}
	template <typename T = void> T ResetAnimStateSpeed() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x264703C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRUseItemComponent*, uintptr_t))(Il2CppBase() + 0x2647114))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginDestroy() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x264711C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(BRUseItemComponent*))(Il2CppBase() + 0x2647124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRUseItemComponent*, float))(Il2CppBase() + 0x264712C))(this, P0);
	}

};

}
