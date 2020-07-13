#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentShadowBlade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_ShadowBlade"));
	}

	template <typename T = float> T& m_MaxAttackDistance() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& m_MaxSprintDistance() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = float> T& m_SprintDuration() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = float> T& m_DelayMeleeHitTime() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AniAttackRate() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AniEffectRate_Root() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EffectAssetIDArray_Root() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AniEffectRate_Spine() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_EffectAssetIDArray_Spine() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = int32_t> T& m_MaxTargetCount() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = Il2CppVector3> T& m_CameraOffset() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& m_Snipe2() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EffectList() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRealMeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectAssetID_Root() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectAssetID_Snipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MeleeFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMeleeHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePunchAngleByGetHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FireAmmunition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWeaponFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdjustedCameraAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMelee() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestoryEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEffectLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t, bool))(Il2CppBase() + 0x23F8D14))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F8F9C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EffectAssetIDArray_Root() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F9058))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EffectAssetIDArray_Spine() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F9060))(this);
	}
	template <typename T = Il2CppVector3> T get_CameraOffset() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F9068))(this);
	}
	template <typename T = int32_t> T get_MaxTargetCount() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F907C))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(WeaponFireComponentShadowBlade*, float))(Il2CppBase() + 0x23F9084))(this, dt);
	}
	template <typename T = void> T StartRealMeleeFire() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F91AC))(this);
	}
	template <typename T = int32_t> T GetIndex(uintptr_t aniType, int32_t length) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t, int32_t))(Il2CppBase() + 0x23F9500))(this, aniType, length);
	}
	template <typename T = float> T GetAttackRate(uintptr_t aniType) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23F95E0))(this, aniType);
	}
	template <typename T = float> T GetEffectRate(uintptr_t aniType) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23F96F4))(this, aniType);
	}
	template <typename T = int32_t> T GetEffectAssetID_Root(uintptr_t aniType) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23F980C))(this, aniType);
	}
	template <typename T = int32_t> T GetEffectAssetID_Snipe(uintptr_t aniType) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23F9914))(this, aniType);
	}
	template <typename T = void> T MeleeFire() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F9A1C))(this);
	}
	template <typename T = void> T SetMeleeHitInfo(uintptr_t targetPawn) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23F9AD4))(this, targetPawn);
	}
	template <typename T = void> T ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F9B84))(this);
	}
	template <typename T = void> T FireAmmunition() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23F9C30))(this);
	}
	template <typename T = bool> T CalcWeaponFire(Il2CppVector3 startPos, Il2CppVector3 dir, uintptr_t impactList) {
		return ((T (*)(WeaponFireComponentShadowBlade*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23FA01C))(this, startPos, dir, impactList);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentShadowBlade*, Il2CppQuaternion))(Il2CppBase() + 0x23FAF1C))(this, initialAim);
	}
	template <typename T = Il2CppQuaternion> T GetAdjustedCameraAim(Il2CppQuaternion initialAim) {
		return ((T (*)(WeaponFireComponentShadowBlade*, Il2CppQuaternion))(Il2CppBase() + 0x23FB044))(this, initialAim);
	}
	template <typename T = bool> T IsMelee() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23FB16C))(this);
	}
	template <typename T = void> T InitEffect() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23FB20C))(this);
	}
	template <typename T = void> T DestoryEffect() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23FB6BC))(this);
	}
	template <typename T = void> T OnEffectLoaded(uintptr_t effect) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23FB89C))(this, effect);
	}
	template <typename T = void> T AttachEffect(uintptr_t effect, uintptr_t parent, bool enable) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x23FBA14))(this, effect, parent, enable);
	}
	template <typename T = void> T PlayEffect(int32_t assetID, uintptr_t parent) {
		return ((T (*)(WeaponFireComponentShadowBlade*, int32_t, uintptr_t))(Il2CppBase() + 0x23FBC28))(this, assetID, parent);
	}
	template <typename T = void> T PlayEffect_1(uintptr_t aniType, int32_t parentType) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t, int32_t))(Il2CppBase() + 0x23FBE34))(this, aniType, parentType);
	}
	template <typename T = void> T StopEffect(int32_t assetID) {
		return ((T (*)(WeaponFireComponentShadowBlade*, int32_t))(Il2CppBase() + 0x23FBF28))(this, assetID);
	}
	template <typename T = void> T StopEffect_1(uintptr_t aniType) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t))(Il2CppBase() + 0x23FC124))(this, aniType);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentShadowBlade*, uintptr_t, bool))(Il2CppBase() + 0x23FC1F8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponFireComponentShadowBlade*, float))(Il2CppBase() + 0x23FC1FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangePunchAngleByGetHit() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23FC200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_FireAmmunition() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23FC204))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CalcWeaponFire(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2) {
		return ((T (*)(WeaponFireComponentShadowBlade*, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x23FC208))(this, P0, P1, P2);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentShadowBlade*, Il2CppQuaternion))(Il2CppBase() + 0x23FC240))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_GetAdjustedCameraAim(Il2CppQuaternion P0) {
		return ((T (*)(WeaponFireComponentShadowBlade*, Il2CppQuaternion))(Il2CppBase() + 0x23FC264))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsMelee() {
		return ((T (*)(WeaponFireComponentShadowBlade*))(Il2CppBase() + 0x23FC288))(this);
	}

};

}
