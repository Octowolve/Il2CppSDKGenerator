#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimateFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimateFloat"));
	}

	template <typename T = uintptr_t> T& animCurve() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& currentTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& looping() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimateFloat*))(Il2CppBase() + 0x4F2B9F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimateFloat*))(Il2CppBase() + 0x4F2BA08))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimateFloat*))(Il2CppBase() + 0x4F2BB58))(this);
	}

};

}
