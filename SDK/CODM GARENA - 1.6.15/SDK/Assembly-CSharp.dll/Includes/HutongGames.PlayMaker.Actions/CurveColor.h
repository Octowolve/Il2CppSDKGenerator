#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CurveColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CurveColor"));
	}

	template <typename T = uintptr_t> T& colorVariable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& curveR() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& calculationR() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& curveG() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& calculationG() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& curveB() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& calculationB() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& curveA() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& calculationA() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& clr() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CurveColor*))(Il2CppBase() + 0x4FBFCD0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CurveColor*))(Il2CppBase() + 0x4FC0088))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(CurveColor*))(Il2CppBase() + 0x4FC1040))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CurveColor*))(Il2CppBase() + 0x4FC1044))(this);
	}

};

}
