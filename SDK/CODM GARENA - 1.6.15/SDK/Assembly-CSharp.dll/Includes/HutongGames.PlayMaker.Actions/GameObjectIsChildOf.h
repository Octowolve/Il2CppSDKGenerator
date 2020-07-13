#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectIsChildOf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectIsChildOf"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& isChildOf() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectIsChildOf*))(Il2CppBase() + 0x5053BDC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectIsChildOf*))(Il2CppBase() + 0x5053BF4))(this);
	}
	template <typename T = void> T DoIsChildOf(uintptr_t go) {
		return ((T (*)(GameObjectIsChildOf*, uintptr_t))(Il2CppBase() + 0x5053C44))(this, go);
	}

};

}
