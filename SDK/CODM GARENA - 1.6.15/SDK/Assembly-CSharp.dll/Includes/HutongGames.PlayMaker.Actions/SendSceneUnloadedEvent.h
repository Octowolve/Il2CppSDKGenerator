#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SendSceneUnloadedEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SendSceneUnloadedEvent"));
	}

	template <typename T = uintptr_t> T& sceneUnloaded() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& lastUnLoadedScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SendSceneUnloadedEvent*))(Il2CppBase() + 0x4FB0338))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SendSceneUnloadedEvent*))(Il2CppBase() + 0x4FB0344))(this);
	}
	template <typename T = void> T SceneManager_sceneUnloaded(uintptr_t scene) {
		return ((T (*)(SendSceneUnloadedEvent*, uintptr_t))(Il2CppBase() + 0x4FB0414))(this, scene);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(SendSceneUnloadedEvent*))(Il2CppBase() + 0x4FB0538))(this);
	}

};

}
