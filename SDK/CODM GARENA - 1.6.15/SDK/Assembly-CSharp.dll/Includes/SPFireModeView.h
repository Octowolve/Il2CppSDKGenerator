#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPFireModeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPFireModeView"));
	}

	template <typename T = uintptr_t> T& LeftFireModeBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& RightFireModeBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SelectedBG() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsRightSelected() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_IsRightSelected() {
		return ((T (*)(SPFireModeView*))(Il2CppBase() + 0x3913FCC))(this);
	}
	template <typename T = void> T set_IsRightSelected(bool value) {
		return ((T (*)(SPFireModeView*, bool))(Il2CppBase() + 0x3913FD4))(this, value);
	}
	template <typename T = void> T SetSelected(bool right) {
		return ((T (*)(SPFireModeView*, bool))(Il2CppBase() + 0x3913B90))(this, right);
	}

};

}
