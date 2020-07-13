#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFirstPopupBigTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFirstPopupBigTemplate"));
	}

	template <typename T = Il2CppString*> static T& CloseAnimationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& StartAnimationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& CloseAnimationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CloseCallback() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCloseBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIFirstPopupBigTemplate*))(Il2CppBase() + 0x3AD8D24))(this);
	}
	template <typename T = void> T SetCloseBtnCallback(uintptr_t a) {
		return ((T (*)(UIFirstPopupBigTemplate*, uintptr_t))(Il2CppBase() + 0x3AD8678))(this, a);
	}
	template <typename T = void> T OnCloseBtnClick(uintptr_t obj) {
		return ((T (*)(UIFirstPopupBigTemplate*, uintptr_t))(Il2CppBase() + 0x3AD8EC8))(this, obj);
	}

};

}
