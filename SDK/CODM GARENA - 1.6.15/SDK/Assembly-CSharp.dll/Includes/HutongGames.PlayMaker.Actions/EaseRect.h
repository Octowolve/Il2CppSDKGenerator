#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EaseRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EaseRect"));
	}

	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& rectVariable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EaseRect*))(Il2CppBase() + 0x4FCA5A8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EaseRect*))(Il2CppBase() + 0x4FCA5D0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EaseRect*))(Il2CppBase() + 0x4FCAA3C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EaseRect*))(Il2CppBase() + 0x4FCAA40))(this);
	}

};

}
