#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DetachChildren
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DetachChildren"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DetachChildren*))(Il2CppBase() + 0x4FC6354))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DetachChildren*))(Il2CppBase() + 0x4FC6360))(this);
	}
	template <typename T = void> static T DoDetachChildren(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4FC63AC))(0, go);
	}

};

}
