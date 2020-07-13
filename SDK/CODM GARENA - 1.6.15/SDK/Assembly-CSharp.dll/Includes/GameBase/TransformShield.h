#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TransformShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TransformShield"));
	}

	template <typename T = float> static T& PLAY_ANIM_TIMESCALE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& MainPart() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LeftPart() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& RightPart() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OpenAnim() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ShieldRenderers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DamageMat() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& NormalMat() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DamageEffect_1() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& DamageEffect_2() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& MantleGO() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& MainPartChecker() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LeftPartChecker() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& RightPartChecker() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& m_PreBuilding() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = unsigned char> T& m_PreBuildMask() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DecalEffectList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& m_LocalPosY() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_IsDamaged() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_PendingClose() {
		return *(T*)((uintptr_t)this + 0xC5);
	}
	template <typename T = bool> T& m_HasOcclusionEffect() {
		return *(T*)((uintptr_t)this + 0xC6);
	}
	template <typename T = uintptr_t> T& m_RenderEffectAssetID() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForPreBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalPosY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActivePartCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDamaged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClosePlayOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivePartMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActivePartMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBeStick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27CD6EC))(this);
	}
	template <typename T = void> T BuildNow() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27CDD04))(this);
	}
	template <typename T = void> T PreBuild() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27CE580))(this);
	}
	template <typename T = bool> T CheckForPreBuild(Il2CppVector3 checkStart, Il2CppVector3 checkEnd) {
		return ((T (*)(TransformShield*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x27CE768))(this, checkStart, checkEnd);
	}
	template <typename T = float> T GetLocalPosY() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27CED04))(this);
	}
	template <typename T = void> T ShowSelf(bool show) {
		return ((T (*)(TransformShield*, bool))(Il2CppBase() + 0x27CD8C4))(this, show);
	}
	template <typename T = void> T ActivePartCollider(bool main, bool left, bool right) {
		return ((T (*)(TransformShield*, bool, bool, bool))(Il2CppBase() + 0x27CDAB4))(this, main, left, right);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* animName) {
		return ((T (*)(TransformShield*, Il2CppString*))(Il2CppBase() + 0x27CEDA4))(this, animName);
	}
	template <typename T = void> T PlayAnimation_1(Il2CppString* animName, float normalizedTime) {
		return ((T (*)(TransformShield*, Il2CppString*, float))(Il2CppBase() + 0x27CEBC4))(this, animName, normalizedTime);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(TransformShield*, uintptr_t))(Il2CppBase() + 0x27CEEC4))(this, damageInfo);
	}
	template <typename T = void> T SetHealth(float health, float healthMax) {
		return ((T (*)(TransformShield*, float, float))(Il2CppBase() + 0x27CF210))(this, health, healthMax);
	}
	template <typename T = void> T SetDamaged(bool damaged) {
		return ((T (*)(TransformShield*, bool))(Il2CppBase() + 0x27CE3FC))(this, damaged);
	}
	template <typename T = void> T Destroy(bool timeout) {
		return ((T (*)(TransformShield*, bool))(Il2CppBase() + 0x27CF3E4))(this, timeout);
	}
	template <typename T = void> T OnClosePlayOver() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27CF8A4))(this);
	}
	template <typename T = void> T ChangeMat(bool change) {
		return ((T (*)(TransformShield*, bool))(Il2CppBase() + 0x27CFA90))(this, change);
	}
	template <typename T = void> T SetActivePartMask(unsigned char mask, bool isInPlacingProgress) {
		return ((T (*)(TransformShield*, unsigned char, bool))(Il2CppBase() + 0x27CFB4C))(this, mask, isInPlacingProgress);
	}
	template <typename T = unsigned char> T GetActivePartMask() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27CFE78))(this);
	}
	template <typename T = bool> T IsCanBeStick() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D00C8))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D0168))(this);
	}
	template <typename T = void> T RemoveOcclusionEffect() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D064C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D075C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D080C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BuildNow() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D0814))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreBuild() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D081C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckForPreBuild(Il2CppVector3 P0, Il2CppVector3 P1) {
		return ((T (*)(TransformShield*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x27D0824))(this, P0, P1);
	}
	template <typename T = float> T xLuaBaseProxy_GetLocalPosY() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D0858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnimation(Il2CppString* P0) {
		return ((T (*)(TransformShield*, Il2CppString*))(Il2CppBase() + 0x27D0860))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(TransformShield*, uintptr_t))(Il2CppBase() + 0x27D0868))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetHealth(float P0, float P1) {
		return ((T (*)(TransformShield*, float, float))(Il2CppBase() + 0x27D0870))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy(bool P0) {
		return ((T (*)(TransformShield*, bool))(Il2CppBase() + 0x27D0878))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeMat(bool P0) {
		return ((T (*)(TransformShield*, bool))(Il2CppBase() + 0x27D0880))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetActivePartMask(unsigned char P0, bool P1) {
		return ((T (*)(TransformShield*, unsigned char, bool))(Il2CppBase() + 0x27D0888))(this, P0, P1);
	}
	template <typename T = unsigned char> T xLuaBaseProxy_GetActivePartMask() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D0890))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanBeStick() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D0898))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(TransformShield*))(Il2CppBase() + 0x27D08A0))(this);
	}

};

}
