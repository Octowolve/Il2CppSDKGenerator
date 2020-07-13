#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class AbstractSecondStagePopupWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "AbstractSecondStagePopupWindowController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IsClose() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSecondClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePopupWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D61F70))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62078))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D622C8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D6249C))(this);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D6254C))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D625FC))(this);
	}
	template <typename T = void> T OnBtnSecondClick() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D626AC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62744))(this);
	}
	template <typename T = void> T ClosePopupWindow(uintptr_t Msg) {
		return ((T (*)(AbstractSecondStagePopupWindowController*, uintptr_t))(Il2CppBase() + 0x2D6296C))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62A28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62A2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62A30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62A34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(AbstractSecondStagePopupWindowController*))(Il2CppBase() + 0x2D62A3C))(this);
	}

};

}
