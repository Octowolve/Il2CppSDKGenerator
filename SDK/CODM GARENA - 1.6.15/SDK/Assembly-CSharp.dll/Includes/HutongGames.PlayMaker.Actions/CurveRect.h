#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CurveRect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CurveRect"));
	}

	template <typename T = uintptr_t> T& rectVariable() {
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
	template <typename T = uintptr_t> T& curveW() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& calculationW() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& curveH() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& calculationH() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppRect> T& rct() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CurveRect*))(Il2CppBase() + 0x4FC2E80))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CurveRect*))(Il2CppBase() + 0x4FC2FBC))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(CurveRect*))(Il2CppBase() + 0x4FC376C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CurveRect*))(Il2CppBase() + 0x4FC3770))(this);
	}

};

}
