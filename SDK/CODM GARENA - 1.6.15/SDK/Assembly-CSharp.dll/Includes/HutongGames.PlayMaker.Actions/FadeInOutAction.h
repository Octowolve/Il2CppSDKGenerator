#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FadeInOutAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FadeInOutAction"));
	}

	template <typename T = uintptr_t> T& FadeAction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& BlackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& FadeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& FinishImmediately() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(FadeInOutAction*))(Il2CppBase() + 0x504E1A0))(this);
	}

};

}
