#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectHasChildren
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectHasChildren"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& trueEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& falseEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectHasChildren*))(Il2CppBase() + 0x5053A34))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectHasChildren*))(Il2CppBase() + 0x5053A4C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GameObjectHasChildren*))(Il2CppBase() + 0x5053BD0))(this);
	}
	template <typename T = void> T DoHasChildren() {
		return ((T (*)(GameObjectHasChildren*))(Il2CppBase() + 0x5053A78))(this);
	}

};

}
