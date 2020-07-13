#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace SceneTilePartition {

class SceneTileGrassBuilderGPU
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SceneTilePartition", "SceneTileGrassBuilder_GPU"));
	}

	template <typename T = bool> T& m_IsPainting() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& kCellDensityPatchSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& kCellHeightPatchSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RefGrassMeshs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RefGrassMaterials() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& HeightMapStep() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DenseFactor() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& HeightDensityMapSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DensityMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& LeftBottomWorldPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& TopRightWorldPos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TerrainMeshColliders() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TerrainRenderer() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LightmapScaleOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& EnableVTF() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& BrushInfo() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& CurrentPaintingCellIndex() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& CurrentCellGrassColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CellColorList() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& MaxGrassCountPerNode() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& CellRow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& CellCol() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& SplitMapNum_PerRow() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GrassLightmap() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TerrainRenderers() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TerrainRendererBounds() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
