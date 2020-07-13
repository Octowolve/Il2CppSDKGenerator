#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FarTerrainExportConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FarTerrainExportConfig"));
	}

	template <typename T = uintptr_t> T& houdiniFarTerrainPrefab() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& quality() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& exportUV() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& exportNormals() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = int32_t> T& basemapResolution() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& basemapSplatsTilingScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& farTerrainPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& runtimePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& terrainGroups() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lowLevelQuality() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
