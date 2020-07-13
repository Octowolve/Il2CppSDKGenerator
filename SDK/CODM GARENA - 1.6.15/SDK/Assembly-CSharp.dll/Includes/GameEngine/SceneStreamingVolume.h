#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneStreamingVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneStreamingVolume"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& streamInScene() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& streamOutScene() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& streamInMode() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& setActiveSceneOnLoaded() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SceneStreamingVolume*))(Il2CppBase() + 0x33F0E08))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(SceneStreamingVolume*, uintptr_t, bool))(Il2CppBase() + 0x33F103C))(this, p, enter);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SceneStreamingVolume*))(Il2CppBase() + 0x33F1514))(this);
	}

};

}
