#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAssetTerrainComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAssetTerrainComponent"));
	}

	template <typename T = bool> T& IsRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LayerNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& XMinInRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ZMinInRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& XMinInHoudini() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ZMinInHoudini() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& XHoudiniBegin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ZHoudiniBegin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& XHoudiniSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ZHoudiniSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& XTileCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ZTileCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& XTileBegin() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ZTileBegin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& TileSize() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& Options() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
