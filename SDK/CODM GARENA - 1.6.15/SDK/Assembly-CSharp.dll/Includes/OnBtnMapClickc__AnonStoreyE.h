#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnBtnMapClickcAnonStoreyE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnBtnMapClick>c__AnonStoreyE"));
	}

	template <typename T = uintptr_t> T& firstLevelTab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$13() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnBtnMapClickcAnonStoreyE*, uintptr_t))(Il2CppBase() + 0x212CEA0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnBtnMapClickcAnonStoreyE*, uintptr_t))(Il2CppBase() + 0x212CEF0))(this, it);
	}

};

}
