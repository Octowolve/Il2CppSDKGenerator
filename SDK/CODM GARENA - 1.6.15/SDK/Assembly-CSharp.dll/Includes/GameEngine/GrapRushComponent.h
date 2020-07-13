#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GrapRushComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GrapRushComponent"));
	}

	template <typename T = Il2CppVector3> T& m_DstPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_TransPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_BeginPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_MoveDstPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_bHasTransPoint() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_fTargetAreaRadius() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_fRushingEyeHeight() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_fCurrEyeHeight() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_fContinuedTimeExceedMaxAngle() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_fLastSaveTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_fMaxRushTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_fContinuedRushTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_fLastSaveRushTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IsGrapRushing() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsPreEndGrapRush() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = bool> T& IsTakeOffing() {
		return *(T*)((uintptr_t)this + 0x6A);
	}
	template <typename T = bool> T& IsLanding() {
		return *(T*)((uintptr_t)this + 0x6B);
	}
	template <typename T = float> T& m_GrapRushInitSpeed() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_GrapRushAccelSpeed() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_GrapRushMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector2> T& m_v2MoveDstPos() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector2> T& m_v2BeginPos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector2> T& m_v2LeftHandPos() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& m_fUseProtectTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& m_fCurrTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_fRemoveHudStateIntervalTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_fRemoveHudStateCurrTime() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_bRemoveHudState() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRushRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCrossHairScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGrapRushParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentEyePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRushingCenterPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayRemoveHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessGrapRushToGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PhysGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartGrapRushTransPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPreEndGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverEyeHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartGrapRushInNomalAndSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartGrapRushInFirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedStartGrapRushInThirdPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndGrapRushInNomalAndSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPreEndGrapRushInNomalAndSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPreEndGrapRushInFirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedPreEndGrapRushInThirdPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndGrapRushInFirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedEndGrapRushInThirdPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedGrapRush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedGrapRush_1p() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRushProtect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedGrapRush_3p() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrappleGunStickMiss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireStopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = float> T get_GrapRushInitSpeed() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36E9EF8))(this);
	}
	template <typename T = float> T get_GrapRushAccelSpeed() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EA090))(this);
	}
	template <typename T = float> T get_GrapRushMaxSpeed() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EA228))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EA3C0))(this, deltaTime);
	}
	template <typename T = void> T TickEffect(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EA800))(this, deltaTime);
	}
	template <typename T = void> T ProcessRushRotate() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EAC50))(this);
	}
	template <typename T = float> T GetCrossHairScale() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EB3A4))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPos() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EB5A8))(this);
	}
	template <typename T = void> T SetGrapRushParam(Il2CppVector3 InPos) {
		return ((T (*)(GrapRushComponent*, Il2CppVector3))(Il2CppBase() + 0x36EB67C))(this, InPos);
	}
	template <typename T = Il2CppVector3> T GetCurrentEyePos() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EB7F0))(this);
	}
	template <typename T = Il2CppVector3> T GetRushingCenterPos() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EBA6C))(this);
	}
	template <typename T = Il2CppVector3> T GetLeftHandPos() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EBCA4))(this);
	}
	template <typename T = void> T StartGrapRush(Il2CppVector3 InPos) {
		return ((T (*)(GrapRushComponent*, Il2CppVector3))(Il2CppBase() + 0x36EC0E8))(this, InPos);
	}
	template <typename T = void> T EndGrapRush() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EC8D8))(this);
	}
	template <typename T = void> T DelayRemoveHudState() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EA6B8))(this);
	}
	template <typename T = void> T ProcessGrapRushToGround() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36ECBEC))(this);
	}
	template <typename T = void> T PhysGrapRush(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36ECDC0))(this, deltaTime);
	}
	template <typename T = void> T SimulatedStartGrapRush(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EC48C))(this, deltaTime);
	}
	template <typename T = void> T StartGrapRushTransPoint(Il2CppVector3 vDestPoint) {
		return ((T (*)(GrapRushComponent*, Il2CppVector3))(Il2CppBase() + 0x36ECE70))(this, vDestPoint);
	}
	template <typename T = void> T SimulatedPreEndGrapRush() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36ED334))(this);
	}
	template <typename T = void> T SimulatedEndGrapRush() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EAFB4))(this);
	}
	template <typename T = void> T RecoverEyeHeight() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EDBC4))(this);
	}
	template <typename T = void> T SimulatedStartGrapRushInNomalAndSpectating() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36ED1E8))(this);
	}
	template <typename T = void> T SimulatedStartGrapRushInFirstPerson() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EDDCC))(this);
	}
	template <typename T = void> T SimulatedStartGrapRushInThirdPerson() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EDF88))(this);
	}
	template <typename T = void> T SimulatedEndGrapRushInNomalAndSpectating() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36ED610))(this);
	}
	template <typename T = void> T SimulatedPreEndGrapRushInNomalAndSpectating() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36ED4C4))(this);
	}
	template <typename T = void> T SimulatedPreEndGrapRushInFirstPerson() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EE508))(this);
	}
	template <typename T = void> T SimulatedPreEndGrapRushInThirdPerson() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EE6C4))(this);
	}
	template <typename T = void> T SimulatedEndGrapRushInFirstPerson() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EE124))(this);
	}
	template <typename T = void> T SimulatedEndGrapRushInThirdPerson() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EE2E0))(this);
	}
	template <typename T = void> T SimulatedGrapRush(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EA980))(this, deltaTime);
	}
	template <typename T = void> T SimulatedGrapRush_1p(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EE95C))(this, deltaTime);
	}
	template <typename T = bool> T ProcessRushProtect() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EE83C))(this);
	}
	template <typename T = void> T SimulatedGrapRush_3p(float deltaTime) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EF01C))(this, deltaTime);
	}
	template <typename T = void> T RestoreState() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EC9F8))(this);
	}
	template <typename T = void> T OnGrappleGunStickMiss() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EF58C))(this);
	}
	template <typename T = void> T PlayFireStopSound() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36ED80C))(this);
	}
	template <typename T = void> T OnPawnDead() {
		return ((T (*)(GrapRushComponent*))(Il2CppBase() + 0x36EF68C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GrapRushComponent*, float))(Il2CppBase() + 0x36EF77C))(this, P0);
	}

};

}
