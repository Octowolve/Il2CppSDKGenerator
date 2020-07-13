#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AbstractSecondStagePopupWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AbstractSecondStagePopupWindowView"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& BtnConfirm() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& BtnSecond() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnClose1() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCloseAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T PlayCloseAnimator() {
		return ((T (*)(AbstractSecondStagePopupWindowView*))(Il2CppBase() + 0x2D62810))(this);
	}
	template <typename T = void> T ClosePopupWindow() {
		return ((T (*)(AbstractSecondStagePopupWindowView*))(Il2CppBase() + 0x2D62AE4))(this);
	}

};

}
