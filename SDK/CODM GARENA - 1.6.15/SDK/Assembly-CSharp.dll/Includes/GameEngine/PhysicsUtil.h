#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PhysicsUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PhysicsUtil"));
	}

	template <typename T = int32_t> static T& TraceFlag_TraceWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TracePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceFireCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceStaticActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceAimAssistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TracePawnWithoutCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceStaticActorBig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceWalkableThirdPersonPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceStaticActor_NoWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TracePhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceSpecialLayerInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceCrossAssist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceBreakableActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceActor_NoWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceWorldStatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceWorldStatic_NoWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceStaticObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceStaticObject_NoWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TraceFlag_TraceWorldStaticVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TraceHeightOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TagAttackable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& bestResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& tempResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& kMaxHitCout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& PhysMatList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& PhysMatDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& m_PositionBelowWaterHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& m_CacheCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SphereCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SphereCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SphereCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SphereCheckNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointInTerrain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineIgnoreCheckNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SingleLineCheckNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLinePhysicsVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SingleLineCheckWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Square2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RaycastCapsule() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckAttackableTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckAttackableTargetNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckFireColliders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckFireCollidersNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckNoPhysics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FastSingleLineCheckNoPhysicsNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SingleLineCheckNoPhysicsNoAlloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MultiLineCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleImpactInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLayerMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWaterLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGroundPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInsideVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastOBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastOBB_CapsuleCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastOBB_BoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RaycastOBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RaycastAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInitPhysialList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPhysMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetMaterialType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPentrateCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetPentrateCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanIgnoreForBullet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleasePhysicsInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCapsuleByBottom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCapsuleByCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInWaterDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPositionBelowWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IgnoreLayerCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGlobalScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoxColliderContainAllSubMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CheckCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_CheckCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckColliderCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}

	template <typename T = bool> static T SphereCheck(Il2CppVector3 startTrace, Il2CppVector3 endTrace, float radius, int32_t traceFlag, uintptr_t hitPosition) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x274C590))(0, startTrace, endTrace, radius, traceFlag, hitPosition);
	}
	template <typename T = bool> static T SphereCheck_1(Il2CppVector3 startTrace, Il2CppVector3 endTrace, float radius, int32_t traceFlag, uintptr_t hitPosition, uintptr_t hitNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x274C7DC))(0, startTrace, endTrace, radius, traceFlag, hitPosition, hitNormal);
	}
	template <typename T = bool> static T SphereCheck_2(Il2CppVector3 startTrace, Il2CppVector3 direction, float radius, float distance, int32_t traceFlag, uintptr_t hitPosition, uintptr_t hitNormal) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x274C9C0))(0, startTrace, direction, radius, distance, traceFlag, hitPosition, hitNormal);
	}
	template <typename T = bool> static T SphereCheckNoAlloc(Il2CppVector3 startTrace, Il2CppVector3 direction, float radius, float distance, int32_t traceFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, int32_t, uintptr_t))(Il2CppBase() + 0x274D308))(0, startTrace, direction, radius, distance, traceFlag, impactInfo);
	}
	template <typename T = bool> static T GetPointInTerrain(float x, float y, float z, int32_t traceFlag, uintptr_t* point) {
		return ((T (*)(void *, float, float, float, int32_t, uintptr_t*))(Il2CppBase() + 0x274D64C))(0, x, y, z, traceFlag, point);
	}
	template <typename T = bool> static T SingleLineCheckNoAlloc(Il2CppVector3 startTrace, Il2CppVector3 endTrace, int32_t traceFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, int32_t, uintptr_t))(Il2CppBase() + 0x274D924))(0, startTrace, endTrace, traceFlag, impactInfo);
	}
	template <typename T = bool> static T SingleLineIgnoreCheckNoAlloc(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t traceFlag, uintptr_t impactInfo, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x274DAF8))(0, startTrace, direction, distance, traceFlag, impactInfo, queryTriggerInteraction);
	}
	template <typename T = bool> static T SingleLineCheck(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t traceFlag, uintptr_t impactInfo, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x274DF00))(0, startTrace, direction, distance, traceFlag, impactInfo, queryTriggerInteraction);
	}
	template <typename T = bool> static T SingleLineCheckNoAlloc_1(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t traceFlag, uintptr_t impactInfo, uintptr_t queryTriggerInteraction) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x270CA7C))(0, startTrace, direction, distance, traceFlag, impactInfo, queryTriggerInteraction);
	}
	template <typename T = bool> static T SingleLinePhysicsVolume(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x274E304))(0, startTrace, direction, distance);
	}
	template <typename T = bool> static T SingleLineCheckWorld(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, uintptr_t HitLocation) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x274E588))(0, startTrace, direction, distance, HitLocation);
	}
	template <typename T = bool> static T SingleLineCheckWorld_1(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, uintptr_t HitDistance, uintptr_t qti) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x274E8E4))(0, startTrace, direction, distance, HitDistance, qti);
	}
	template <typename T = bool> static T RaycastSphere(Il2CppVector3 Origin, float Radius, Il2CppVector3 Start, Il2CppVector3 Dir, float Length, uintptr_t impactInfo) {
		return ((T (*)(void *, Il2CppVector3, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x274EB1C))(0, Origin, Radius, Start, Dir, Length, impactInfo);
	}
	template <typename T = float> static T Square2D(Il2CppVector3 v) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x274EEC8))(0, v);
	}
	template <typename T = bool> static T RaycastCapsule(Il2CppVector3 center, Il2CppQuaternion rot, float height, float Radius, Il2CppVector3 Start, Il2CppVector3 End, uintptr_t impactInfo) {
		return ((T (*)(void *, Il2CppVector3, Il2CppQuaternion, float, float, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x274EFCC))(0, center, rot, height, Radius, Start, End, impactInfo);
	}
	template <typename T = bool> static T RaycastCapsule_1(uintptr_t coll, uintptr_t trans, Il2CppVector3 Start, Il2CppVector3 End, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x274F9B0))(0, coll, trans, Start, End, impactInfo);
	}
	template <typename T = bool> static T SingleLineCheckAttackableTarget(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t obstacleFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x274FE60))(0, attackableTarget, startTrace, direction, distance, obstacleFlag, impactInfo);
	}
	template <typename T = bool> static T SingleLineCheckAttackableTargetNoAlloc(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t obstacleFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x27504AC))(0, attackableTarget, startTrace, direction, distance, obstacleFlag, impactInfo);
	}
	template <typename T = bool> static T SingleLineCheckFireColliders(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x2750A2C))(0, attackableTarget, startTrace, direction, distance, impactInfo);
	}
	template <typename T = bool> static T SingleLineCheckFireCollidersNoAlloc(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x2750F28))(0, attackableTarget, startTrace, direction, distance, impactInfo);
	}
	template <typename T = bool> static T SingleLineCheckNoPhysics(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t obstacleFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x2751358))(0, attackableTarget, startTrace, direction, distance, obstacleFlag, impactInfo);
	}
	template <typename T = bool> static T FastSingleLineCheckNoPhysicsNoAlloc(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t obstacleFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x275231C))(0, attackableTarget, startTrace, direction, distance, obstacleFlag, impactInfo);
	}
	template <typename T = bool> static T SingleLineCheckNoPhysicsNoAlloc(uintptr_t attackableTarget, Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t obstacleFlag, uintptr_t impactInfo) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t))(Il2CppBase() + 0x2752D38))(0, attackableTarget, startTrace, direction, distance, obstacleFlag, impactInfo);
	}
	template <typename T = bool> static T MultiLineCheck(Il2CppVector3 startTrace, Il2CppVector3 direction, float distance, int32_t traceFlag, uintptr_t impactList, bool blockByStaticActor) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, int32_t, uintptr_t, bool))(Il2CppBase() + 0x27537D8))(0, startTrace, direction, distance, traceFlag, impactList, blockByStaticActor);
	}
	template <typename T = void> static T RecycleImpactInfo(Il2CppList<uintptr_t>* ImpactList) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27540DC))(0, ImpactList);
	}
	template <typename T = int32_t> static T GetLayerMask(int32_t traceFlag) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x274CC50))(0, traceFlag);
	}
	template <typename T = int32_t> static T RemoveWaterLayer(int32_t layerMask) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x274E7C8))(0, layerMask);
	}
	template <typename T = Il2CppVector3> static T GetGroundPosition(Il2CppVector3 startPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x2754254))(0, startPos);
	}
	template <typename T = bool> static T IsInsideVolume(uintptr_t pawn, uintptr_t volume) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x27544BC))(0, pawn, volume);
	}
	template <typename T = bool> static T RaycastOBB(uintptr_t col, uintptr_t trans, Il2CppVector3 start, Il2CppVector3 end, uintptr_t result) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2751E8C))(0, col, trans, start, end, result);
	}
	template <typename T = bool> static T RaycastOBB_CapsuleCollider(uintptr_t col, uintptr_t trans, Il2CppVector3 start, Il2CppVector3 end, uintptr_t hitPoint) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2754720))(0, col, trans, start, end, hitPoint);
	}
	template <typename T = bool> static T RaycastOBB_BoxCollider(uintptr_t col, uintptr_t trans, Il2CppVector3 start, Il2CppVector3 end, uintptr_t hitPoint) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x2754B14))(0, col, trans, start, end, hitPoint);
	}
	template <typename T = bool> static T RaycastOBB_1(Il2CppVector3 center, Il2CppVector3 extent, uintptr_t trans, Il2CppVector3 start, Il2CppVector3 end, uintptr_t* hitDis) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x27552C8))(0, center, extent, trans, start, end, hitDis);
	}
	template <typename T = bool> static T RaycastAABB(Il2CppVector3 center, Il2CppVector3 extent, Il2CppVector3 start, Il2CppVector3 end, uintptr_t* hitDis) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x2754E20))(0, center, extent, start, end, hitDis);
	}
	template <typename T = void> static T CheckInitPhysialList() {
		return ((T (*)(void *))(Il2CppBase() + 0x2755504))(0);
	}
	template <typename T = uintptr_t> static T FindPhysMat(Il2CppString* inStr) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x27559A4))(0, inStr);
	}
	template <typename T = uintptr_t> static T GetMaterialType(uintptr_t phyMat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2726114))(0, phyMat);
	}
	template <typename T = uintptr_t> static T GetMaterialType_1(Il2CppString* phyMatName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2755B94))(0, phyMatName);
	}
	template <typename T = int32_t> static T GetPentrateCode(uintptr_t pmt) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2755D40))(0, pmt);
	}
	template <typename T = int32_t> static T GetPentrateCode_1(uintptr_t phyMa) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2755E3C))(0, phyMa);
	}
	template <typename T = bool> static T CanIgnoreForBullet(uintptr_t phyMat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2755F38))(0, phyMat);
	}
	template <typename T = void> static T ReleasePhysicsInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2756038))(0);
	}
	template <typename T = bool> static T CheckCapsuleByBottom(Il2CppVector3 bottom, float columnHeight, float radius, int32_t traceFlag) {
		return ((T (*)(void *, Il2CppVector3, float, float, int32_t))(Il2CppBase() + 0x2756140))(0, bottom, columnHeight, radius, traceFlag);
	}
	template <typename T = bool> static T CheckCapsuleByCenter(Il2CppVector3 center, float columnHeight, float radius, int32_t traceFlag) {
		return ((T (*)(void *, Il2CppVector3, float, float, int32_t))(Il2CppBase() + 0x275630C))(0, center, columnHeight, radius, traceFlag);
	}
	template <typename T = bool> static T CheckSphere(Il2CppVector3 center, float radius, int32_t traceFlag) {
		return ((T (*)(void *, Il2CppVector3, float, int32_t))(Il2CppBase() + 0x2756630))(0, center, radius, traceFlag);
	}
	template <typename T = float> static T GetInWaterDepth(Il2CppVector3 position, float distance) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x2728A40))(0, position, distance);
	}
	template <typename T = bool> static T CheckPositionBelowWater(Il2CppVector3 position) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x2756778))(0, position);
	}
	template <typename T = bool> static T CheckInWater(Il2CppVector3 position, float distance) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x2756AB8))(0, position, distance);
	}
	template <typename T = void> static T IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool isIgnore) {
		return ((T (*)(void *, int32_t, int32_t, bool))(Il2CppBase() + 0x2756C50))(0, layer1, layer2, isIgnore);
	}
	template <typename T = void> static T SetGlobalScale(uintptr_t t, Il2CppVector3 scale) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x2756D58))(0, t, scale);
	}
	template <typename T = void> static T AddBoxColliderContainAllSubMesh(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2756F04))(0, go);
	}
	template <typename T = bool> static T CheckCollision(uintptr_t capsuleCollider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2757870))(0, capsuleCollider);
	}
	template <typename T = bool> static T CheckCollision_1(uintptr_t boxCollider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2757EAC))(0, boxCollider);
	}
	template <typename T = bool> static T CheckCollision_2(uintptr_t sphereCollider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2758164))(0, sphereCollider);
	}
	template <typename T = bool> static T CheckColliderCollision(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x27583AC))(0, collider);
	}

};

}
