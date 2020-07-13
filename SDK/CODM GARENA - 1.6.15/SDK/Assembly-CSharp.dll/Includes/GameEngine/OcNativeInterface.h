#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class OcNativeInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "OcNativeInterface"));
	}

	template <typename T = uint32_t> static T& Default_MaxSqr2Cams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpllyCallNative() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceRemovedTileidToTmpBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceOccluderToTmpBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceHeightMapToTmpBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProduceCmdCleanAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBufferDebugData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillDebugData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillOccluderDebugData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSftWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSftHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaxSqr2Cmas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDynamicObjectOccluderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDynamicObjectOccluderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAllDynamicObjectOccluderData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = int32_t> static T SimpllyCallNative() {
		return ((T (*)(void *))(Il2CppBase() + 0x271C938))(0);
	}
	template <typename T = void> static T ProduceRemovedTileidToTmpBuffer(Il2CppArray<uintptr_t>* tileids, int32_t n) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x271C9D8))(0, tileids, n);
	}
	template <typename T = void> static T ProduceOccluderToTmpBuffer(int32_t tileid, int32_t nOccluder, Il2CppArray<uintptr_t>* eachOccluderPolyCnts, Il2CppArray<uintptr_t>* eachOccluderAabb, Il2CppArray<uintptr_t>* eachOccluderAabbCenter, Il2CppArray<uintptr_t>* eachPolyPtCnts, Il2CppArray<uintptr_t>* normalForEachPoly, Il2CppArray<uintptr_t>* polyCenters, Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* IsOnContour) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x271CA90))(0, tileid, nOccluder, eachOccluderPolyCnts, eachOccluderAabb, eachOccluderAabbCenter, eachPolyPtCnts, normalForEachPoly, polyCenters, points, IsOnContour);
	}
	template <typename T = void> static T ProduceHeightMapToTmpBuffer(float unitlen, float xoffsetAddl2W, float zoffsetAddl2W, int32_t xsize, int32_t zsize, Il2CppArray<uintptr_t>* heightmap) {
		return ((T (*)(void *, float, float, float, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x271CBAC))(0, unitlen, xoffsetAddl2W, zoffsetAddl2W, xsize, zsize, heightmap);
	}
	template <typename T = void> static T ProduceCmdCleanAllData() {
		return ((T (*)(void *))(Il2CppBase() + 0x271CCA8))(0);
	}
	template <typename T = void> static T GetBufferDebugData(uintptr_t nTileidRemoverBuffer, uintptr_t nOccluderAddBuffer, uintptr_t nMainBuffer, uintptr_t srStepDebugNumber, uintptr_t srStepInPolygonDebugNumber) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x271CD48))(0, nTileidRemoverBuffer, nOccluderAddBuffer, nMainBuffer, srStepDebugNumber, srStepInPolygonDebugNumber);
	}
	template <typename T = void> static T FillDebugData(Il2CppArray<uintptr_t>* outputRGBAbuf) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x271CE34))(0, outputRGBAbuf);
	}
	template <typename T = void> static T FillOccluderDebugData(Il2CppArray<uintptr_t>* occluderCenters, uintptr_t n) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x271CEE0))(0, occluderCenters, n);
	}
	template <typename T = int32_t> static T GetSftWidth() {
		return ((T (*)(void *))(Il2CppBase() + 0x271CF98))(0);
	}
	template <typename T = int32_t> static T GetSftHeight() {
		return ((T (*)(void *))(Il2CppBase() + 0x271D038))(0);
	}
	template <typename T = void> static T SetMaxSqr2Cmas(uint32_t newMaxSqr2Cams) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x271D0D8))(0, newMaxSqr2Cams);
	}
	template <typename T = void> static T AddDynamicObjectOccluderData(Il2CppVector3 normal, Il2CppVector3 center, Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* isOnConcaveContours, uint32_t gameObjectId, Il2CppArray<uintptr_t>* aabb, Il2CppVector3 aabbCenter) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uint32_t, Il2CppArray<uintptr_t>*, Il2CppVector3))(Il2CppBase() + 0x271D184))(0, normal, center, points, isOnConcaveContours, gameObjectId, aabb, aabbCenter);
	}
	template <typename T = bool> static T RemoveDynamicObjectOccluderData(uint32_t gameObjectId) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x271D2D8))(0, gameObjectId);
	}
	template <typename T = void> static T ClearAllDynamicObjectOccluderData() {
		return ((T (*)(void *))(Il2CppBase() + 0x271C7C8))(0);
	}

};

}
