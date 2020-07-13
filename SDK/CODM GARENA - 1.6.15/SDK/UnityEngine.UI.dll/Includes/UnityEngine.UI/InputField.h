#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class InputField
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "InputField"));
	}

	template <typename T = uintptr_t> T& m_Keyboard() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& kSeparators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_TextComponent() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Placeholder() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_ContentType() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_InputType() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = char> T& m_AsteriskChar() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_KeyboardType() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_LineType() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& m_HideMobileInput() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_CharacterValidation() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_CharacterLimit() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_OnEndEdit() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_OnValueChanged() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_OnValidateInput() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_CaretColor() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& m_CustomCaretColor() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_SelectionColor() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_CaretBlinkRate() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& m_CaretWidth() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& m_ReadOnly() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& m_CaretPosition() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& m_CaretSelectPosition() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& caretRectTrans() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CursorVerts() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& m_InputTextCache() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& m_CachedInputRenderer() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = bool> T& m_PreventFontCallback() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& m_AllowInput() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& m_ShouldActivateNextUpdate() {
		return *(T*)((uintptr_t)this + 0x121);
	}
	template <typename T = bool> T& m_UpdateDrag() {
		return *(T*)((uintptr_t)this + 0x122);
	}
	template <typename T = bool> T& m_DragPositionOutOfBounds() {
		return *(T*)((uintptr_t)this + 0x123);
	}
	template <typename T = float> static T& kHScrollSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kVScrollSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_CaretVisible() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& m_BlinkCoroutine() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_BlinkStartTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = int32_t> T& m_DrawStart() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& m_DrawEnd() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& m_DragCoroutine() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppString*> T& m_OriginalText() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& m_WasCanceled() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& m_HasDoneFocusTransition() {
		return *(T*)((uintptr_t)this + 0x141);
	}
	template <typename T = Il2CppString*> static T& kEmailSpecialCharacters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ProcessingEvent() {
		return *(T*)((uintptr_t)this + 0x144);
	}

	template <typename T = uintptr_t> T get_input() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D262C0))(this);
	}
	template <typename T = Il2CppString*> T get_compositionString() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26494))(this);
	}
	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D265BC))(this);
	}
	template <typename T = uintptr_t> T get_cachedInputTextGenerator() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D266B0))(this);
	}
	template <typename T = void> T set_shouldHideMobileInput(bool value) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D26750))(this, value);
	}
	template <typename T = bool> T get_shouldHideMobileInput() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D267E0))(this);
	}
	template <typename T = bool> T get_shouldActivateOnSelect() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2682C))(this);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26854))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(InputField*, Il2CppString*))(Il2CppBase() + 0x3D2685C))(this, value);
	}
	template <typename T = bool> T get_isFocused() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26DFC))(this);
	}
	template <typename T = float> T get_caretBlinkRate() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26E04))(this);
	}
	template <typename T = void> T set_caretBlinkRate(float value) {
		return ((T (*)(InputField*, float))(Il2CppBase() + 0x3D26E0C))(this, value);
	}
	template <typename T = int32_t> T get_caretWidth() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26F1C))(this);
	}
	template <typename T = void> T set_caretWidth(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D26F24))(this, value);
	}
	template <typename T = uintptr_t> T get_textComponent() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27064))(this);
	}
	template <typename T = void> T set_textComponent(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2706C))(this, value);
	}
	template <typename T = uintptr_t> T get_placeholder() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2710C))(this);
	}
	template <typename T = void> T set_placeholder(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27114))(this, value);
	}
	template <typename T = uintptr_t> T get_caretColor() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D271A4))(this);
	}
	template <typename T = void> T set_caretColor(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27228))(this, value);
	}
	template <typename T = bool> T get_customCaretColor() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27220))(this);
	}
	template <typename T = void> T set_customCaretColor(bool value) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D2727C))(this, value);
	}
	template <typename T = uintptr_t> T get_selectionColor() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27298))(this);
	}
	template <typename T = void> T set_selectionColor(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D272A8))(this, value);
	}
	template <typename T = uintptr_t> T get_onEndEdit() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D272FC))(this);
	}
	template <typename T = void> T set_onEndEdit(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27304))(this, value);
	}
	template <typename T = uintptr_t> T get_onValueChange() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27394))(this);
	}
	template <typename T = void> T set_onValueChange(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D273A4))(this, value);
	}
	template <typename T = uintptr_t> T get_onValueChanged() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2739C))(this);
	}
	template <typename T = void> T set_onValueChanged(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D273A8))(this, value);
	}
	template <typename T = uintptr_t> T get_onValidateInput() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26CE0))(this);
	}
	template <typename T = void> T set_onValidateInput(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27438))(this, value);
	}
	template <typename T = int32_t> T get_characterLimit() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26D04))(this);
	}
	template <typename T = void> T set_characterLimit(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D274C8))(this, value);
	}
	template <typename T = uintptr_t> T get_contentType() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27ADC))(this);
	}
	template <typename T = void> T set_contentType(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27AE4))(this, value);
	}
	template <typename T = uintptr_t> T get_lineType() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27C90))(this);
	}
	template <typename T = void> T set_lineType(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27C98))(this, value);
	}
	template <typename T = uintptr_t> T get_inputType() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27E28))(this);
	}
	template <typename T = void> T set_inputType(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27E30))(this, value);
	}
	template <typename T = uintptr_t> T get_keyboardType() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27EF8))(this);
	}
	template <typename T = void> T set_keyboardType(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27F00))(this, value);
	}
	template <typename T = uintptr_t> T get_characterValidation() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26CE8))(this);
	}
	template <typename T = void> T set_characterValidation(uintptr_t value) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D27FB4))(this, value);
	}
	template <typename T = bool> T get_readOnly() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28068))(this);
	}
	template <typename T = void> T set_readOnly(bool value) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D28070))(this, value);
	}
	template <typename T = bool> T get_multiLine() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28078))(this);
	}
	template <typename T = char> T get_asteriskChar() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28090))(this);
	}
	template <typename T = void> T set_asteriskChar(char value) {
		return ((T (*)(InputField*, char))(Il2CppBase() + 0x3D28098))(this, value);
	}
	template <typename T = bool> T get_wasCanceled() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28138))(this);
	}
	template <typename T = void> T ClampPos(uintptr_t pos) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D28140))(this, pos);
	}
	template <typename T = int32_t> T get_caretPositionInternal() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D281AC))(this);
	}
	template <typename T = void> T set_caretPositionInternal(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D281E0))(this, value);
	}
	template <typename T = int32_t> T get_caretSelectPositionInternal() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D281F0))(this);
	}
	template <typename T = void> T set_caretSelectPositionInternal(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D28224))(this, value);
	}
	template <typename T = bool> T get_hasSelection() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28234))(this);
	}
	template <typename T = int32_t> T get_caretPosition() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28264))(this);
	}
	template <typename T = void> T set_caretPosition(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D28298))(this, value);
	}
	template <typename T = int32_t> T get_selectionAnchorPosition() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28354))(this);
	}
	template <typename T = void> T set_selectionAnchorPosition(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D282BC))(this, value);
	}
	template <typename T = int32_t> T get_selectionFocusPosition() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28388))(this);
	}
	template <typename T = void> T set_selectionFocusPosition(int32_t value) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D28308))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D283BC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28710))(this);
	}
	template <typename T = uintptr_t> T CaretBlink() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28C54))(this);
	}
	template <typename T = void> T SetCaretVisible() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28D00))(this);
	}
	template <typename T = void> T SetCaretActive() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26EBC))(this);
	}
	template <typename T = void> T UpdateCaretMaterial() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28D3C))(this);
	}
	template <typename T = void> T OnFocus() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28EE4))(this);
	}
	template <typename T = void> T SelectAll() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28EE8))(this);
	}
	template <typename T = void> T MoveTextEnd(bool shift) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D28F3C))(this, shift);
	}
	template <typename T = void> T MoveTextStart(bool shift) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D28FB0))(this, shift);
	}
	template <typename T = Il2CppString*> static T get_clipboard() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D29008))(0);
	}
	template <typename T = void> static T set_clipboard(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3D290A8))(0, value);
	}
	template <typename T = bool> T InPlaceEditing() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D29150))(this);
	}
	template <typename T = void> T UpdateCaretFromKeyboard() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2916C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2923C))(this);
	}
	template <typename T = Il2CppVector2> T ScreenToLocal(Il2CppVector2 screen) {
		return ((T (*)(InputField*, Il2CppVector2))(Il2CppBase() + 0x3D2A918))(this, screen);
	}
	template <typename T = int32_t> T GetUnclampedCharacterLineFromPosition(Il2CppVector2 pos, uintptr_t generator) {
		return ((T (*)(InputField*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x3D2ACD8))(this, pos, generator);
	}
	template <typename T = int32_t> T GetCharacterIndexFromPosition(Il2CppVector2 pos) {
		return ((T (*)(InputField*, Il2CppVector2))(Il2CppBase() + 0x3D2AF58))(this, pos);
	}
	template <typename T = bool> T MayDrag(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2B4E4))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2B614))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2B634))(this, eventData);
	}
	template <typename T = uintptr_t> T MouseDragOutsideRect(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2B818))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2B8CC))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2B8EC))(this, eventData);
	}
	template <typename T = uintptr_t> T KeyPressed(uintptr_t evt) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2BB40))(this, evt);
	}
	template <typename T = bool> T IsValidChar(char c) {
		return ((T (*)(InputField*, char))(Il2CppBase() + 0x3D2C7E0))(this, c);
	}
	template <typename T = void> T ProcessEvent(uintptr_t e) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2C850))(this, e);
	}
	template <typename T = void> T OnUpdateSelected(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2C854))(this, eventData);
	}
	template <typename T = Il2CppString*> T GetSelectedString() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2C1C4))(this);
	}
	template <typename T = int32_t> T FindtNextWordBegin() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2CA2C))(this);
	}
	template <typename T = void> T MoveRight(bool shift, bool ctrl) {
		return ((T (*)(InputField*, bool, bool))(Il2CppBase() + 0x3D2C678))(this, shift, ctrl);
	}
	template <typename T = int32_t> T FindtPrevWordBegin() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2CB70))(this);
	}
	template <typename T = void> T MoveLeft(bool shift, bool ctrl) {
		return ((T (*)(InputField*, bool, bool))(Il2CppBase() + 0x3D2C520))(this, shift, ctrl);
	}
	template <typename T = int32_t> T DetermineCharacterLine(int32_t charPos, uintptr_t generator) {
		return ((T (*)(InputField*, int32_t, uintptr_t))(Il2CppBase() + 0x3D2CC74))(this, charPos, generator);
	}
	template <typename T = int32_t> T LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar) {
		return ((T (*)(InputField*, int32_t, bool))(Il2CppBase() + 0x3D2CDDC))(this, originalPos, goToFirstChar);
	}
	template <typename T = int32_t> T LineDownCharacterPosition(int32_t originalPos, bool goToLastChar) {
		return ((T (*)(InputField*, int32_t, bool))(Il2CppBase() + 0x3D2D220))(this, originalPos, goToLastChar);
	}
	template <typename T = void> T MoveDown(bool shift) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D2C7D8))(this, shift);
	}
	template <typename T = void> T MoveDown_1(bool shift, bool goToLastChar) {
		return ((T (*)(InputField*, bool, bool))(Il2CppBase() + 0x3D2D5CC))(this, shift, goToLastChar);
	}
	template <typename T = void> T MoveUp(bool shift) {
		return ((T (*)(InputField*, bool))(Il2CppBase() + 0x3D2C7D0))(this, shift);
	}
	template <typename T = void> T MoveUp_1(bool shift, bool goToFirstChar) {
		return ((T (*)(InputField*, bool, bool))(Il2CppBase() + 0x3D2D758))(this, shift, goToFirstChar);
	}
	template <typename T = void> T Delete() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2C2B0))(this);
	}
	template <typename T = void> T ForwardSpace() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2C10C))(this);
	}
	template <typename T = void> T Backspace() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2C040))(this);
	}
	template <typename T = void> T Insert(char c) {
		return ((T (*)(InputField*, char))(Il2CppBase() + 0x3D2D8C4))(this, c);
	}
	template <typename T = void> T SendOnValueChangedAndUpdateLabel() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26DE0))(this);
	}
	template <typename T = void> T SendOnValueChanged() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2D9AC))(this);
	}
	template <typename T = void> T SendOnSubmit() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2DA3C))(this);
	}
	template <typename T = void> T Append(Il2CppString* input) {
		return ((T (*)(InputField*, Il2CppString*))(Il2CppBase() + 0x3D2DACC))(this, input);
	}
	template <typename T = void> T Append_1(char input) {
		return ((T (*)(InputField*, char))(Il2CppBase() + 0x3D2DB84))(this, input);
	}
	template <typename T = void> T UpdateLabel() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2757C))(this);
	}
	template <typename T = bool> T IsSelectionVisible() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2EB40))(this);
	}
	template <typename T = int32_t> static T GetLineStartPosition(uintptr_t gen, int32_t line) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D2EBAC))(0, gen, line);
	}
	template <typename T = int32_t> static T GetLineEndPosition(uintptr_t gen, int32_t line) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3D2B2BC))(0, gen, line);
	}
	template <typename T = void> T SetDrawRangeToContainCaretPosition(int32_t caretPos) {
		return ((T (*)(InputField*, int32_t))(Il2CppBase() + 0x3D2DC4C))(this, caretPos);
	}
	template <typename T = void> T ForceLabelUpdate() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2EDBC))(this);
	}
	template <typename T = void> T MarkGeometryAsDirty() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D26FC4))(this);
	}
	template <typename T = void> T Rebuild(uintptr_t update) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2EDC0))(this, update);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2F34C))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2F350))(this);
	}
	template <typename T = void> T UpdateGeometry() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D2EDCC))(this);
	}
	template <typename T = void> T AssignPositioningIfNeeded() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D29ABC))(this);
	}
	template <typename T = void> T OnFillVBO(uintptr_t vbo) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D2F354))(this, vbo);
	}
	template <typename T = void> T GenerateCaret(uintptr_t vbo, Il2CppVector2 roundingOffset) {
		return ((T (*)(InputField*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x3D2F59C))(this, vbo, roundingOffset);
	}
	template <typename T = void> T CreateCursorVerts() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D30CB8))(this);
	}
	template <typename T = void> T GenerateHightlight(uintptr_t vbo, Il2CppVector2 roundingOffset) {
		return ((T (*)(InputField*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x3D2FE6C))(this, vbo, roundingOffset);
	}
	template <typename T = char> T Validate(Il2CppString* text, int32_t pos, char ch) {
		return ((T (*)(InputField*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x3D2A188))(this, text, pos, ch);
	}
	template <typename T = void> T ActivateInputField() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D30E64))(this);
	}
	template <typename T = void> T ActivateInputFieldInternal() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D29768))(this);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D31020))(this, eventData);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D31054))(this, eventData);
	}
	template <typename T = void> T DeactivateInputField() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D28A34))(this);
	}
	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D31084))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(InputField*, uintptr_t))(Il2CppBase() + 0x3D310AC))(this, eventData);
	}
	template <typename T = void> T EnforceContentType() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27B84))(this);
	}
	template <typename T = void> T EnforceTextHOverflow() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D261D4))(this);
	}
	template <typename T = void> T SetToCustomIfContentTypeIsNot(Il2CppArray<uintptr_t>* allowedContentTypes) {
		return ((T (*)(InputField*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3D27DA8))(this, allowedContentTypes);
	}
	template <typename T = void> T SetToCustom() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D27EE4))(this);
	}
	template <typename T = void> T DoStateTransition(uintptr_t state, bool instant) {
		return ((T (*)(InputField*, uintptr_t, bool))(Il2CppBase() + 0x3D31104))(this, state, instant);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31134))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31138))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D3113C))(this);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31144))(this);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D3131C))(this);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31328))(this);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31330))(this);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D3155C))(this);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31568))(this);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_ICanvasElement_get_transform() {
		return ((T (*)(InputField*))(Il2CppBase() + 0x3D31638))(this);
	}

};

}
