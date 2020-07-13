#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class UnloadSceneAsynch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "UnloadSceneAsynch"));
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
	template <typename T = uintptr_t> T& operationPriority() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& progress() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& isDone() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& doneEvent() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& sceneNotFoundEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _asyncOperation() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(UnloadSceneAsynch*))(Il2CppBase() + 0x4F1AD10))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(UnloadSceneAsynch*))(Il2CppBase() + 0x4F1ADF0))(this);
	}
	template <typename T = bool> T DoUnLoadAsynch() {
		return ((T (*)(UnloadSceneAsynch*))(Il2CppBase() + 0x4F1AE78))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(UnloadSceneAsynch*))(Il2CppBase() + 0x4F1B25C))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(UnloadSceneAsynch*))(Il2CppBase() + 0x4F1B344))(this);
	}

};

}
