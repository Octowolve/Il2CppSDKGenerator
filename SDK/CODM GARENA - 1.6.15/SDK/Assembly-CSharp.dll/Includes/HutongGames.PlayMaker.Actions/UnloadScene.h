#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class UnloadScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "UnloadScene"));
	}

	template <typename T = uintptr_t> T& sceneReference() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sceneByName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sceneAtBuildIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sceneAtIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& sceneByPath() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& sceneByGameObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& unloaded() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& unloadedEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& failureEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _scene() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& _sceneFound() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(UnloadScene*))(Il2CppBase() + 0x4F1A818))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(UnloadScene*))(Il2CppBase() + 0x4F1A838))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(UnloadScene*))(Il2CppBase() + 0x4F1AC58))(this);
	}

};

}
