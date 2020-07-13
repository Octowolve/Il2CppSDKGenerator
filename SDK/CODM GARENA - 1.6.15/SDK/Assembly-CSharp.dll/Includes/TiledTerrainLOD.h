#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledTerrainLOD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledTerrainLOD"));
	}

	template <typename T = int32_t> T& lodIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& lodDistance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& meshAssetPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& meshAssetName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& debugColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& vertexCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& triangleCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _loadedMesh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& loadTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_loadedMesh() {
		return ((T (*)(TiledTerrainLOD*))(Il2CppBase() + 0x4660EE8))(this);
	}
	template <typename T = void> T set_loadedMesh(uintptr_t value) {
		return ((T (*)(TiledTerrainLOD*, uintptr_t))(Il2CppBase() + 0x4660EF0))(this, value);
	}
	template <typename T = float> T get_loadTime() {
		return ((T (*)(TiledTerrainLOD*))(Il2CppBase() + 0x4661014))(this);
	}
	template <typename T = void> T set_loadTime(float value) {
		return ((T (*)(TiledTerrainLOD*, float))(Il2CppBase() + 0x466100C))(this, value);
	}
	template <typename T = bool> T get_MeshLoaded() {
		return ((T (*)(TiledTerrainLOD*))(Il2CppBase() + 0x466101C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TiledTerrainLOD*))(Il2CppBase() + 0x46610CC))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(TiledTerrainLOD*))(Il2CppBase() + 0x46611D0))(this);
	}

};

}
