#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionEuler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionEuler"));
	}

	template <typename T = uintptr_t> T& eulerAngles() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionEuler*))(Il2CppBase() + 0x4D80A9C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionEuler*))(Il2CppBase() + 0x4D80AB8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionEuler*))(Il2CppBase() + 0x4D80B60))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionEuler*))(Il2CppBase() + 0x4D80B70))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionEuler*))(Il2CppBase() + 0x4D80B80))(this);
	}
	template <typename T = void> T DoQuatEuler() {
		return ((T (*)(QuaternionEuler*))(Il2CppBase() + 0x4D80AE4))(this);
	}

};

}
