#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimateColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimateColor"));
	}

	template <typename T = uintptr_t> T& colorVariable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& curveR() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& calculationR() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& curveG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& calculationG() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& curveB() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& calculationB() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& curveA() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& calculationA() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimateColor*))(Il2CppBase() + 0x4F2A790))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimateColor*))(Il2CppBase() + 0x4F2AAAC))(this);
	}
	template <typename T = void> T UpdateVariableValue() {
		return ((T (*)(AnimateColor*))(Il2CppBase() + 0x4F2B7E4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimateColor*))(Il2CppBase() + 0x4F2B914))(this);
	}

};

}
