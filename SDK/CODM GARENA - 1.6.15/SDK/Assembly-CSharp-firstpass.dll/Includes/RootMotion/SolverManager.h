#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion {

class SolverManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion", "SolverManager"));
	}

	template <typename T = bool> T& fixTransforms() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& legacy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& updateFrame() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& componentInitiated() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& skipSolverUpdate() {
		return *(T*)((uintptr_t)this + 0x1A);
	}

	template <typename T = void> T Disable() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80480))(this);
	}
	template <typename T = void> T InitiateSolver() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80564))(this);
	}
	template <typename T = void> T UpdateSolver() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80568))(this);
	}
	template <typename T = void> T FixTransforms() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F8056C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80570))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F805F0))(this);
	}
	template <typename T = bool> T get_animatePhysics() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F805F4))(this);
	}
	template <typename T = void> T Initiate() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F8059C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80A04))(this);
	}
	template <typename T = void> T FindAnimatorRecursive(uintptr_t t, bool findInChildren) {
		return ((T (*)(SolverManager*, uintptr_t, bool))(Il2CppBase() + 0x4F8074C))(this, t, findInChildren);
	}
	template <typename T = bool> T get_isAnimated() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80A54))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80B5C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80BB8))(this);
	}
	template <typename T = void> T UpdateSolverExternal() {
		return ((T (*)(SolverManager*))(Il2CppBase() + 0x4F80C18))(this);
	}

};

}
