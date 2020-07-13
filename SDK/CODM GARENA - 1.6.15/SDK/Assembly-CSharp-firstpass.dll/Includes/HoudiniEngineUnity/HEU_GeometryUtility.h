#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGeometryUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GeometryUtility"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GeneratePerTriangle(uintptr_t meshSrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BA1D10))(0, meshSrc);
	}
	template <typename T = void> static T GenerateSecondaryUVSet(uintptr_t meshsrc) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BA1DD0))(0, meshsrc);
	}
	template <typename T = void> static T CalculateMeshTangents(uintptr_t mesh) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BA1E8C))(0, mesh);
	}
	template <typename T = bool> static T GenerateTerrainFromVolume(uintptr_t session, uintptr_t volumeInfo, int32_t geoID, int32_t partID, uintptr_t houdiniAsset, uintptr_t gameObject, uintptr_t* terrainData, uintptr_t* volumePositionOffset) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2BA27A0))(0, session, volumeInfo, geoID, partID, houdiniAsset, gameObject, terrainData, volumePositionOffset);
	}
	template <typename T = uintptr_t> static T GenerateCubeMeshFromPoints(Il2CppArray<uintptr_t>* points, Il2CppArray<uintptr_t>* pointsColor, float size) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x2BA3D60))(0, points, pointsColor, size);
	}

};

}
