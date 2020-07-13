#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BasePopupWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BasePopupWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& priority() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_isModal() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBlurFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAnimationFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnMaskClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnKeyEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T get_BlurBackground() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6C664))(this);
	}
	template <typename T = uintptr_t> T get_Priority() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6C688))(this);
	}
	template <typename T = void> T set_Priority(uintptr_t value) {
		return ((T (*)(BasePopupWindowController*, uintptr_t))(Il2CppBase() + 0x2D6C690))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D5FEB0))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(BasePopupWindowController*, Il2CppString*))(Il2CppBase() + 0x2D6C698))(this, text);
	}
	template <typename T = void> T SetSubTitle(Il2CppString* text) {
		return ((T (*)(BasePopupWindowController*, Il2CppString*))(Il2CppBase() + 0x2D6C768))(this, text);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(BasePopupWindowController*, uintptr_t))(Il2CppBase() + 0x2D6C838))(this, closeType);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D60878))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D60C98))(this);
	}
	template <typename T = void> T SetActive(bool IsActive, bool recursively, bool enableOptimize) {
		return ((T (*)(BasePopupWindowController*, bool, bool, bool))(Il2CppBase() + 0x2D6C8F0))(this, IsActive, recursively, enableOptimize);
	}
	template <typename T = void> T SetUIActive(bool isActive, bool recursively, bool RemoveDelegate) {
		return ((T (*)(BasePopupWindowController*, bool, bool, bool))(Il2CppBase() + 0x2D6CC40))(this, isActive, recursively, RemoveDelegate);
	}
	template <typename T = void> T OnBlurFinish() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D0C8))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D288))(this);
	}
	template <typename T = void> T PreCloseAnimation() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D42C))(this);
	}
	template <typename T = void> T OnCloseAnimationFinish() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D4C4))(this);
	}
	template <typename T = void> T OnReturnButtonClick() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D578))(this);
	}
	template <typename T = void> T OnBtnMaskClick() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D610))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D6C4))(this);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D770))(this);
	}
	template <typename T = bool> T ReturnKeyEnable() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D810))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D8B0))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D950))(this);
	}
	template <typename T = int32_t> T GetMaxPanelDepth() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6D9F0))(this);
	}
	template <typename T = void> T UpdatePanelDepth(int32_t mainPanelDepth) {
		return ((T (*)(BasePopupWindowController*, int32_t))(Il2CppBase() + 0x2D6DCC0))(this, mainPanelDepth);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6DE48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6DE50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BasePopupWindowController*))(Il2CppBase() + 0x2D6DE58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1, bool P2) {
		return ((T (*)(BasePopupWindowController*, bool, bool, bool))(Il2CppBase() + 0x2D6DE60))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetUIActive(bool P0, bool P1, bool P2) {
		return ((T (*)(BasePopupWindowController*, bool, bool, bool))(Il2CppBase() + 0x2D6DE80))(this, P0, P1, P2);
	}

};

}
