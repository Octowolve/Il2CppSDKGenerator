#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIInput"));
	}

	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& selection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& otherLanguageLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& arabicLanguageLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& inputType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& onReturnKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& keyboardType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& hideInput() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& selectAllTextOnFocus() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& validation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& characterLimit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& chatCharacterLimit() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& savedAs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& selectOnTab() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& activeTextColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& caretColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& selectionColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onSubmit() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onChange() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onReachChatCharacterLimit() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& onDeselect() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& onValidate() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& strByteCount() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& mValue() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& mDefaultText() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& mDefaultColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& mPosition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& mDoInit() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& mAlignment() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& mLoadSavedValue() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> static T& mDrawStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& mLastIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& mKeyboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& mWaitForKeyboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> T& mSelectionStart() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& mSelectionEnd() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mHighlight() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& mCaret() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& mBlankTex() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& mNextBlink() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& mLastAlpha() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& mCached() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& mSelectMe() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& mSelectTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& mCam() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& mEllipsis() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> static T& mIgnoreKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StrLenthCaculate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Validate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckArabic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveToPlayerPrefs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeselectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoBackspace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Insert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCharUnderMouse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cleanup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Submit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Validate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteOnChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteOnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExecuteOnDeselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = uintptr_t> T get_WrapperLabel() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F3218))(this);
	}
	template <typename T = Il2CppString*> T get_defaultText() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F32CC))(this);
	}
	template <typename T = void> T set_defaultText(Il2CppString* value) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F35C8))(this, value);
	}
	template <typename T = uintptr_t> T get_defaultColor() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F4900))(this);
	}
	template <typename T = void> T set_defaultColor(uintptr_t value) {
		return ((T (*)(UIInput*, uintptr_t))(Il2CppBase() + 0x39F4930))(this, value);
	}
	template <typename T = bool> T get_inputShouldBeHidden() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F4AAC))(this);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F4BC4))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F4C0C))(this, value);
	}
	template <typename T = Il2CppString*> T get_value() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F4BE8))(this);
	}
	template <typename T = void> T set_value(Il2CppString* value) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F4C14))(this, value);
	}
	template <typename T = void> T Set(Il2CppString* value, bool notify) {
		return ((T (*)(UIInput*, Il2CppString*, bool))(Il2CppBase() + 0x39F4C1C))(this, value, notify);
	}
	template <typename T = bool> T get_selected() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F59B0))(this);
	}
	template <typename T = void> T set_selected(bool value) {
		return ((T (*)(UIInput*, bool))(Il2CppBase() + 0x39F59B4))(this, value);
	}
	template <typename T = bool> T get_isSelected() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F49AC))(this);
	}
	template <typename T = void> T set_isSelected(bool value) {
		return ((T (*)(UIInput*, bool))(Il2CppBase() + 0x39F59B8))(this, value);
	}
	template <typename T = int32_t> T get_cursorPosition() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F5AC0))(this);
	}
	template <typename T = void> T set_cursorPosition(int32_t value) {
		return ((T (*)(UIInput*, int32_t))(Il2CppBase() + 0x39F5BD4))(this, value);
	}
	template <typename T = int32_t> T get_cursorPositionForChat() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F5CC4))(this);
	}
	template <typename T = int32_t> T get_selectionStart() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F5CC8))(this);
	}
	template <typename T = void> T set_selectionStart(int32_t value) {
		return ((T (*)(UIInput*, int32_t))(Il2CppBase() + 0x39F5DE4))(this, value);
	}
	template <typename T = int32_t> T get_selectionEnd() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F5ED4))(this);
	}
	template <typename T = void> T set_selectionEnd(int32_t value) {
		return ((T (*)(UIInput*, int32_t))(Il2CppBase() + 0x39F5FE8))(this, value);
	}
	template <typename T = uintptr_t> T get_caret() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F60D8))(this);
	}
	template <typename T = int32_t> T StrLenthCaculate(Il2CppString* str) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F60E0))(this, str);
	}
	template <typename T = Il2CppString*> T Validate(Il2CppString* val) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F523C))(this, val);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F69DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F6EC8))(this);
	}
	template <typename T = void> T CheckArabic() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F5024))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F32F0))(this);
	}
	template <typename T = void> T SaveToPlayerPrefs(Il2CppString* val) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F55BC))(this, val);
	}
	template <typename T = void> T OnSelect(bool isSelected) {
		return ((T (*)(UIInput*, bool))(Il2CppBase() + 0x39F6F9C))(this, isSelected);
	}
	template <typename T = void> T OnSelectEvent() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F7118))(this);
	}
	template <typename T = void> T OnDeselectEvent() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F7390))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F7CE8))(this);
	}
	template <typename T = void> T OnKey(uintptr_t key) {
		return ((T (*)(UIInput*, uintptr_t))(Il2CppBase() + 0x39F9CBC))(this, key);
	}
	template <typename T = void> T DoBackspace() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F9888))(this);
	}
	template <typename T = int32_t> T GetStringLength(Il2CppString* str) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F6274))(this, str);
	}
	template <typename T = void> T Insert(Il2CppString* text) {
		return ((T (*)(UIInput*, Il2CppString*))(Il2CppBase() + 0x39F9FC0))(this, text);
	}
	template <typename T = Il2CppString*> T GetLeftText() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FA478))(this);
	}
	template <typename T = Il2CppString*> T GetRightText() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FA708))(this);
	}
	template <typename T = Il2CppString*> T GetSelection() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FA910))(this);
	}
	template <typename T = int32_t> T GetCharUnderMouse() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FAB20))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(UIInput*, bool))(Il2CppBase() + 0x39FADE4))(this, isPressed);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UIInput*, Il2CppVector2))(Il2CppBase() + 0x39FB06C))(this, delta);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FB250))(this);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FB330))(this);
	}
	template <typename T = void> T Submit() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F9A2C))(this);
	}
	template <typename T = void> T UpdateLabel() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F35F8))(this);
	}
	template <typename T = char> T Validate_1(Il2CppString* text, int32_t pos, char ch) {
		return ((T (*)(UIInput*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x39F6488))(this, text, pos, ch);
	}
	template <typename T = void> T ExecuteOnChange() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F5750))(this);
	}
	template <typename T = void> T ExecuteOnReachChatCharacterLimit() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F7A88))(this);
	}
	template <typename T = void> T ExecuteOnDeselect() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F7828))(this);
	}
	template <typename T = void> T RemoveFocus() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FB578))(this);
	}
	template <typename T = void> T SaveValue() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39FB650))(this);
	}
	template <typename T = void> T LoadValue() {
		return ((T (*)(UIInput*))(Il2CppBase() + 0x39F6CD8))(this);
	}

};

}
