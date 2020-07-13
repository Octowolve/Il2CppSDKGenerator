#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSendBtnClickcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSendBtnClick>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& curInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnSendBtnClickcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1D783AC))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnSendBtnClickcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1D783FC))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(OnSendBtnClickcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1D7844C))(this, it);
	}
	template <typename T = bool> T m__3(uintptr_t it) {
		return ((T (*)(OnSendBtnClickcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1D7849C))(this, it);
	}

};

}
