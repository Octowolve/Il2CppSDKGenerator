#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerEffectImplcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TriggerEffectImpl>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& socketTransform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t effect) {
		return ((T (*)(TriggerEffectImplcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x37548D8))(this, effect);
	}

};

}
