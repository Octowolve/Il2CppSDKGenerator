#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OpticsChangeZoomBtnHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OpticsChangeZoomBtnHUD"));
	}

	template <typename T = uintptr_t> T& ChangeZoomingButton() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ChangeZoomingLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeZoomingButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(OpticsChangeZoomBtnHUD*))(Il2CppBase() + 0x1623A5C))(this);
	}
	template <typename T = void> T OnChangeZoomingButtonClick() {
		return ((T (*)(OpticsChangeZoomBtnHUD*))(Il2CppBase() + 0x1623BF0))(this);
	}
	template <typename T = void> T Show(bool isDoubleFov) {
		return ((T (*)(OpticsChangeZoomBtnHUD*, bool))(Il2CppBase() + 0x1623E40))(this, isDoubleFov);
	}

};

}
