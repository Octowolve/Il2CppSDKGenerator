#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DestroyObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DestroyObject"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& detachChildren() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x4FC5BF8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x4FC5C24))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x4FC5E0C))(this);
	}

};

}
