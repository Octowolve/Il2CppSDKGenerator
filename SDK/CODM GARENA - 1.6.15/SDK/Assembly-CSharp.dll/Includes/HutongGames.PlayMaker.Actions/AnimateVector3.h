#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimateVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimateVector3"));
	}

	template <typename T = uintptr_t> T& vectorVariable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& curveX() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& calculationX() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& curveY() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& calculationY() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& curveZ() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& calculationZ() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimateVector3*))(Il2CppBase() + 0x4F2D9A0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimateVector3*))(Il2CppBase() + 0x4F2DA5C))(this);
	}
	template <typename T = void> T UpdateVariableValue() {
		return ((T (*)(AnimateVector3*))(Il2CppBase() + 0x4F2DE8C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimateVector3*))(Il2CppBase() + 0x4F2DF8C))(this);
	}

};

}
