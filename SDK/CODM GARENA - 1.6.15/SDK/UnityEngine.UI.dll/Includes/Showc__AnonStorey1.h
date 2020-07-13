#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "<Show>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(bool x) {
		return ((T (*)(ShowcAnonStorey1*, bool))(Il2CppBase() + 0x3D13120))(this, x);
	}

};

}
