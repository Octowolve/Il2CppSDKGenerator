#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGameObject"));
	}

	template <typename T = uintptr_t> T& variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGameObject*))(Il2CppBase() + 0x4FBC76C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGameObject*))(Il2CppBase() + 0x4FBC780))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetGameObject*))(Il2CppBase() + 0x4FBC7E4))(this);
	}

};

}
