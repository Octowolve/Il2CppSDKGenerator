#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectIsNull
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectIsNull"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& isNull() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& isNotNull() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectIsNull*))(Il2CppBase() + 0x5053DBC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectIsNull*))(Il2CppBase() + 0x5053DD4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GameObjectIsNull*))(Il2CppBase() + 0x5053F18))(this);
	}
	template <typename T = void> T DoIsGameObjectNull() {
		return ((T (*)(GameObjectIsNull*))(Il2CppBase() + 0x5053E00))(this);
	}

};

}
