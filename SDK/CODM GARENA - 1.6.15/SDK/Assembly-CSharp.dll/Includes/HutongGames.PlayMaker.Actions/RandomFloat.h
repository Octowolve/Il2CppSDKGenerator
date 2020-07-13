#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RandomFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RandomFloat"));
	}

	template <typename T = uintptr_t> T& min() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& max() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RandomFloat*))(Il2CppBase() + 0x4D81C6C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RandomFloat*))(Il2CppBase() + 0x4D81CAC))(this);
	}

};

}
