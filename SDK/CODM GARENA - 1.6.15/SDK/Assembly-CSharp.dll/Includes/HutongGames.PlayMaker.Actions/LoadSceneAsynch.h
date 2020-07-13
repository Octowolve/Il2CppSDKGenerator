#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LoadSceneAsynch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LoadSceneAsynch"));
	}

	template <typename T = uintptr_t> T& sceneReference() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sceneByName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sceneAtIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& loadSceneMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& allowSceneActivation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& operationPriority() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& aSyncOperationHashCode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& progress() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& isDone() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& pendingActivation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& doneEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& pendingActivationEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& sceneNotFoundEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _asyncOperation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _asynchOperationUid() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& pendingActivationCallBackDone() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& aSyncOperationLUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& aSynchUidCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(LoadSceneAsynch*))(Il2CppBase() + 0x4D76224))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LoadSceneAsynch*))(Il2CppBase() + 0x4D76308))(this);
	}
	template <typename T = bool> T DoLoadAsynch() {
		return ((T (*)(LoadSceneAsynch*))(Il2CppBase() + 0x4D763B0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(LoadSceneAsynch*))(Il2CppBase() + 0x4D767F4))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(LoadSceneAsynch*))(Il2CppBase() + 0x4D76AF8))(this);
	}

};

}
