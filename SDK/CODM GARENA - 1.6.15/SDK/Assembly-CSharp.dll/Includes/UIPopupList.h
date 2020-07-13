#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIPopupList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPopupList"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& mFadeOutComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& animSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& atlas() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& bitmapFont() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mFontCategory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& fontSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fontStyle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& backgroundSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& highlightSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& background2DSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& highlight2DSprite() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& position() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& alignment() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& items() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& itemData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& padding() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& textColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& backgroundColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& highlightColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& isAnimated() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isLocalized() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> T& textModifier() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& separatePanel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& overlap() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& openOn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onChange() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& mSelectedItem() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& mPanel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& mBackground() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& mHighlight() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mHighlightedLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mLabelList() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& mBgBorder() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& keepValue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mSelection() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& mOpenFrame() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& eventReceiver() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& functionName() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& textScale() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& font() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& textLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& startingPosition() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& mLegacyEvent() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& mExecuting() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& mUseDynamicFont() {
		return *(T*)((uintptr_t)this + 0xDD);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0xDE);
	}
	template <typename T = bool> T& mTweening() {
		return *(T*)((uintptr_t)this + 0xDF);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItemByData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerCallbacks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Highlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHighlightPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTweenPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Select() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimateColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimatePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnimateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Animate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoubleClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseIfUnselected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = uintptr_t> T get_trueTypeFont() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F80BD4))(this);
	}
	template <typename T = void> T set_trueTypeFont(uintptr_t value) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F80C80))(this, value);
	}
	template <typename T = uintptr_t> T get_ambigiousFont() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F80C84))(this);
	}
	template <typename T = void> T set_ambigiousFont(uintptr_t value) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F80DAC))(this, value);
	}
	template <typename T = uintptr_t> T get_onSelectionChange() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F80DB0))(this);
	}
	template <typename T = void> T set_onSelectionChange(uintptr_t value) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F80DB8))(this, value);
	}
	template <typename T = bool> static T get_isOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F542D8))(0);
	}
	template <typename T = Il2CppString*> T get_value() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F80DC0))(this);
	}
	template <typename T = void> T set_value(Il2CppString* value) {
		return ((T (*)(UIPopupList*, Il2CppString*))(Il2CppBase() + 0x2F80DC8))(this, value);
	}
	template <typename T = uintptr_t> T get_data() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F80F38))(this);
	}
	template <typename T = bool> T get_isColliderEnabled() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F8104C))(this);
	}
	template <typename T = Il2CppString*> T get_selection() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F81148))(this);
	}
	template <typename T = void> T set_selection(Il2CppString* value) {
		return ((T (*)(UIPopupList*, Il2CppString*))(Il2CppBase() + 0x2F81158))(this, value);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F81168))(this);
	}
	template <typename T = int32_t> T get_activeFontSize() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F81278))(this);
	}
	template <typename T = float> T get_activeFontScale() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F813B0))(this);
	}
	template <typename T = void> T Set(Il2CppString* value, bool notify) {
		return ((T (*)(UIPopupList*, Il2CppString*, bool))(Il2CppBase() + 0x2F80DD0))(this, value, notify);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F81824))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* text) {
		return ((T (*)(UIPopupList*, Il2CppString*))(Il2CppBase() + 0x2F81954))(this, text);
	}
	template <typename T = void> T AddItem_1(Il2CppString* text, uintptr_t data) {
		return ((T (*)(UIPopupList*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2F81A94))(this, text, data);
	}
	template <typename T = void> T RemoveItem(Il2CppString* text) {
		return ((T (*)(UIPopupList*, Il2CppString*))(Il2CppBase() + 0x2F81BEC))(this, text);
	}
	template <typename T = void> T RemoveItemByData(uintptr_t data) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F81D68))(this, data);
	}
	template <typename T = void> T TriggerCallbacks() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F81504))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F81F7C))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F82398))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F825EC))(this);
	}
	template <typename T = void> T OnLocalize() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F827FC))(this);
	}
	template <typename T = void> T Highlight(uintptr_t lbl, bool instant) {
		return ((T (*)(UIPopupList*, uintptr_t, bool))(Il2CppBase() + 0x2F828DC))(this, lbl, instant);
	}
	template <typename T = Il2CppVector3> T GetHighlightPosition() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F82B1C))(this);
	}
	template <typename T = uintptr_t> T UpdateTweenPosition() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F82DEC))(this);
	}
	template <typename T = void> T OnItemHover(uintptr_t go, bool isOver) {
		return ((T (*)(UIPopupList*, uintptr_t, bool))(Il2CppBase() + 0x2F82F04))(this, go, isOver);
	}
	template <typename T = void> T OnItemPress(uintptr_t go, bool isPressed) {
		return ((T (*)(UIPopupList*, uintptr_t, bool))(Il2CppBase() + 0x2F83050))(this, go, isPressed);
	}
	template <typename T = void> T Select(uintptr_t lbl, bool instant) {
		return ((T (*)(UIPopupList*, uintptr_t, bool))(Il2CppBase() + 0x2F83304))(this, lbl, instant);
	}
	template <typename T = void> T OnNavigate(uintptr_t key) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F8340C))(this, key);
	}
	template <typename T = void> T OnKey(uintptr_t key) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F836A0))(this, key);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F83904))(this);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIPopupList*, bool))(Il2CppBase() + 0x2F839E4))(this, isSelected);
	}
	template <typename T = void> static T Close() {
		return ((T (*)(void *))(Il2CppBase() + 0x2F83AD4))(0);
	}
	template <typename T = void> T CloseSelf() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F83CB8))(this);
	}
	template <typename T = void> T AnimateColor(uintptr_t widget) {
		return ((T (*)(UIPopupList*, uintptr_t))(Il2CppBase() + 0x2F843A4))(this, widget);
	}
	template <typename T = void> T AnimatePosition(uintptr_t widget, bool placeAbove, float bottom) {
		return ((T (*)(UIPopupList*, uintptr_t, bool, float))(Il2CppBase() + 0x2F84528))(this, widget, placeAbove, bottom);
	}
	template <typename T = void> T AnimateScale(uintptr_t widget, bool placeAbove, float bottom) {
		return ((T (*)(UIPopupList*, uintptr_t, bool, float))(Il2CppBase() + 0x2F84728))(this, widget, placeAbove, bottom);
	}
	template <typename T = void> T Animate(uintptr_t widget, bool placeAbove, float bottom) {
		return ((T (*)(UIPopupList*, uintptr_t, bool, float))(Il2CppBase() + 0x2F849D8))(this, widget, placeAbove, bottom);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F84B0C))(this);
	}
	template <typename T = void> T OnDoubleClick() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F84DAC))(this);
	}
	template <typename T = uintptr_t> T CloseIfUnselected() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F84E98))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(UIPopupList*))(Il2CppBase() + 0x2F84FB0))(this);
	}

};

}
