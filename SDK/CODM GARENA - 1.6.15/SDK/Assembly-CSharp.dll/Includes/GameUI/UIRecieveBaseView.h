#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIRecieveBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIRecieveBaseView"));
	}

	template <typename T = bool> T& needShowAgingPropsDecomposeView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& CommonItemRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContineBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedShowDecompose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UIInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T CheckNeedShowDecompose() {
		return ((T (*)(UIRecieveBaseView*))(Il2CppBase() + 0x3B03E9C))(this);
	}
	template <typename T = void> T UIInit() {
		return ((T (*)(UIRecieveBaseView*))(Il2CppBase() + 0x3B03AC8))(this);
	}
	template <typename T = void> T RefreshButton() {
		return ((T (*)(UIRecieveBaseView*))(Il2CppBase() + 0x3AFEE60))(this);
	}

};

}
