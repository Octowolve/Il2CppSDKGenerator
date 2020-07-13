#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RandomInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RandomInt"));
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
	template <typename T = bool> T& inclusiveMax() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RandomInt*))(Il2CppBase() + 0x4D81D38))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RandomInt*))(Il2CppBase() + 0x4D81D7C))(this);
	}

};

}
