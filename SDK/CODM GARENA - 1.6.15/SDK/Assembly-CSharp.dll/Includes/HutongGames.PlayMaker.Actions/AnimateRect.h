#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimateRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimateRect"));
	}

	template <typename T = uintptr_t> T& rectVariable() {
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
	template <typename T = uintptr_t> T& curveW() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& calculationW() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& curveH() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& calculationH() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimateRect*))(Il2CppBase() + 0x4F2D16C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimateRect*))(Il2CppBase() + 0x4F2D228))(this);
	}
	template <typename T = void> T UpdateVariableValue() {
		return ((T (*)(AnimateRect*))(Il2CppBase() + 0x4F2D7CC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimateRect*))(Il2CppBase() + 0x4F2D8FC))(this);
	}

};

}
