#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessAirborne
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_Airborne"));
	}

	template <typename T = bool> T& m_FindPredictPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_CachedPredictPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_CachedPredictNormal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_PlaceEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AllMaterial() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_OldShader() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_NewShader() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsChanging() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_MinPlaceDistance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_itemID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSendRequestOnBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DragTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckOpeningGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFlatGroundByHeightDiff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNormalOfFlatGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckValidPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPredict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMaterialColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmDragUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmQuickUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePredictEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseRemoteControlledSkillItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExcuteCossHairProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = bool> T IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B286AC))(this);
	}
	template <typename T = void> T OnDragBegin() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2874C))(this);
	}
	template <typename T = void> T DragTick(float delatTime) {
		return ((T (*)(BRSkillProcessAirborne*, float))(Il2CppBase() + 0x1B290C8))(this, delatTime);
	}
	template <typename T = bool> T CheckOpeningGround(Il2CppVector3 vTargetPos, int32_t nRow, int32_t nCol, float fSideSize, float fMaxHeightRayToSky) {
		return ((T (*)(BRSkillProcessAirborne*, Il2CppVector3, int32_t, int32_t, float, float))(Il2CppBase() + 0x1B292F8))(this, vTargetPos, nRow, nCol, fSideSize, fMaxHeightRayToSky);
	}
	template <typename T = bool> T CheckFlatGroundByHeightDiff(Il2CppVector3 vTargetPos, Il2CppVector3 vRayDir, int32_t nRow, int32_t nCol, float fSideSize, float fHeightRayToGround, float fMaxDistanceRay, float fHeightDiff) {
		return ((T (*)(BRSkillProcessAirborne*, Il2CppVector3, Il2CppVector3, int32_t, int32_t, float, float, float, float))(Il2CppBase() + 0x1B29960))(this, vTargetPos, vRayDir, nRow, nCol, fSideSize, fHeightRayToGround, fMaxDistanceRay, fHeightDiff);
	}
	template <typename T = Il2CppVector3> T GetNormalOfFlatGround(uintptr_t targetHitInfo, int32_t nRow, int32_t nCol, float fSideSize, float fHeightRayToGround, float fMaxDistanceRay, float fMaxSlopeAngle) {
		return ((T (*)(BRSkillProcessAirborne*, uintptr_t, int32_t, int32_t, float, float, float, float))(Il2CppBase() + 0x1B2A044))(this, targetHitInfo, nRow, nCol, fSideSize, fHeightRayToGround, fMaxDistanceRay, fMaxSlopeAngle);
	}
	template <typename T = bool> T CheckValidPosition(uintptr_t* targetHitInfo, uintptr_t* bOutHasValidPosition, float fForwardDistance) {
		return ((T (*)(BRSkillProcessAirborne*, uintptr_t*, uintptr_t*, float))(Il2CppBase() + 0x1B2A91C))(this, targetHitInfo, bOutHasValidPosition, fForwardDistance);
	}
	template <typename T = void> T ShowPredict(bool bShow) {
		return ((T (*)(BRSkillProcessAirborne*, bool))(Il2CppBase() + 0x1B288C4))(this, bShow);
	}
	template <typename T = void> T ChangeMat(bool change) {
		return ((T (*)(BRSkillProcessAirborne*, bool))(Il2CppBase() + 0x1B2B3D0))(this, change);
	}
	template <typename T = void> T ChangeMaterialColor(bool canBuild) {
		return ((T (*)(BRSkillProcessAirborne*, bool))(Il2CppBase() + 0x1B2B7EC))(this, canBuild);
	}
	template <typename T = void> T OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2BB28))(this);
	}
	template <typename T = void> T OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2C0D0))(this);
	}
	template <typename T = void> T ClosePredictEffect() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2CB7C))(this);
	}
	template <typename T = void> T UseRemoteControlledSkillItem(int32_t itemID) {
		return ((T (*)(BRSkillProcessAirborne*, int32_t))(Il2CppBase() + 0x1B2BF80))(this, itemID);
	}
	template <typename T = void> T OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2CD5C))(this);
	}
	template <typename T = bool> T CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2D2EC))(this);
	}
	template <typename T = bool> T ExcuteCossHairProcess() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2DF18))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSendRequestOnBegin() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E0CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDragBegin() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E1A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DragTick(float P0) {
		return ((T (*)(BRSkillProcessAirborne*, float))(Il2CppBase() + 0x1B2E1A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmDragUse() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E1A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnConfirmQuickUse() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E1AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCancelUseSkill() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E1B0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckCanUseSkill() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E1B4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ExcuteCossHairProcess() {
		return ((T (*)(BRSkillProcessAirborne*))(Il2CppBase() + 0x1B2E1B8))(this);
	}

};

}
