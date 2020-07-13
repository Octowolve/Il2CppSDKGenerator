#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SendSceneLoadedEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SendSceneLoadedEvent"));
	}

	template <typename T = uintptr_t> T& sceneLoaded() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sceneLoadedSafe() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& lastLoadedScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& lastLoadedMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& _loaded() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SendSceneLoadedEvent*))(Il2CppBase() + 0x4FAFF48))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SendSceneLoadedEvent*))(Il2CppBase() + 0x4FAFF54))(this);
	}
	template <typename T = void> T SceneManager_sceneLoaded(uintptr_t scene, uintptr_t mode, bool async) {
		return ((T (*)(SendSceneLoadedEvent*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4FB0020))(this, scene, mode, async);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SendSceneLoadedEvent*))(Il2CppBase() + 0x4FB010C))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(SendSceneLoadedEvent*))(Il2CppBase() + 0x4FB0184))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(SendSceneLoadedEvent*))(Il2CppBase() + 0x4FB0248))(this);
	}

};

}
