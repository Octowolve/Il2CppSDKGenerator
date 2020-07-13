#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EaseVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EaseVector3"));
	}

	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EaseVector3*))(Il2CppBase() + 0x4FCAFDC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EaseVector3*))(Il2CppBase() + 0x4FCB004))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EaseVector3*))(Il2CppBase() + 0x4FCB2D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(EaseVector3*))(Il2CppBase() + 0x4FCB2D8))(this);
	}

};

}
