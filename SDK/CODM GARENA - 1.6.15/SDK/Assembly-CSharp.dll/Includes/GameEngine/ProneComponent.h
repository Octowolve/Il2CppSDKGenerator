#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ProneComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ProneComponent"));
	}

	template <typename T = float> static T& CheckProneHeadRayDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CheckProneRayDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& CheckProneRayRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& m_PawnAnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& UnProneWaterHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& m_CheckWaterLineLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& m_LayerWaterMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> T& m_EyeHeightDropDownSpeedForProneing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_UpdateEyeHeightIntervalDuringProneing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_RecoverEyeHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_LastMoveCheckPlane() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_FromEyeHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_ToEyeHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_ChangeTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_ChangeTimeAdd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_StartChange() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& CountStopTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& BeginCountStopTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsTransitionCrouch() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = Il2CppQuaternion> T& m_LastPawnRotation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& m_LastPawnPosition() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Ray() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_SlopeMaxHeight() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_LastCheckProneFrame() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_InternalCheckProneFrameLimit() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> static T& PRONE_HEAD_RADIUS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HeadHitFrontWallResults() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> static T& CheckProneLeftAndRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> T& MeshRotationLerpFator() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& ProneMeshLength() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& ProneMeshUpbody() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> static T& ValidProneBackHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> T& m_CheckProneMeshRotation() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_CheckToStandIdleCoroutine() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_CheckToStandIdle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceStopTransition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProneInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTransitionTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUnProneToCrouch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanUnProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProneVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMeshRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSimulateProneMeshRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBackOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHeadHitFrontWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanProne_Back() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanMoveCheckPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsCanMoveCheckPlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInProneCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckProneMeshRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalCheckProne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCheckProneRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPhysicsStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayProneAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartCheckToStandIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToStandIdle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopProneAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = bool> T get_IsInTransition() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DEE0FC))(this);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(ProneComponent*, uintptr_t))(Il2CppBase() + 0x1DEE104))(this, pawn);
	}
	template <typename T = void> T ForceStopTransition() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DEE214))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ProneComponent*, float))(Il2CppBase() + 0x1DEE2E8))(this, deltaTime);
	}
	template <typename T = bool> T CheckProneInWater() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DEEFC0))(this);
	}
	template <typename T = bool> T CheckProne() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DEF264))(this);
	}
	template <typename T = void> T StartProne(bool immediately) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DF0084))(this, immediately);
	}
	template <typename T = void> T EndProne(bool immediately, bool setEyeHeightInImmediately, bool needPlayAnim) {
		return ((T (*)(ProneComponent*, bool, bool, bool))(Il2CppBase() + 0x1DF168C))(this, immediately, setEyeHeightInImmediately, needPlayAnim);
	}
	template <typename T = float> T GetTransitionTime() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF2964))(this);
	}
	template <typename T = bool> T CanUnProneToCrouch() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF2A38))(this);
	}
	template <typename T = bool> T CanUnProne(bool immediately) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DF1DD4))(this, immediately);
	}
	template <typename T = void> T SetEyeHeight(float newEyeHeight) {
		return ((T (*)(ProneComponent*, float))(Il2CppBase() + 0x1DEEE6C))(this, newEyeHeight);
	}
	template <typename T = bool> T CheckProneVisibility(float distance) {
		return ((T (*)(ProneComponent*, float))(Il2CppBase() + 0x1DF3174))(this, distance);
	}
	template <typename T = void> T SimulatedStartProne(uintptr_t pawn) {
		return ((T (*)(ProneComponent*, uintptr_t))(Il2CppBase() + 0x1DF3468))(this, pawn);
	}
	template <typename T = void> T SimulatedEndProne(uintptr_t pawn) {
		return ((T (*)(ProneComponent*, uintptr_t))(Il2CppBase() + 0x1DF37D4))(this, pawn);
	}
	template <typename T = void> T SetCurrentMeshRotation(uintptr_t pawn) {
		return ((T (*)(ProneComponent*, uintptr_t))(Il2CppBase() + 0x1DEEA24))(this, pawn);
	}
	template <typename T = void> T CheckSimulateProneMeshRotation(bool forceSetRotation) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DF3D28))(this, forceSetRotation);
	}
	template <typename T = bool> T IsCanBackOff() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF44FC))(this);
	}
	template <typename T = bool> T CheckHeadHitFrontWall() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF4A7C))(this);
	}
	template <typename T = bool> T CanProne_Back() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF4E88))(this);
	}
	template <typename T = bool> T IsCanMoveCheckPlane(Il2CppVector3 dir, bool isForward, bool isProne, bool forceSetRotation) {
		return ((T (*)(ProneComponent*, Il2CppVector3, bool, bool, bool))(Il2CppBase() + 0x1DF5910))(this, dir, isForward, isProne, forceSetRotation);
	}
	template <typename T = bool> T IsCanMoveCheckPlane_1(bool isProne) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DEFDCC))(this, isProne);
	}
	template <typename T = bool> T CheckInProneCondition() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF614C))(this);
	}
	template <typename T = bool> T CheckProneMeshRotation(bool forceSetRotation, bool checkValid) {
		return ((T (*)(ProneComponent*, bool, bool))(Il2CppBase() + 0x1DF0AD0))(this, forceSetRotation, checkValid);
	}
	template <typename T = void> T InternalCheckProne() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DEE740))(this);
	}
	template <typename T = void> T SetCheckProneRotation() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF6608))(this);
	}
	template <typename T = void> T OnPhysicsStateChanged(uintptr_t preState, uintptr_t curState) {
		return ((T (*)(ProneComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DF66DC))(this, preState, curState);
	}
	template <typename T = float> T PlayProneAnim() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF059C))(this);
	}
	template <typename T = void> T StartCheckToStandIdle() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF68F4))(this);
	}
	template <typename T = uintptr_t> T CheckToStandIdle() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF6A1C))(this);
	}
	template <typename T = float> T StopProneAnim(bool immediately) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DF22B8))(this, immediately);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF6B34))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF6C44))(this);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DF6D54))(this, isRelevant);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(ProneComponent*, uintptr_t))(Il2CppBase() + 0x1DF7174))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ProneComponent*, float))(Il2CppBase() + 0x1DF717C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF7184))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(ProneComponent*))(Il2CppBase() + 0x1DF718C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(ProneComponent*, bool))(Il2CppBase() + 0x1DF7194))(this, P0);
	}

};

}
