#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneActiveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneActiveVolume"));
	}

	template <typename T = Il2CppString*> T& sceneToActive() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& lastActiveScene() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& resetFog() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& fogConfig() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideOldSceneObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadGPS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SceneActiveVolume*))(Il2CppBase() + 0x1E06158))(this);
	}
	template <typename T = void> T HideOldSceneObjects() {
		return ((T (*)(SceneActiveVolume*))(Il2CppBase() + 0x1E06250))(this);
	}
	template <typename T = void> T ReloadGPS(Il2CppString* scenePath) {
		return ((T (*)(SceneActiveVolume*, Il2CppString*))(Il2CppBase() + 0x1E06544))(this, scenePath);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(SceneActiveVolume*, uintptr_t, bool))(Il2CppBase() + 0x1E06698))(this, p, enter);
	}
	template <typename T = void> T ResetFog() {
		return ((T (*)(SceneActiveVolume*))(Il2CppBase() + 0x1E06C78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SceneActiveVolume*))(Il2CppBase() + 0x1E06EA8))(this);
	}

};

}
