#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityTerrainTileManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityTerrainTileManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mTerrainTiles() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& originalTerrainData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& mTerrainPositons() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& lockTilePosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& drawTileBounds() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& sourceTerrainSplat() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& exportTerrainSplat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTerrains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_TerrainTiles() {
		return ((T (*)(UnityTerrainTileManager*))(Il2CppBase() + 0x4221864))(this);
	}
	template <typename T = void> T SetTerrains(Il2CppList<uintptr_t>* _slicedTerrains, uintptr_t _originalTerrainData) {
		return ((T (*)(UnityTerrainTileManager*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x422186C))(this, _slicedTerrains, _originalTerrainData);
	}

};

}
