#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AnimateFloatV2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AnimateFloatV2"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& animCurve() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& calculation() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AnimateFloatV2*))(Il2CppBase() + 0x4F2BC64))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AnimateFloatV2*))(Il2CppBase() + 0x4F2BD20))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AnimateFloatV2*))(Il2CppBase() + 0x4F2BF48))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AnimateFloatV2*))(Il2CppBase() + 0x4F2BF4C))(this);
	}

};

}
