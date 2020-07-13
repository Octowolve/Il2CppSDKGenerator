#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneStreaming
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneStreaming"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sceneLODs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _targetLODIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _sycLoad() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cell() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& realBounds() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& streamer() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& virtualScene() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& distSqrToPlayer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSceneStreamingLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadedLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLODLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateStreamingLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScenePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = int32_t> T get_targetLODIndex() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF2E4))(this);
	}
	template <typename T = bool> T get_syncLoad() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF2EC))(this);
	}
	template <typename T = uintptr_t> T get_cellBounds() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF2F4))(this);
	}
	template <typename T = uintptr_t> T get_layerType() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF30C))(this);
	}
	template <typename T = float> T get_sceneObjectSize() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF338))(this);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF35C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF514))(this);
	}
	template <typename T = void> T SetTargetLOD(int32_t lodIndex, bool newSyncLoad) {
		return ((T (*)(SceneStreaming*, int32_t, bool))(Il2CppBase() + 0x3BFF620))(this, lodIndex, newSyncLoad);
	}
	template <typename T = uintptr_t> T GetSceneStreamingLOD(int32_t lodIndex) {
		return ((T (*)(SceneStreaming*, int32_t))(Il2CppBase() + 0x3BFF6E4))(this, lodIndex);
	}
	template <typename T = uintptr_t> T GetLoadedLOD() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFF7C0))(this);
	}
	template <typename T = void> T OnSceneLODLoaded(uintptr_t loadedSceneLOD) {
		return ((T (*)(SceneStreaming*, uintptr_t))(Il2CppBase() + 0x3BFF8C8))(this, loadedSceneLOD);
	}
	template <typename T = bool> T IsLoaded() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3BFFB4C))(this);
	}
	template <typename T = void> T CreateStreamingLOD(Il2CppArray<uintptr_t>* scenePaths) {
		return ((T (*)(SceneStreaming*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3BFFC50))(this, scenePaths);
	}
	template <typename T = bool> T ContainsScene(Il2CppString* scenePath) {
		return ((T (*)(SceneStreaming*, Il2CppString*))(Il2CppBase() + 0x3BFFEF4))(this, scenePath);
	}
	template <typename T = Il2CppString*> T GetScenePath(int32_t lodIndex) {
		return ((T (*)(SceneStreaming*, int32_t))(Il2CppBase() + 0x3C00054))(this, lodIndex);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(SceneStreaming*))(Il2CppBase() + 0x3C00198))(this);
	}

};

}
