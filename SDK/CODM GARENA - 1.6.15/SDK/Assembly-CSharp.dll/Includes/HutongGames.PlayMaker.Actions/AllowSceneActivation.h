#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AllowSceneActivation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AllowSceneActivation"));
	}

	template <typename T = uintptr_t> T& aSynchOperationHashCode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& allowSceneActivation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyframe() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& progress() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& isDone() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& doneEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& failureEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AllowSceneActivation*))(Il2CppBase() + 0x4F2A1E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AllowSceneActivation*))(Il2CppBase() + 0x4F2A208))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AllowSceneActivation*))(Il2CppBase() + 0x4F2A77C))(this);
	}
	template <typename T = void> T DoAllowSceneActivation() {
		return ((T (*)(AllowSceneActivation*))(Il2CppBase() + 0x4F2A234))(this);
	}

};

}
