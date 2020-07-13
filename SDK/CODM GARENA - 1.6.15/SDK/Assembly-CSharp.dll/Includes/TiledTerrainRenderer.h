#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledTerrainRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledTerrainRenderer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& lods() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tileBounds() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& meshFilter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& meshRenderer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& meshCollider() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = double> T& nextUpdateTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& lastCameraPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& updateInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& immediateUpdateThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& immediateLoadDistThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& boundsDistToCameraSqr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& loadingLOD() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& activeLOD() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& highestLOD() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& abandonAsyncLoadLOD() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> static T& LOD_LOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& checkMeshRenderVisibility() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = float> static T& unLoadDistacneScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VisibilityTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadLODImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadLODAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadLODAsyncCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadHighestLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TiledTerrainRenderer*))(Il2CppBase() + 0x46612A4))(this);
	}
	template <typename T = void> T UpdateLOD(Il2CppVector3 cameraPos) {
		return ((T (*)(TiledTerrainRenderer*, Il2CppVector3))(Il2CppBase() + 0x4660478))(this, cameraPos);
	}
	template <typename T = void> T ShowLOD(uintptr_t lod, bool loadImmediately) {
		return ((T (*)(TiledTerrainRenderer*, uintptr_t, bool))(Il2CppBase() + 0x4661610))(this, lod, loadImmediately);
	}
	template <typename T = void> T ForceLOD(int32_t lodIndex) {
		return ((T (*)(TiledTerrainRenderer*, int32_t))(Il2CppBase() + 0x4660C24))(this, lodIndex);
	}
	template <typename T = bool> T VisibilityTest(Il2CppVector3 cameraPos, uintptr_t lod, uintptr_t loadImmediately) {
		return ((T (*)(TiledTerrainRenderer*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x46613A0))(this, cameraPos, lod, loadImmediately);
	}
	template <typename T = void> T LoadLODImmediate(uintptr_t lod) {
		return ((T (*)(TiledTerrainRenderer*, uintptr_t))(Il2CppBase() + 0x4661904))(this, lod);
	}
	template <typename T = void> T LoadLODAsync(uintptr_t lod) {
		return ((T (*)(TiledTerrainRenderer*, uintptr_t))(Il2CppBase() + 0x4661A90))(this, lod);
	}
	template <typename T = void> T LoadLODAsyncCallback(uintptr_t mesh) {
		return ((T (*)(TiledTerrainRenderer*, uintptr_t))(Il2CppBase() + 0x4661DE8))(this, mesh);
	}
	template <typename T = void> T ApplyLOD(uintptr_t lod) {
		return ((T (*)(TiledTerrainRenderer*, uintptr_t))(Il2CppBase() + 0x4661BF0))(this, lod);
	}
	template <typename T = void> T UnloadLOD(uintptr_t lod) {
		return ((T (*)(TiledTerrainRenderer*, uintptr_t))(Il2CppBase() + 0x46617D8))(this, lod);
	}
	template <typename T = void> T UnloadHighestLOD() {
		return ((T (*)(TiledTerrainRenderer*))(Il2CppBase() + 0x466098C))(this);
	}

};

}
