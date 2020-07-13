#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BasePopupWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BasePopupWindowView"));
	}

	template <typename T = uintptr_t> T& btnMask() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& btnReturn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& btnClose() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& labelTitle() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& labelSubtitle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& bgTexture() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& popupViewAnimator() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& popupWindowFullScreenCollider() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& mainPanel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& relativePanels() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& relativePanelDepthIncrement() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareRelateivePanels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSubTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnViewHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6DEA0))(this);
	}
	template <typename T = void> T PrepareRelateivePanels() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6E578))(this);
	}
	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(BasePopupWindowView*, Il2CppString*))(Il2CppBase() + 0x2D6E7FC))(this, text);
	}
	template <typename T = void> T SetSubTitle(Il2CppString* text) {
		return ((T (*)(BasePopupWindowView*, Il2CppString*))(Il2CppBase() + 0x2D6E98C))(this, text);
	}
	template <typename T = void> T OnViewShow() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6EB1C))(this);
	}
	template <typename T = void> T OnViewHide() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6EBB4))(this);
	}
	template <typename T = void> T UpdatePanelDepth(int32_t mainPanelDepth) {
		return ((T (*)(BasePopupWindowView*, int32_t))(Il2CppBase() + 0x2D6EC4C))(this, mainPanelDepth);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6EF20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6F2C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BasePopupWindowView*))(Il2CppBase() + 0x2D6F2C4))(this);
	}

};

}
