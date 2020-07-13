#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionInverse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionInverse"));
	}

	template <typename T = uintptr_t> T& rotation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionInverse*))(Il2CppBase() + 0x4D80B98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionInverse*))(Il2CppBase() + 0x4D80BB4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionInverse*))(Il2CppBase() + 0x4D80C60))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionInverse*))(Il2CppBase() + 0x4D80C70))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionInverse*))(Il2CppBase() + 0x4D80C80))(this);
	}
	template <typename T = void> T DoQuatInverse() {
		return ((T (*)(QuaternionInverse*))(Il2CppBase() + 0x4D80BE0))(this);
	}

};

}
