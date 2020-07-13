#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PawnAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PawnAnimationComponent"));
	}

	template <typename T = float> T& SprintLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& CrouchLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& RunLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& SwimLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& ProneLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& DyingLerpSpeed() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> T& m_TargetForwardSpeed() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = float> T& m_TargetLateralSpeed() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& m_CurrentForwardSpeed() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& m_CurrentLateralSpeed() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector2> T& m_TargetBlendPositionParameter() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector2> T& m_CurrentBlendPositionParameter() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector2> T& m_BlendPositionParameterWhenSetTarget() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& m_CurrentWeight() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& m_SpeedScale() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& m_HasAimLayer() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = bool> T& m_EnableSprintLean() {
		return *(T*)((uintptr_t)this + 0x10E);
	}
	template <typename T = uintptr_t> T& SprintLeanCoefficientCurve() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& m_SprintLeanLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& m_SprintAngleThreshold() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& disableMoveParamUpdate() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_PresetCurveKeyframe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ProneCurve() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CrouchCurve() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& animationSyncController() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& CacheAnimatorLodData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& DefaultAnimatorFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& InvisibleAniamtorFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& MaxLodLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LODFrames() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& InvisibleLODFrames() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LowerQualityInvisibleLODFrames() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> static T& IsUseCommandLodFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CommandLODFrames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& SetMovementDataDirectly() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& OpenRunLateralThreshold() {
		return *(T*)((uintptr_t)this + 0x13D);
	}
	template <typename T = bool> T& m_bOwnerRecentlyRendered() {
		return *(T*)((uintptr_t)this + 0x13E);
	}
	template <typename T = float> T& m_LastSetRevelentlyTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& m_CheckUBLayerFrame() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& m_CheckFrameLimit() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> static T& StopUBLayerMaxDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& EnableCheckSetUBLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> T& m_LastUpdateAnimatorTime() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& m_UpdateAnimatorDelta() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = float> T& m_MaxUpdateDistanceSqr() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvaluateCrouchCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EvaluateSprintLeanCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorLod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefaultState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorCleared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllParameterAndInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorToInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitFPAnimationSyncController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncFPAnimationPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnActiviteFPAnimationSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimpleAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldReplaceSimpleController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateMovementPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUpdateMovementPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMovementPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentForwardSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLateralSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDirSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMinUpdateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLODLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecentlyRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetRecentlyRendered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceSetMinUpdateIntervalZero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetUBLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAnimatorUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadTPDefaultAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimatorLodActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentFOVCuveValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}

	template <typename T = bool> T get_disableMoveParamUpdate() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x272FB4C))(this);
	}
	template <typename T = void> T set_disableMoveParamUpdate(bool value) {
		return ((T (*)(PawnAnimationComponent*, bool))(Il2CppBase() + 0x272FB54))(this, value);
	}
	template <typename T = float> T EvaluateCrouchCurve(float inTime) {
		return ((T (*)(PawnAnimationComponent*, float))(Il2CppBase() + 0x272FB5C))(this, inTime);
	}
	template <typename T = float> T EvaluateSprintLeanCurve(float inTime) {
		return ((T (*)(PawnAnimationComponent*, float))(Il2CppBase() + 0x272FC78))(this, inTime);
	}
	template <typename T = void> T SetAnimatorLod() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x272FDB4))(this);
	}
	template <typename T = void> T Init(uintptr_t mesh) {
		return ((T (*)(PawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x27305F4))(this, mesh);
	}
	template <typename T = void> T InitDefaultState() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2730C18))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x273134C))(this);
	}
	template <typename T = void> T OnAnimatorCleared() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2731438))(this);
	}
	template <typename T = void> T ResetAllParameterAndInit() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2731598))(this);
	}
	template <typename T = void> T SetAnimatorToInit() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2730DE8))(this);
	}
	template <typename T = void> T InitFPAnimationSyncController(uintptr_t mesh) {
		return ((T (*)(PawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x2731678))(this, mesh);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2731950))(this);
	}
	template <typename T = void> T SyncFPAnimationPose(Il2CppArray<uintptr_t>* poses) {
		return ((T (*)(PawnAnimationComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2731A34))(this, poses);
	}
	template <typename T = void> T OnActiviteFPAnimationSync(bool isActivate) {
		return ((T (*)(PawnAnimationComponent*, bool))(Il2CppBase() + 0x2731B84))(this, isActivate);
	}
	template <typename T = uintptr_t> T GetAnimationController() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2731D40))(this);
	}
	template <typename T = uintptr_t> T CreateSimpleAnimatorController(uintptr_t weaponOC) {
		return ((T (*)(PawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x2731ED8))(this, weaponOC);
	}
	template <typename T = bool> T ShouldReplaceSimpleController() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2732558))(this);
	}
	template <typename T = void> T SetRuntimeAnimatorController(uintptr_t animatorController, bool forceSet) {
		return ((T (*)(PawnAnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x2732628))(this, animatorController, forceSet);
	}
	template <typename T = void> T ResetPlayState() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2732C78))(this);
	}
	template <typename T = void> T ForceUpdateMovementPara(float deltaTime) {
		return ((T (*)(PawnAnimationComponent*, float))(Il2CppBase() + 0x2732D84))(this, deltaTime);
	}
	template <typename T = void> T InternalUpdateMovementPara(float deltaTime) {
		return ((T (*)(PawnAnimationComponent*, float))(Il2CppBase() + 0x2733244))(this, deltaTime);
	}
	template <typename T = void> T SetMovementPara(float forwardSpeed, float lateralSpeed, bool setDirectly, float speedScale) {
		return ((T (*)(PawnAnimationComponent*, float, float, bool, float))(Il2CppBase() + 0x2733704))(this, forwardSpeed, lateralSpeed, setDirectly, speedScale);
	}
	template <typename T = float> T GetCurrentForwardSpeed() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x27339F4))(this);
	}
	template <typename T = float> T GetCurrentLateralSpeed() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2733AC4))(this);
	}
	template <typename T = uintptr_t> T GetCurrentDirSpeed() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2733B94))(this);
	}
	template <typename T = float> T get_CurrentAnimatorUpdateInterval() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2733D24))(this);
	}
	template <typename T = void> T ResetMinUpdateInterval() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2730FF8))(this);
	}
	template <typename T = void> T SetLODLevel() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2733E04))(this);
	}
	template <typename T = void> T SetRecentlyRendered(bool visible) {
		return ((T (*)(PawnAnimationComponent*, bool))(Il2CppBase() + 0x2734070))(this, visible);
	}
	template <typename T = void> T ForceSetRecentlyRendered() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2734458))(this);
	}
	template <typename T = void> T ForceSetMinUpdateIntervalZero() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x27348C4))(this);
	}
	template <typename T = void> T CheckSetUBLayer() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2734A74))(this);
	}
	template <typename T = void> T CheckUpdateAnimator() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2734F0C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2735244))(this);
	}
	template <typename T = bool> T IsAnimatorUpdate() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x27353B8))(this);
	}
	template <typename T = void> static T PreloadTPDefaultAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x2735508))(0);
	}
	template <typename T = void> T SetAnimatorLodActive(bool isActive) {
		return ((T (*)(PawnAnimationComponent*, bool))(Il2CppBase() + 0x2735618))(this, isActive);
	}
	template <typename T = float> T GetCurrentFOVCuveValue() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x273577C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x2735A64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2735A6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnAnimatorCleared() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2735A74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2735A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetRuntimeAnimatorController(uintptr_t P0, bool P1) {
		return ((T (*)(PawnAnimationComponent*, uintptr_t, bool))(Il2CppBase() + 0x2735A84))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2735A8C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCurrentFOVCuveValue() {
		return ((T (*)(PawnAnimationComponent*))(Il2CppBase() + 0x2735A94))(this);
	}

};

}
