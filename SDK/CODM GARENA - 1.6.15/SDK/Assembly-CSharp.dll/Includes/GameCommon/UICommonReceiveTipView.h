#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UICommonReceiveTipView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UICommonReceiveTipView"));
	}

	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WidgetTip() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteTextBg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& WidgetContainer() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> static T& DEFAULT_PANEL_DEPTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ORIGINAL_PANEL_DEPTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kWPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kHPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DescType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_TipSide() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TransTopLeft() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& TransBottomRight() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& CAMERA_DISTANCE_Z() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& vecTopLeft() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& vecBottomRight() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPosLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICommonReceiveTipView*))(Il2CppBase() + 0x49F859C))(this);
	}
	template <typename T = void> T InitPosLimit() {
		return ((T (*)(UICommonReceiveTipView*))(Il2CppBase() + 0x49F87AC))(this);
	}
	template <typename T = void> T SetTip(bool show, int32_t itemId, uintptr_t descType, Il2CppVector3 worldPos, int32_t width, int32_t height, uintptr_t tipSide, int32_t panelDepth) {
		return ((T (*)(UICommonReceiveTipView*, bool, int32_t, uintptr_t, Il2CppVector3, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x49F7A94))(this, show, itemId, descType, worldPos, width, height, tipSide, panelDepth);
	}
	template <typename T = void> T SetTip_1(bool show, Il2CppString* descText, uintptr_t descType, Il2CppVector3 worldPos, int32_t width, int32_t height, uintptr_t tipSide, int32_t panelDepth) {
		return ((T (*)(UICommonReceiveTipView*, bool, Il2CppString*, uintptr_t, Il2CppVector3, int32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x49F822C))(this, show, descText, descType, worldPos, width, height, tipSide, panelDepth);
	}
	template <typename T = void> T RefreshText() {
		return ((T (*)(UICommonReceiveTipView*))(Il2CppBase() + 0x49F8A0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UICommonReceiveTipView*))(Il2CppBase() + 0x49F9074))(this);
	}

};

}
