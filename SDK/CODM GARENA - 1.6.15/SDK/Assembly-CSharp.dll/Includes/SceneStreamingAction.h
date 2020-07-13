#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SceneStreamingAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SceneStreamingAction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& streamInScene() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& streamOutScene() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& streamInMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& waitForSceneVisible() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& setActiveSceneOnLoaded() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCheckWaitForSceneVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SceneStreamingAction*))(Il2CppBase() + 0x3C00290))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SceneStreamingAction*))(Il2CppBase() + 0x3C00468))(this);
	}
	template <typename T = void> T OnSceneLoaded(uintptr_t scene, uintptr_t mode, bool async) {
		return ((T (*)(SceneStreamingAction*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3C00794))(this, scene, mode, async);
	}
	template <typename T = bool> T ShouldCheckWaitForSceneVisible() {
		return ((T (*)(SceneStreamingAction*))(Il2CppBase() + 0x3C003AC))(this);
	}
	template <typename T = bool> T IsAllSceneLoaded() {
		return ((T (*)(SceneStreamingAction*))(Il2CppBase() + 0x3C00660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SceneStreamingAction*))(Il2CppBase() + 0x3C0088C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(SceneStreamingAction*))(Il2CppBase() + 0x3C00894))(this);
	}

};

}
