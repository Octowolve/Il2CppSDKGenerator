#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatMultiply
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatMultiply"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& multiplyBy() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatMultiply*))(Il2CppBase() + 0x5050E10))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatMultiply*))(Il2CppBase() + 0x5050E24))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatMultiply*))(Il2CppBase() + 0x5050EB0))(this);
	}

};

}
