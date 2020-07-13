#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadtreeTerrainExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadtreeTerrainExportConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& terrainRenderers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& levelOfDetails() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& useCompactVertexFormat() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& compensateRootSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& boundaryPreservingFactor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& aggregationThreshold() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& skirtExtent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& skirtSink() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& skyOnlyMat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& originalMeshSimplified() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& vertexPercenetForLOD0() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& skyOnlyMeshVertexPercent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_levels() {
		return ((T (*)(QuadtreeTerrainExportConfig*))(Il2CppBase() + 0x3DB8CCC))(this);
	}

};

}
