#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class UpwardLaunchComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "UpwardLaunchComponent"));
	}

	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_LaunchParam() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_fStartSpeedValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_fAcceleratedValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_fGravityValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_StartVelocity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_AcceleratedVelocity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_GravityVelocity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& m_CurrVelocity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_LaunchDir() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_CurrState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_PreState() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsUpRushing() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& SitingAirborne() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = bool> T& m_bCheckSitOnLauncher() {
		return *(T*)((uintptr_t)this + 0x6E);
	}
	template <typename T = float> T& m_fTargetAreaRadius() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_UpRushInitSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& m_UpRushAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& m_UpRushMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_SitOnPropPawn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint32_t> T& m_uLauncherActorId() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> static T& m_cfCameraAniTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_cfCameraAniBackDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_RealCameraAniTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& m_CurrCameraOffset() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_TargetCameraOffset() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_bShowCameraAni() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckViewPlayerCanSitOnLauncher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSitOnLauncher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoNormalActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoNormalActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoNormalActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSitUpEjectorActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSitUpEjectorActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSitUpEjectorActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSittingEjectorActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSittingEjectorActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSittingEjectorActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEjectOutAirActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEjectOutAirActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEjectOutAirActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEjectEndActionBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEjectEndActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEjectEndActionEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldStopServerMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachPropPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SitOnLauncher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLaunchParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceChangeSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedUpRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CameraAniTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedUpRush_1p() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedUpRush_3p() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> T get_MLaunchParam() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E790E4))(this);
	}
	template <typename T = void> T set_MLaunchParam(uintptr_t value) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E790EC))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrState() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E790F4))(this);
	}
	template <typename T = void> T set_CurrState(uintptr_t value) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E790FC))(this, value);
	}
	template <typename T = float> T get_UpRushInitSpeed() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79104))(this);
	}
	template <typename T = void> T set_UpRushInitSpeed(float value) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7910C))(this, value);
	}
	template <typename T = float> T get_UpRushAccelSpeed() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79114))(this);
	}
	template <typename T = void> T set_UpRushAccelSpeed(float value) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7911C))(this, value);
	}
	template <typename T = float> T get_UpRushMaxSpeed() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79124))(this);
	}
	template <typename T = void> T set_UpRushMaxSpeed(float value) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7912C))(this, value);
	}
	template <typename T = bool> T get_ShowCameraAni() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79134))(this);
	}
	template <typename T = void> T set_ShowCameraAni(bool value) {
		return ((T (*)(UpwardLaunchComponent*, bool))(Il2CppBase() + 0x2E7913C))(this, value);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E79144))(this, pawn);
	}
	template <typename T = void> T ChangeState(uintptr_t newState) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E79254))(this, newState);
	}
	template <typename T = void> T BeginState(uintptr_t state) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E79428))(this, state);
	}
	template <typename T = void> T EndState(uintptr_t state) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E79320))(this, state);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7A290))(this, deltaTime);
	}
	template <typename T = bool> T CheckViewPlayerCanSitOnLauncher() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7A3EC))(this);
	}
	template <typename T = void> T DoSitOnLauncher() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7A55C))(this);
	}
	template <typename T = void> T DoNormalActionBegin() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79530))(this);
	}
	template <typename T = void> T DoNormalActionTick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7ABA4))(this, deltaTime);
	}
	template <typename T = void> T DoNormalActionEnd() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79D7C))(this);
	}
	template <typename T = void> T DoSitUpEjectorActionBegin() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E795D8))(this);
	}
	template <typename T = void> T DoSitUpEjectorActionTick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7AC44))(this, deltaTime);
	}
	template <typename T = void> T DoSitUpEjectorActionEnd() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79E14))(this);
	}
	template <typename T = void> T DoSittingEjectorActionBegin() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79790))(this);
	}
	template <typename T = void> T DoSittingEjectorActionTick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7AD94))(this, deltaTime);
	}
	template <typename T = void> T DoSittingEjectorActionEnd() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79EAC))(this);
	}
	template <typename T = void> T DoEjectOutAirActionBegin() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E799C4))(this);
	}
	template <typename T = void> T DoEjectOutAirActionTick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7AEF0))(this, deltaTime);
	}
	template <typename T = void> T DoEjectOutAirActionEnd() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7A160))(this);
	}
	template <typename T = void> T DoEjectEndActionBegin() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E79B54))(this);
	}
	template <typename T = void> T DoEjectEndActionTick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7B160))(this, deltaTime);
	}
	template <typename T = void> T DoEjectEndActionEnd() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7A1F8))(this);
	}
	template <typename T = bool> T ShouldStopServerMove() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7B824))(this);
	}
	template <typename T = void> T AttachPropPawn(uintptr_t propPawn, uint32_t uLauncherActorId) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t, uint32_t))(Il2CppBase() + 0x2E7B8CC))(this, propPawn, uLauncherActorId);
	}
	template <typename T = void> T SitOnLauncher(uintptr_t propPawn, uint32_t uLauncherActorId) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t, uint32_t))(Il2CppBase() + 0x2E7BD18))(this, propPawn, uLauncherActorId);
	}
	template <typename T = void> T SetLaunchParam(uintptr_t launchParam) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E7BE80))(this, launchParam);
	}
	template <typename T = void> T PhysUpRush(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7C088))(this, deltaTime);
	}
	template <typename T = void> T SimulatedStartUpRush(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7C138))(this, deltaTime);
	}
	template <typename T = void> T GotoSkydiving() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7B4AC))(this);
	}
	template <typename T = void> T ForceChangeSkydiving() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7C37C))(this);
	}
	template <typename T = void> T SimulatedEndUpRush(bool bChangeState) {
		return ((T (*)(UpwardLaunchComponent*, bool))(Il2CppBase() + 0x2E7C42C))(this, bChangeState);
	}
	template <typename T = void> T SimulatedUpRush(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7B388))(this, deltaTime);
	}
	template <typename T = void> T CameraAniTick(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7B200))(this, deltaTime);
	}
	template <typename T = void> T SimulatedUpRush_1p(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7CA00))(this, deltaTime);
	}
	template <typename T = void> T SimulatedUpRush_3p(float deltaTime) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7CBF4))(this, deltaTime);
	}
	template <typename T = void> T RestoreState() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7CDE8))(this);
	}
	template <typename T = void> T OnPawnDead() {
		return ((T (*)(UpwardLaunchComponent*))(Il2CppBase() + 0x2E7CE80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(UpwardLaunchComponent*, uintptr_t))(Il2CppBase() + 0x2E7CF34))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(UpwardLaunchComponent*, float))(Il2CppBase() + 0x2E7CF3C))(this, P0);
	}

};

}
