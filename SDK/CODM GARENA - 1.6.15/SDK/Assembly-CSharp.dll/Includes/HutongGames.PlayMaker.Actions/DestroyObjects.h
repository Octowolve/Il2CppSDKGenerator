#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DestroyObjects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DestroyObjects"));
	}

	template <typename T = uintptr_t> T& gameObjects() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& detachChildren() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DestroyObjects*))(Il2CppBase() + 0x4FC5E18))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DestroyObjects*))(Il2CppBase() + 0x4FC5E44))(this);
	}

};

}
