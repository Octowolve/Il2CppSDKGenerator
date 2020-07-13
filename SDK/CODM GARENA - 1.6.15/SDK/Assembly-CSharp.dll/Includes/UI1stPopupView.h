#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UI1stPopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UI1stPopupView"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Normalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Normalize(uintptr_t mask, uintptr_t confirm, uintptr_t cancel, uintptr_t close) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B12FB4))(0, mask, confirm, cancel, close);
	}

};

}
