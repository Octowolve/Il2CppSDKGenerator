#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EaseFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EaseFloat"));
	}

	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EaseFloat*))(Il2CppBase() + 0x4FC8718))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EaseFloat*))(Il2CppBase() + 0x4FC8740))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EaseFloat*))(Il2CppBase() + 0x4FC88F8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EaseFloat*))(Il2CppBase() + 0x4FC88FC))(this);
	}

};

}
