#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UICommonTipHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICommonTipHolder"));
	}

	template <typename T = bool> T& m_Init() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsPress() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = Il2CppVector2> T& m_CurrentPos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& Max_Duration() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& OnClickCallback() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> static T& Max_Distance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_DescType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& m_Width() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_Height() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_TipSide() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_PanelDepth() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& m_DescText() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_InitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Update() {
		return ((T (*)(UICommonTipHolder*))(Il2CppBase() + 0x39D1AEC))(this);
	}
	template <typename T = void> T OnPress(bool press) {
		return ((T (*)(UICommonTipHolder*, bool))(Il2CppBase() + 0x39D1E78))(this, press);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UICommonTipHolder*, Il2CppVector2))(Il2CppBase() + 0x39D1F98))(this, delta);
	}
	template <typename T = void> T InitData(int32_t itemId, uintptr_t descType, int32_t width, int32_t height, uintptr_t tipSide, int32_t panelDepth, uintptr_t tCallback) {
		return ((T (*)(UICommonTipHolder*, int32_t, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x39CA9E4))(this, itemId, descType, width, height, tipSide, panelDepth, tCallback);
	}
	template <typename T = void> T InitData_1(Il2CppString* descText, int32_t width, int32_t height, uintptr_t tipSide, int32_t panelDepth, uintptr_t tCallback) {
		return ((T (*)(UICommonTipHolder*, Il2CppString*, int32_t, int32_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x39D207C))(this, descText, width, height, tipSide, panelDepth, tCallback);
	}
	template <typename T = void> T SetCallback(uintptr_t tCallback) {
		return ((T (*)(UICommonTipHolder*, uintptr_t))(Il2CppBase() + 0x39D2180))(this, tCallback);
	}
	template <typename T = void> T SetShow(bool show) {
		return ((T (*)(UICommonTipHolder*, bool))(Il2CppBase() + 0x39D1C40))(this, show);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UICommonTipHolder*))(Il2CppBase() + 0x39D2228))(this);
	}

};

}
