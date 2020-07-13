#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnNavigationShowedcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnNavigationShowed>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& uiScene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& currentPopupWindow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& preState() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnNavigationShowedcAnonStorey0*))(Il2CppBase() + 0x4357CDC))(this);
	}

};

}
