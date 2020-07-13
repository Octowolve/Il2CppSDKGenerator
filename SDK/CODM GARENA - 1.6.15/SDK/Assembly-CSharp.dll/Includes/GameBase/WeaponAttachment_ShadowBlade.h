#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentShadowBlade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachment_ShadowBlade"));
	}

	template <typename T = uintptr_t> T& m_ShadowBladeFireComponent() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& m_LastAnimaType() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_RemoveEffect() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFireStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanUse1PView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMeleeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnOldMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearLeftAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleUpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleLeftAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleRightAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleMiddleKneeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = bool> T NeedFireStopSprint() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C4FD98))(this);
	}
	template <typename T = bool> T IsCanUse1PView() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C4FE38))(this);
	}
	template <typename T = void> T PlayFireAnimation(bool isPlaySingle) {
		return ((T (*)(WeaponAttachmentShadowBlade*, bool))(Il2CppBase() + 0x1C4FED8))(this, isPlaySingle);
	}
	template <typename T = void> T StartMeleeAttack(uintptr_t AnimType) {
		return ((T (*)(WeaponAttachmentShadowBlade*, uintptr_t))(Il2CppBase() + 0x1C4FF78))(this, AnimType);
	}
	template <typename T = void> T EndMeleeAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C5010C))(this);
	}
	template <typename T = void> T HideEffect() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C5004C))(this);
	}
	template <typename T = void> T SetFireMode(unsigned char fireMode) {
		return ((T (*)(WeaponAttachmentShadowBlade*, unsigned char))(Il2CppBase() + 0x1C501B0))(this, fireMode);
	}
	template <typename T = void> T PlayAudio(Il2CppString* eventName) {
		return ((T (*)(WeaponAttachmentShadowBlade*, Il2CppString*))(Il2CppBase() + 0x1C5034C))(this, eventName);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponAttachmentShadowBlade*, float))(Il2CppBase() + 0x1C50524))(this, deltaTime);
	}
	template <typename T = void> T ChangeWeapon() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C5061C))(this);
	}
	template <typename T = void> T DespawnOldMesh(int32_t newAssetID) {
		return ((T (*)(WeaponAttachmentShadowBlade*, int32_t))(Il2CppBase() + 0x1C50738))(this, newAssetID);
	}
	template <typename T = float> T GetAttackRate(uintptr_t aniType) {
		return ((T (*)(WeaponAttachmentShadowBlade*, uintptr_t))(Il2CppBase() + 0x1C508E4))(this, aniType);
	}
	template <typename T = float> T GetEffectRate(uintptr_t aniType) {
		return ((T (*)(WeaponAttachmentShadowBlade*, uintptr_t))(Il2CppBase() + 0x1C509A8))(this, aniType);
	}
	template <typename T = void> T AddAnimationClipEvent_3P() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C50A6C))(this);
	}
	template <typename T = void> T PlayAttackEffect(uintptr_t aniType) {
		return ((T (*)(WeaponAttachmentShadowBlade*, uintptr_t))(Il2CppBase() + 0x1C51274))(this, aniType);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51398))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyJumpAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51440))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearLeftAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C514E8))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51590))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleUpAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51638))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearJumpAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C516E0))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleLeftAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51788))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleRightAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51830))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleMiddleKneeAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C518D8))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleJumpAttack() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51980))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedFireStopSprint() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51A28))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanUse1PView() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51A30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFireAnimation(bool P0) {
		return ((T (*)(WeaponAttachmentShadowBlade*, bool))(Il2CppBase() + 0x1C51A38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetFireMode(unsigned char P0) {
		return ((T (*)(WeaponAttachmentShadowBlade*, unsigned char))(Il2CppBase() + 0x1C51A40))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAttachmentShadowBlade*, float))(Il2CppBase() + 0x1C51A48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeWeapon() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51A50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DespawnOldMesh(int32_t P0) {
		return ((T (*)(WeaponAttachmentShadowBlade*, int32_t))(Il2CppBase() + 0x1C51A58))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAnimationClipEvent_3P() {
		return ((T (*)(WeaponAttachmentShadowBlade*))(Il2CppBase() + 0x1C51A60))(this);
	}

};

}
