#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CurveFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CurveFloat"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& toValue() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& animCurve() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& calculation() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CurveFloat*))(Il2CppBase() + 0x4FC2938))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CurveFloat*))(Il2CppBase() + 0x4FC2A74))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(CurveFloat*))(Il2CppBase() + 0x4FC2D28))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CurveFloat*))(Il2CppBase() + 0x4FC2D2C))(this);
	}

};

}
