#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledTerrainExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledTerrainExportConfig"));
	}

	template <typename T = Il2CppString*> T& exportTerrainTag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& terrainToMeshUpdate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& terrainToMesh() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& threadedMeshSimplify() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& skyOnlyMeshTrianglePercent() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& skyOnlyMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& exportLODs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
