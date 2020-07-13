#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CfmOcclusionCulling
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CfmOcclusionCulling"));
	}


	template <typename T = int32_t> static T SimpllyCallNative() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A750C))(0);
	}
	template <typename T = void> static T ProduceRemovedTileidToTmpBuffer(Il2CppArray<uintptr_t>* tileids, int32_t n) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x46A759C))(0, tileids, n);
	}
	template <typename T = void> static T ProduceOccluderToTmpBuffer(int32_t tileid, int32_t nOccluder, Il2CppArray<uintptr_t>* eachOccluderPolyCnts, Il2CppArray<uintptr_t>* eachOccluderAabb, Il2CppArray<uintptr_t>* eachOccluderAabbCenter, Il2CppArray<uintptr_t>* eachPolyPtCnts, Il2CppArray<uintptr_t>* normalForEachPoly, Il2CppArray<uintptr_t>* polyCenters, Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* IsOnContour) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46A763C))(0, tileid, nOccluder, eachOccluderPolyCnts, eachOccluderAabb, eachOccluderAabbCenter, eachPolyPtCnts, normalForEachPoly, polyCenters, points, IsOnContour);
	}
	template <typename T = void> static T ProduceHeightMapToTmpBuffer(float unitlen, float xoffsetAddl2W, float zoffsetAddl2W, int32_t xsize, int32_t zsize, Il2CppArray<uintptr_t>* heightmap) {
		return ((T (*)(void *, float, float, float, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46A7738))(0, unitlen, xoffsetAddl2W, zoffsetAddl2W, xsize, zsize, heightmap);
	}
	template <typename T = void> static T ProduceCmdCleanAllData() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A77FC))(0);
	}
	template <typename T = void> static T GetBufferDebugData(uintptr_t nTileidRemoverBuffer, uintptr_t nOccluderAddBuffer, uintptr_t nMainBuffer, uintptr_t srStepDebugNumber, uintptr_t srStepInPolygonDebugNumber) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46A788C))(0, nTileidRemoverBuffer, nOccluderAddBuffer, nMainBuffer, srStepDebugNumber, srStepInPolygonDebugNumber);
	}
	template <typename T = void> static T FillDebugData(Il2CppArray<uintptr_t>* outputRGBAbuf) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46A7944))(0, outputRGBAbuf);
	}
	template <typename T = void> static T FillOccluderDebugData(Il2CppArray<uintptr_t>* occluderCenters, uintptr_t n) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46A79DC))(0, occluderCenters, n);
	}
	template <typename T = int32_t> static T GetSftWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A7A7C))(0);
	}
	template <typename T = int32_t> static T GetSftHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A7B0C))(0);
	}
	template <typename T = void> static T SetMaxSqr2Cmas(uint32_t newMaxSqr2Cmas) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x46A7B9C))(0, newMaxSqr2Cmas);
	}
	template <typename T = void> static T SetWorldOriginShift(Il2CppVector3 shiftVector) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x46A7C34))(0, shiftVector);
	}
	template <typename T = void> static T INTERNAL_CALL_SetWorldOriginShift(uintptr_t shiftVector) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A7C54))(0, shiftVector);
	}
	template <typename T = void> static T AddDynamicObjectOccluderData(Il2CppVector3 normal, Il2CppVector3 center, Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* isOnConcaveContours, uint32_t gameObjectId, Il2CppArray<uintptr_t>* aabb, Il2CppVector3 aabbCenter) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, Il2CppArray<uintptr_t>*, Il2CppVector3))(Il2CppBase() + 0x46A7CEC))(0, normal, center, points, isOnConcaveContours, gameObjectId, aabb, aabbCenter);
	}
	template <typename T = void> static T INTERNAL_CALL_AddDynamicObjectOccluderData(uintptr_t normal, uintptr_t center, Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* isOnConcaveContours, uint32_t gameObjectId, Il2CppArray<uintptr_t>* aabb, uintptr_t aabbCenter) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46A7D5C))(0, normal, center, points, isOnConcaveContours, gameObjectId, aabb, aabbCenter);
	}
	template <typename T = bool> static T RemoveDynamicObjectOccluderData(uint32_t gameObjectId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x46A7E2C))(0, gameObjectId);
	}
	template <typename T = void> static T ClearAllDynamicObjectOccluderData() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A7EC4))(0);
	}

};

}
