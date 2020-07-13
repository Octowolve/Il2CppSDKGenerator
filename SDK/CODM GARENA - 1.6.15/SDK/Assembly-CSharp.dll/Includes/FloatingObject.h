#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FloatingObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FloatingObject"));
	}

	template <typename T = bool> T& DEBUG() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ownerVehicle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& rb() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& meshTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& originalMesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dummyMeshTris() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dummyMeshVerts() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& dummyMeshTriCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& dummyMeshVertCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& previewDummyMesh() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& simplifyMesh() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& convexMesh() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& underwaterTris() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& underwaterTriCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& simplificationRatio() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isTouchingWater() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& dynamicForceFactor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& fluidDensity() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& water() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& currentWaterHeight() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& simulate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& sleepPositionTreshold() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& sleepAngleTreshold() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& sleep() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& rbSleepPosition() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& rbSleepUp() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector3> T& meshSize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& sleepEnabled() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waveForcePointsX() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& waveForcePointsY() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& waveCycleTimeX() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& waveCycleTimeY() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& maxWaveForce() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& waveRandomRatio() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& currentWaveCycleTimeX() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& currentWaveCycleTimeY() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& objVerticesGlobal() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& distancesToSurface() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& vd0() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& vd1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& vd2() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& H() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& M() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppVector3> T& L() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector3> T& I_M() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppVector3> T& I_L() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppVector3> T& J_M() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = Il2CppVector3> T& J_H() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& h_H() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& h_M() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& h_L() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& M_index() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sortedData() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& waterY() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector3> T& globalPos() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& refreshWaterCDTime() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isNeedRefreshWaterHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWaterHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaveForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWaveCycleTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWaveVelocityWithoutDriver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyWaveForce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaveCurveValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManipulateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDistanceToSurface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWaterHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PointInWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateSimplifiedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateSplitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TwoUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OneUnderWater() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SignedVolumeOfTriangle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VolumeOfMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateConvexMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC4F40))(this);
	}
	template <typename T = bool> T isNeedRefreshWaterHeight() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC59BC))(this);
	}
	template <typename T = void> T RefreshWaterHeight(bool isForce) {
		return ((T (*)(FloatingObject*, bool))(Il2CppBase() + 0x3CC559C))(this, isForce);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC5BD4))(this);
	}
	template <typename T = void> T SetWaveForce() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC6BA4))(this);
	}
	template <typename T = float> T RefreshWaveCycleTime(float waveCycleTime, uintptr_t currentWaveCycleTime) {
		return ((T (*)(FloatingObject*, float, uintptr_t))(Il2CppBase() + 0x3CC710C))(this, waveCycleTime, currentWaveCycleTime);
	}
	template <typename T = void> T SetWaveVelocityWithoutDriver() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC6E70))(this);
	}
	template <typename T = void> T ApplyWaveForce(float randomWaveCycleTime, float currentWaveCycleTime, Il2CppArray<uintptr_t>* waveForcePoints) {
		return ((T (*)(FloatingObject*, float, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CC7240))(this, randomWaveCycleTime, currentWaveCycleTime, waveForcePoints);
	}
	template <typename T = float> T GetWaveCurveValue(float t, float cycleTime, float maxWaveValue) {
		return ((T (*)(FloatingObject*, float, float, float))(Il2CppBase() + 0x3CC7488))(this, t, cycleTime, maxWaveValue);
	}
	template <typename T = uintptr_t> T ManipulateMesh(uintptr_t dummyMesh) {
		return ((T (*)(FloatingObject*, uintptr_t))(Il2CppBase() + 0x3CC761C))(this, dummyMesh);
	}
	template <typename T = float> T GetDistanceToSurface(Il2CppVector3 p) {
		return ((T (*)(FloatingObject*, Il2CppVector3))(Il2CppBase() + 0x3CC78BC))(this, p);
	}
	template <typename T = float> T GetWaterHeight(float x, float z) {
		return ((T (*)(FloatingObject*, float, float))(Il2CppBase() + 0x3CC607C))(this, x, z);
	}
	template <typename T = bool> T PointInWater(Il2CppVector3 point) {
		return ((T (*)(FloatingObject*, Il2CppVector3))(Il2CppBase() + 0x3CC79A0))(this, point);
	}
	template <typename T = uintptr_t> T GenerateMesh(Il2CppArray<uintptr_t>* vertices, Il2CppArray<uintptr_t>* triangles) {
		return ((T (*)(FloatingObject*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CC7A88))(this, vertices, triangles);
	}
	template <typename T = uintptr_t> T GenerateSimplifiedMesh(uintptr_t om, float ratio) {
		return ((T (*)(FloatingObject*, uintptr_t, float))(Il2CppBase() + 0x3CC7754))(this, om, ratio);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GenerateSplitMesh() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC613C))(this);
	}
	template <typename T = void> T TwoUnderWater(Il2CppArray<uintptr_t>* vertexData) {
		return ((T (*)(FloatingObject*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CC7BC0))(this, vertexData);
	}
	template <typename T = void> T OneUnderWater(Il2CppArray<uintptr_t>* vertexData) {
		return ((T (*)(FloatingObject*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CC7FCC))(this, vertexData);
	}
	template <typename T = float> T SignedVolumeOfTriangle(Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 p3) {
		return ((T (*)(FloatingObject*, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3CC8348))(this, p1, p2, p3);
	}
	template <typename T = float> T VolumeOfMesh(uintptr_t mesh) {
		return ((T (*)(FloatingObject*, uintptr_t))(Il2CppBase() + 0x3CC84A0))(this, mesh);
	}
	template <typename T = uintptr_t> T GenerateConvexMesh(uintptr_t mesh) {
		return ((T (*)(FloatingObject*, uintptr_t))(Il2CppBase() + 0x3CC7814))(this, mesh);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(FloatingObject*))(Il2CppBase() + 0x3CC8774))(this);
	}

};

}
