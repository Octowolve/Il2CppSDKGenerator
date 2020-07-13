#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SignSystem {

class SignsDetector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SignSystem", "SignsDetector"));
	}

	template <typename T = float> T& DetectMaxDist() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& SignOutlineEffectMaxDist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& CheckAddColliderInterval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& CheckAimingSignInterval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& CheckSignsInViewFrustumInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CheckChangeSignsEffectStateInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& CheckRemoveSignIndicatorInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LastCheckAddColliderTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& LastCheckAimingSignTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& LastCheckSignsInViewFrustumTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& LastCheckChangeSignsEffectStateTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& LastCheckRemoveSignIndicatorTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& CurrAimingTargetInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SignsMgr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& SignIndicatorsMangerInst() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEnableSignsDetectorActively() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanEnableSignsDetectorPassively() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TraceTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSignsInViewFrustum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckSignsInViewFrustum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckChangeSignsEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckChangeSignsEffectState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAimingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedCheckAimingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRemoveSignIndicators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartTracePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraAimRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTraceFlagIgnoreVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObjectInFrustum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPointInViewPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SqrtDistToLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistToLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistToPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T get_CurrAimingTargetInfo() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F2F54))(this);
	}
	template <typename T = void> T set_CurrAimingTargetInfo(uintptr_t value) {
		return ((T (*)(SignsDetector*, uintptr_t))(Il2CppBase() + 0x38F67DC))(this, value);
	}
	template <typename T = uintptr_t> T get_SignIndicatorsManger() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F67E4))(this);
	}
	template <typename T = void> T Init(uintptr_t InSignsMgr, float InDetectMaxDist, float InSignOutlineEffectMaxDist) {
		return ((T (*)(SignsDetector*, uintptr_t, float, float))(Il2CppBase() + 0x38F67EC))(this, InSignsMgr, InDetectMaxDist, InSignOutlineEffectMaxDist);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SignsDetector*, float))(Il2CppBase() + 0x38F68CC))(this, DeltaTime);
	}
	template <typename T = bool> T CanEnableSignsDetectorActively() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F2C24))(this);
	}
	template <typename T = bool> T CanEnableSignsDetectorPassively() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F6E88))(this);
	}
	template <typename T = bool> T TraceTarget(uintptr_t HitImpactInfo, int32_t TraceFlag) {
		return ((T (*)(SignsDetector*, uintptr_t, int32_t))(Il2CppBase() + 0x38F72B8))(this, HitImpactInfo, TraceFlag);
	}
	template <typename T = void> T CheckSignsInViewFrustum() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F6FBC))(this);
	}
	template <typename T = bool> T NeedCheckSignsInViewFrustum() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F77DC))(this);
	}
	template <typename T = void> T CheckChangeSignsEffectState() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F7D78))(this);
	}
	template <typename T = bool> T NeedCheckChangeSignsEffectState() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F7FA4))(this);
	}
	template <typename T = void> T CheckAimingTarget() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F6B3C))(this);
	}
	template <typename T = bool> T NeedCheckAimingTarget() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F8044))(this);
	}
	template <typename T = void> T CheckAddSignIndicators() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F6A90))(this);
	}
	template <typename T = void> T CheckRemoveSignIndicators() {
		return ((T (*)(SignsDetector*))(Il2CppBase() + 0x38F6DDC))(this);
	}
	template <typename T = Il2CppVector3> static T GetStartTracePosition(uintptr_t LocalPawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38F7504))(0, LocalPawn);
	}
	template <typename T = Il2CppVector3> static T GetTraceDir(uintptr_t LocalPawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38F763C))(0, LocalPawn);
	}
	template <typename T = Il2CppQuaternion> static T GetCameraAimRotation(uintptr_t LocalPawn) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x38F80E4))(0, LocalPawn);
	}
	template <typename T = int32_t> static T GetTraceFlag() {
		return ((T (*)(void *))(Il2CppBase() + 0x38F7744))(0);
	}
	template <typename T = int32_t> static T GetTraceFlagIgnoreVehicle() {
		return ((T (*)(void *))(Il2CppBase() + 0x38F82F4))(0);
	}
	template <typename T = bool> static T IsObjectInFrustum(uintptr_t Object, bool ObjectCanCastShadow) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x38F838C))(0, Object, ObjectCanCastShadow);
	}
	template <typename T = bool> static T IsPointInViewPort(uintptr_t InCamera, Il2CppVector3 InPoint, uintptr_t RefViewPortPos) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x38F7A00))(0, InCamera, InPoint, RefViewPortPos);
	}
	template <typename T = uintptr_t> static T GetCurrCamera() {
		return ((T (*)(void *))(Il2CppBase() + 0x38F7884))(0);
	}
	template <typename T = float> static T SqrtDistToLocalPlayer(Il2CppVector3 CurrPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x38EA4E0))(0, CurrPos);
	}
	template <typename T = float> static T DistToLocalPlayer(Il2CppVector3 CurrPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x38F7BBC))(0, CurrPos);
	}
	template <typename T = float> static T DistToPlayer(Il2CppVector3 CurrPos, uint32_t PlayerID) {
		return ((T (*)(void *, Il2CppVector3, uint32_t))(Il2CppBase() + 0x38F5AE8))(0, CurrPos, PlayerID);
	}
	template <typename T = int32_t> static T GetDistLOD(float Dist, Il2CppArray<uintptr_t>* DistLOD) {
		return ((T (*)(void *, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x38F645C))(0, Dist, DistLOD);
	}
	template <typename T = void*> static T GetBounds(uintptr_t Object, bool CheckVisible, bool IncludeParticleSystem) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x38E8848))(0, Object, CheckVisible, IncludeParticleSystem);
	}

};

}
