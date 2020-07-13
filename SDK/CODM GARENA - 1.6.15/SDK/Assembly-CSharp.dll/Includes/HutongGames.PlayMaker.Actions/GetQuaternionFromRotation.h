#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetQuaternionFromRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetQuaternionFromRotation"));
	}

	template <typename T = uintptr_t> T& fromDirection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& toDirection() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetQuaternionFromRotation*))(Il2CppBase() + 0x50900E8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetQuaternionFromRotation*))(Il2CppBase() + 0x5090100))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetQuaternionFromRotation*))(Il2CppBase() + 0x50901D0))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetQuaternionFromRotation*))(Il2CppBase() + 0x50901E0))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(GetQuaternionFromRotation*))(Il2CppBase() + 0x50901F0))(this);
	}
	template <typename T = void> T DoQuatFromRotation() {
		return ((T (*)(GetQuaternionFromRotation*))(Il2CppBase() + 0x509012C))(this);
	}

};

}
