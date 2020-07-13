#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionRotateTowards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionRotateTowards"));
	}

	template <typename T = uintptr_t> T& fromQuaternion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& toQuaternion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& maxDegreesDelta() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionRotateTowards*))(Il2CppBase() + 0x4D814A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionRotateTowards*))(Il2CppBase() + 0x4D815C4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionRotateTowards*))(Il2CppBase() + 0x4D816C4))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionRotateTowards*))(Il2CppBase() + 0x4D816D4))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionRotateTowards*))(Il2CppBase() + 0x4D816E4))(this);
	}
	template <typename T = void> T DoQuatRotateTowards() {
		return ((T (*)(QuaternionRotateTowards*))(Il2CppBase() + 0x4D815F0))(this);
	}

};

}
