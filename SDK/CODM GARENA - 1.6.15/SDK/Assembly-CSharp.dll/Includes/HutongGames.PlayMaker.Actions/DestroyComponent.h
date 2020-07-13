#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class DestroyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "DestroyComponent"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& aComponent() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(DestroyComponent*))(Il2CppBase() + 0x4FC5940))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(DestroyComponent*))(Il2CppBase() + 0x4FC5954))(this);
	}
	template <typename T = void> T DoDestroyComponent(uintptr_t go) {
		return ((T (*)(DestroyComponent*, uintptr_t))(Il2CppBase() + 0x4FC59D8))(this, go);
	}

};

}
