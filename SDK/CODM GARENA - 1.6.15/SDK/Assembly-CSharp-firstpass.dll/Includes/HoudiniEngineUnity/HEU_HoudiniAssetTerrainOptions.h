#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetTerrainOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetTerrainOptions"));
	}

	template <typename T = Il2CppString*> T& TerrainName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& TerrainSplatLayers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ComponentSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& TerrainMinHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TerrainMaxHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& basemapDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& GameObjectLayer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TerrainMaterialTemplate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ExportHeightmapExrPath() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExportAlphamapExrPaths() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
