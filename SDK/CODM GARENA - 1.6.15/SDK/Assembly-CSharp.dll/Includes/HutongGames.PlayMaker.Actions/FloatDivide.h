#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FloatDivide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FloatDivide"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& divideBy() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FloatDivide*))(Il2CppBase() + 0x50509D0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FloatDivide*))(Il2CppBase() + 0x50509E4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FloatDivide*))(Il2CppBase() + 0x5050A70))(this);
	}

};

}
