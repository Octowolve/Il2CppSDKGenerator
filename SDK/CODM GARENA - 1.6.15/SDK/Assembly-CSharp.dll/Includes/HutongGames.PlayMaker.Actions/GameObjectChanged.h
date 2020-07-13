#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectChanged"));
	}

	template <typename T = uintptr_t> T& gameObjectVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& changedEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& previousValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectChanged*))(Il2CppBase() + 0x5053484))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectChanged*))(Il2CppBase() + 0x5053498))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GameObjectChanged*))(Il2CppBase() + 0x50534F8))(this);
	}

};

}
