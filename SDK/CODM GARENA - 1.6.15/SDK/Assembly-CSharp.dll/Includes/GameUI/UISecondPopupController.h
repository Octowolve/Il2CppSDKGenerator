#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UISecondPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UISecondPopupController"));
	}

	template <typename T = uintptr_t> T& popupView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseBtnCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B0FE48))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B0FF54))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B104E4))(this);
	}
	template <typename T = void> T ReleaseBtnCallback() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10594))(this);
	}
	template <typename T = void> T StartToClose() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10838))(this);
	}
	template <typename T = void> T FinishClose() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10A00))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10AB4))(this);
	}
	template <typename T = void> T OnCancellBtnClick() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10B64))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10C14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10CC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10CCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UISecondPopupController*))(Il2CppBase() + 0x3B10CD4))(this);
	}

};

}
