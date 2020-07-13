#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Terrain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Terrain"));
	}


	template <typename T = uintptr_t> T GetTerrainDataInternal() {
		return ((T (*)(Terrain*))(Il2CppBase() + 0x4E8B728))(this);
	}
	template <typename T = uintptr_t> T get_terrainData() {
		return ((T (*)(Terrain*))(Il2CppBase() + 0x4E8B7C0))(this);
	}
	template <typename T = void> T set_terrainData(uintptr_t value) {
		return ((T (*)(Terrain*, uintptr_t))(Il2CppBase() + 0x4E8B858))(this, value);
	}
	template <typename T = void> T set_basemapDistance(float value) {
		return ((T (*)(Terrain*, float))(Il2CppBase() + 0x4E8B8F8))(this, value);
	}
	template <typename T = void> T set_lightmapIndex(int32_t value) {
		return ((T (*)(Terrain*, int32_t))(Il2CppBase() + 0x4E8B998))(this, value);
	}
	template <typename T = void> T set_lightmapScaleOffset(uintptr_t value) {
		return ((T (*)(Terrain*, uintptr_t))(Il2CppBase() + 0x4E8BA38))(this, value);
	}
	template <typename T = void> T INTERNAL_set_lightmapScaleOffset(uintptr_t value) {
		return ((T (*)(Terrain*, uintptr_t))(Il2CppBase() + 0x4E8BA5C))(this, value);
	}
	template <typename T = void> T set_materialType(uintptr_t value) {
		return ((T (*)(Terrain*, uintptr_t))(Il2CppBase() + 0x4E8BAFC))(this, value);
	}
	template <typename T = void> T set_materialTemplate(uintptr_t value) {
		return ((T (*)(Terrain*, uintptr_t))(Il2CppBase() + 0x4E8BB9C))(this, value);
	}
	template <typename T = void> T SetNeighbors(uintptr_t left, uintptr_t top, uintptr_t right, uintptr_t bottom) {
		return ((T (*)(Terrain*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E8BC3C))(this, left, top, right, bottom);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(Terrain*))(Il2CppBase() + 0x4E8BCEC))(this);
	}

};

}
