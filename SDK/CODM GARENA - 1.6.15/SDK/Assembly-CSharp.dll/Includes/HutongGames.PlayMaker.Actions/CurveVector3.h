#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CurveVector3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CurveVector3"));
	}

	template <typename T = uintptr_t> T& vectorVariable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& curveX() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& calculationX() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& curveY() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& calculationY() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& curveZ() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& calculationZ() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& vct() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CurveVector3*))(Il2CppBase() + 0x4FC3A34))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CurveVector3*))(Il2CppBase() + 0x4FC3B70))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(CurveVector3*))(Il2CppBase() + 0x4FC40C8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CurveVector3*))(Il2CppBase() + 0x4FC40CC))(this);
	}

};

}
