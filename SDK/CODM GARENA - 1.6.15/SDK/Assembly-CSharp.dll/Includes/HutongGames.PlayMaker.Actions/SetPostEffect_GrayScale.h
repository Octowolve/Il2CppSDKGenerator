#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetPostEffectGrayScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetPostEffect_GrayScale"));
	}

	template <typename T = bool> T& EnableGrayScale() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetPostEffectGrayScale*))(Il2CppBase() + 0x502A474))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetPostEffectGrayScale*))(Il2CppBase() + 0x502A480))(this);
	}

};

}
