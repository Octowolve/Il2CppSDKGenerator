#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TiledTerrain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TiledTerrain"));
	}

	template <typename T = int32_t> static T& LOD_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& allTerrainRenderers() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& sharedLODMaterials() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickStreaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadHighestLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(TiledTerrain*))(Il2CppBase() + 0x466012C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TiledTerrain*))(Il2CppBase() + 0x46601C4))(this);
	}
	template <typename T = void> T TickStreaming(float deltaTime, Il2CppVector3 cameraPos, Il2CppVector3 playerPos, float distanceToGround, uintptr_t camera) {
		return ((T (*)(TiledTerrain*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x466025C))(this, deltaTime, cameraPos, playerPos, distanceToGround, camera);
	}
	template <typename T = bool> static T IsValidLOD(int32_t lodIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4660718))(0, lodIndex);
	}
	template <typename T = void> T UnloadHighestLOD() {
		return ((T (*)(TiledTerrain*))(Il2CppBase() + 0x46607C0))(this);
	}
	template <typename T = void> T ForceLOD(int32_t lodIndex) {
		return ((T (*)(TiledTerrain*, int32_t))(Il2CppBase() + 0x4660A3C))(this, lodIndex);
	}
	template <typename T = void> T xLuaBaseProxy_TickStreaming(float P0, Il2CppVector3 P1, Il2CppVector3 P2, float P3, uintptr_t P4) {
		return ((T (*)(TiledTerrain*, float, Il2CppVector3, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4660D14))(this, P0, P1, P2, P3, P4);
	}

};

}
