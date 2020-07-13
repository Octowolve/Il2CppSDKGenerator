#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionCompare"));
	}

	template <typename T = uintptr_t> T& Quaternion1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Quaternion2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& equal() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& equalEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& notEqualEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionCompare*))(Il2CppBase() + 0x4D8079C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionCompare*))(Il2CppBase() + 0x4D808A4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionCompare*))(Il2CppBase() + 0x4D80A64))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionCompare*))(Il2CppBase() + 0x4D80A74))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionCompare*))(Il2CppBase() + 0x4D80A84))(this);
	}
	template <typename T = void> T DoQuatCompare() {
		return ((T (*)(QuaternionCompare*))(Il2CppBase() + 0x4D808D0))(this);
	}

};

}
