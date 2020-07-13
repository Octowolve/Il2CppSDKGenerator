#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneStreamingLOD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneStreamingLOD"));
	}

	template <typename T = Il2CppString*> T& scenePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& lodIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sceneStreaming() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _sceneName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> static T& UnloadRequestMinInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& lastLoadTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _hasBeenLoadFailed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _targetState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _sycLoad() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTargetVisibility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneStartLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoadFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneStartUnloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneUnloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T get_sceneName() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3BFF458))(this);
	}
	template <typename T = bool> T get_isCooldown() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01D50))(this);
	}
	template <typename T = float> T get_lastLoadTime() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01D88))(this);
	}
	template <typename T = void> T set_lastLoadTime(float value) {
		return ((T (*)(SceneStreamingLOD*, float))(Il2CppBase() + 0x3C01D90))(this, value);
	}
	template <typename T = bool> T get_hasBeenLoadFailed() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01D98))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3BFF8C0))(this);
	}
	template <typename T = bool> T get_syncLoad() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01DA0))(this);
	}
	template <typename T = bool> T get_inTransitionState() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01DA8))(this);
	}
	template <typename T = bool> T get_shouldLoad() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01DC0))(this);
	}
	template <typename T = bool> T get_shouldUnload() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01DE4))(this);
	}
	template <typename T = bool> T get_TargetVisibility() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01E0C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01E1C))(this);
	}
	template <typename T = void> T SetTargetVisibility(bool visible, bool newSyncLoad) {
		return ((T (*)(SceneStreamingLOD*, bool, bool))(Il2CppBase() + 0x3BFFA74))(this, visible, newSyncLoad);
	}
	template <typename T = void> T OnSceneStartLoading() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C01F7C))(this);
	}
	template <typename T = void> T OnSceneLoadFailed() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C02028))(this);
	}
	template <typename T = void> T OnSceneStartUnloading() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C020D4))(this);
	}
	template <typename T = void> T OnSceneLoaded() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C02180))(this);
	}
	template <typename T = void> T OnSceneUnloaded() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C02258))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(SceneStreamingLOD*))(Il2CppBase() + 0x3C02308))(this);
	}

};

}
