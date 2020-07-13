#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectCompare"));
	}

	template <typename T = uintptr_t> T& gameObjectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& equalEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& notEqualEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectCompare*))(Il2CppBase() + 0x505362C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectCompare*))(Il2CppBase() + 0x5053648))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GameObjectCompare*))(Il2CppBase() + 0x50537E4))(this);
	}
	template <typename T = void> T DoGameObjectCompare() {
		return ((T (*)(GameObjectCompare*))(Il2CppBase() + 0x5053674))(this);
	}

};

}
