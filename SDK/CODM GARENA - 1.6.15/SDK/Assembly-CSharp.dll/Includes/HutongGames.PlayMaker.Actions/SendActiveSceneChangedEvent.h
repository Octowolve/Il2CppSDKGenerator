#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SendActiveSceneChangedEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SendActiveSceneChangedEvent"));
	}

	template <typename T = uintptr_t> T& activeSceneChanged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& lastPreviousActiveScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& lastNewActiveScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SendActiveSceneChangedEvent*))(Il2CppBase() + 0x4FAE998))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SendActiveSceneChangedEvent*))(Il2CppBase() + 0x4FAE9A4))(this);
	}
	template <typename T = void> T SceneManager_activeSceneChanged(uintptr_t previousActiveScene, uintptr_t activeScene) {
		return ((T (*)(SendActiveSceneChangedEvent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FAEA74))(this, previousActiveScene, activeScene);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(SendActiveSceneChangedEvent*))(Il2CppBase() + 0x4FAEB44))(this);
	}

};

}
