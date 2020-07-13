#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponShadowBlade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponShadowBlade"));
	}

	template <typename T = uintptr_t> T& m_ShadowBladeFireComponent() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = uintptr_t> T& m_LastAnimaType() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialMeleeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedsToSwitchCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAmmoTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultActivateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedFireStopSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMeleeFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideADSButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpecialAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsADSAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareInputParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeFireMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyCancelThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSetCancelThrowingWeaponValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMeleeHitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelMeleeHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent_3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAnimationClipEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_1PMovePro() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttackRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEffectRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_Attack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShadowBladeEndAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackEffect_Snipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAttackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRolloverEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearLeftAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleUpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleLeftAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleRightAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleMiddleKneeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_EmptyAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_EmptyJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearLeftAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearMiddleAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearMiddleUpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleLeftAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleRightAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleMiddleKneeAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleJumpAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimationEventCallBack_3P_ShadowBlade_AddEffect_Rollover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = bool> T IsSpecialMeleeWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45980A4))(this);
	}
	template <typename T = bool> T IsSpecialThrowWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459815C))(this);
	}
	template <typename T = bool> T IsShowCrossHair() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598214))(this);
	}
	template <typename T = bool> T NeedsToSwitchCrossHair() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45982BC))(this);
	}
	template <typename T = bool> T ShowAmmoTip() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459835C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45983FC))(this);
	}
	template <typename T = uintptr_t> T GetDefaultActivateState() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459863C))(this);
	}
	template <typename T = bool> T CanSprint() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598800))(this);
	}
	template <typename T = bool> T NeedFireStopSprint() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45988A0))(this);
	}
	template <typename T = void> T PlayFireAnim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598940))(this);
	}
	template <typename T = void> T PlayMeleeFireAnim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598A80))(this);
	}
	template <typename T = bool> T IsHideADSButton() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598B18))(this);
	}
	template <typename T = bool> T IsSpecialAim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598BB8))(this);
	}
	template <typename T = bool> T IsADSAiming() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598C58))(this);
	}
	template <typename T = void> T PrepareInputParam(uintptr_t param) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x4598D08))(this, param);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4598DD4))(this);
	}
	template <typename T = void> T PlayAudio(Il2CppString* eventName) {
		return ((T (*)(WNWeaponShadowBlade*, Il2CppString*))(Il2CppBase() + 0x4598FBC))(this, eventName);
	}
	template <typename T = void> T StopAim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4599300))(this);
	}
	template <typename T = void> T ChangeFireMode(unsigned char fireMode) {
		return ((T (*)(WNWeaponShadowBlade*, unsigned char))(Il2CppBase() + 0x4599194))(this, fireMode);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4599398))(this);
	}
	template <typename T = void> T NotifyCancelThrowWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45994D0))(this);
	}
	template <typename T = bool> T CanSetCancelThrowingWeaponValue() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45995B8))(this);
	}
	template <typename T = void> T DestroyWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4599680))(this);
	}
	template <typename T = void> T SetMeleeHitInfo(uintptr_t targetPawn, uintptr_t aniType) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4599744))(this, targetPawn, aniType);
	}
	template <typename T = void> T CancelMeleeHit() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x45999D0))(this);
	}
	template <typename T = void> T AddAnimationClipEvent_3P() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x4599AE8))(this);
	}
	template <typename T = void> T AddAnimationClipEvent() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459B494))(this);
	}
	template <typename T = void> T AnimationEventCallBack_1PMovePro() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459BEC8))(this);
	}
	template <typename T = float> T GetAttackRate(uintptr_t aniType) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x459B30C))(this, aniType);
	}
	template <typename T = float> T GetEffectRate(uintptr_t aniType) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x459B3D0))(this, aniType);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_Attack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459BF8C))(this);
	}
	template <typename T = void> T ShadowBladeEndAttack(uintptr_t aniType) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x459C148))(this, aniType);
	}
	template <typename T = void> T PlayAttackEffect_Snipe(uintptr_t aniType) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x45998AC))(this, aniType);
	}
	template <typename T = void> T PlayAttackEffect(uintptr_t aniType) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x459C2CC))(this, aniType);
	}
	template <typename T = void> T PlayRolloverEffect() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C3F0))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C558))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_EmptyJumpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C600))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearLeftAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C6A8))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C750))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearMiddleUpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C7F8))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_NearJumpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C8A0))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleLeftAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C948))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleRightAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459C9F0))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleMiddleKneeAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CA98))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_MiddleJumpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CB40))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_EmptyAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CBE8))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_EmptyJumpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CC90))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearLeftAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CD38))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearMiddleAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CDE0))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearMiddleUpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CE88))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_NearJumpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CF30))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleLeftAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459CFD8))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleRightAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D080))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleMiddleKneeAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D128))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_EndAttack_MiddleJumpAttack() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D1D0))(this);
	}
	template <typename T = void> T AnimationEventCallBack_3P_ShadowBlade_AddEffect_Rollover() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D278))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSpecialMeleeWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D31C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSpecialThrowWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D324))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCrossHair() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D32C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedsToSwitchCrossHair() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D334))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ShowAmmoTip() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D33C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D344))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSprint() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D34C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedFireStopSprint() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D354))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFireAnim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D35C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayMeleeFireAnim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D364))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsHideADSButton() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D36C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSpecialAim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D374))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsADSAiming() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D37C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PrepareInputParam(uintptr_t P0) {
		return ((T (*)(WNWeaponShadowBlade*, uintptr_t))(Il2CppBase() + 0x459D384))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D38C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StopAim() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyCancelThrowWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D3A4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSetCancelThrowingWeaponValue() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D3AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyWeapon() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D3B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddAnimationClipEvent_3P() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D3BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddAnimationClipEvent() {
		return ((T (*)(WNWeaponShadowBlade*))(Il2CppBase() + 0x459D3C4))(this);
	}

};

}
