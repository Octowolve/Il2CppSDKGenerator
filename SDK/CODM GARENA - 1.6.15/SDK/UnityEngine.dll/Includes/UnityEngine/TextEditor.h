#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextEditor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextEditor"));
	}

	template <typename T = uintptr_t> T& keyboardOnScreen() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& controlID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& multiline() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hasHorizontalCursorPos() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& isPasswordField() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& m_HasFocus() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = Il2CppVector2> T& scrollOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppRect> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CursorIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_SelectIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_RevealCursor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& graphicalCursorPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& graphicalSelectCursorPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_MouseDragSelectsWholeWords() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_DblClickInitPos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_DblClickSnap() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_bJustSelected() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = int32_t> T& m_iAltCursorPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& oldText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& oldPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& oldSelectPos() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& s_Keyactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D29D3C))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(TextEditor*, Il2CppString*))(Il2CppBase() + 0x4D29D68))(this, value);
	}
	template <typename T = Il2CppRect> T get_position() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D29E9C))(this);
	}
	template <typename T = void> T set_position(Il2CppRect value) {
		return ((T (*)(TextEditor*, Il2CppRect))(Il2CppBase() + 0x4D29EAC))(this, value);
	}
	template <typename T = int32_t> T get_cursorIndex() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A450))(this);
	}
	template <typename T = void> T set_cursorIndex(int32_t value) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2A458))(this, value);
	}
	template <typename T = int32_t> T get_selectIndex() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A48C))(this);
	}
	template <typename T = void> T set_selectIndex(int32_t value) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2A494))(this, value);
	}
	template <typename T = void> T ClearCursorPos() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A4A4))(this);
	}
	template <typename T = void> T OnFocus() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A4B8))(this);
	}
	template <typename T = void> T OnLostFocus() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A5A4))(this);
	}
	template <typename T = void> T GrabGraphicalCursorPos() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A5B8))(this);
	}
	template <typename T = bool> T HandleKeyEvent(uintptr_t e) {
		return ((T (*)(TextEditor*, uintptr_t))(Il2CppBase() + 0x4D2A66C))(this, e);
	}
	template <typename T = bool> T DeleteLineBack() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2B498))(this);
	}
	template <typename T = bool> T DeleteWordBack() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2B840))(this);
	}
	template <typename T = bool> T DeleteWordForward() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2B9EC))(this);
	}
	template <typename T = bool> T Delete() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2BC80))(this);
	}
	template <typename T = bool> T Backspace() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2BD24))(this);
	}
	template <typename T = void> T SelectAll() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A524))(this);
	}
	template <typename T = void> T SelectNone() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2BDFC))(this);
	}
	template <typename T = bool> T get_hasSelection() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2B59C))(this);
	}
	template <typename T = bool> T DeleteSelection() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2B5B4))(this);
	}
	template <typename T = void> T ReplaceSelection(Il2CppString* replace) {
		return ((T (*)(TextEditor*, Il2CppString*))(Il2CppBase() + 0x4D2BE30))(this, replace);
	}
	template <typename T = void> T Insert(char c) {
		return ((T (*)(TextEditor*, char))(Il2CppBase() + 0x4D2BEF4))(this, c);
	}
	template <typename T = void> T MoveRight() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2BF28))(this);
	}
	template <typename T = void> T MoveLeft() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C0FC))(this);
	}
	template <typename T = void> T MoveUp() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C190))(this);
	}
	template <typename T = void> T MoveDown() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C2A0))(this);
	}
	template <typename T = void> T MoveLineStart() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C3EC))(this);
	}
	template <typename T = void> T MoveLineEnd() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C4C0))(this);
	}
	template <typename T = void> T MoveGraphicalLineStart() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C5A0))(this);
	}
	template <typename T = void> T MoveGraphicalLineEnd() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C6A0))(this);
	}
	template <typename T = void> T MoveTextStart() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C7B4))(this);
	}
	template <typename T = void> T MoveTextEnd() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C7FC))(this);
	}
	template <typename T = int32_t> T IndexOfEndOfLine(int32_t startIndex) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2C868))(this, startIndex);
	}
	template <typename T = void> T MoveParagraphForward() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C8C4))(this);
	}
	template <typename T = void> T MoveParagraphBackward() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2C988))(this);
	}
	template <typename T = void> T MoveCursorToPosition(Il2CppVector2 cursorPosition) {
		return ((T (*)(TextEditor*, Il2CppVector2))(Il2CppBase() + 0x4D2CA78))(this, cursorPosition);
	}
	template <typename T = void> T SelectToPosition(Il2CppVector2 cursorPosition) {
		return ((T (*)(TextEditor*, Il2CppVector2))(Il2CppBase() + 0x4D2CB80))(this, cursorPosition);
	}
	template <typename T = void> T SelectLeft() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D048))(this);
	}
	template <typename T = void> T SelectRight() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D0DC))(this);
	}
	template <typename T = void> T SelectUp() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D170))(this);
	}
	template <typename T = void> T SelectDown() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D204))(this);
	}
	template <typename T = void> T SelectTextEnd() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D2C0))(this);
	}
	template <typename T = void> T SelectTextStart() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D318))(this);
	}
	template <typename T = void> T MouseDragSelectsWholeWords(bool on) {
		return ((T (*)(TextEditor*, bool))(Il2CppBase() + 0x4D2D354))(this, on);
	}
	template <typename T = void> T DblClickSnap(uintptr_t snapping) {
		return ((T (*)(TextEditor*, uintptr_t))(Il2CppBase() + 0x4D2D364))(this, snapping);
	}
	template <typename T = int32_t> T GetGraphicalLineStart(int32_t p) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2C61C))(this, p);
	}
	template <typename T = int32_t> T GetGraphicalLineEnd(int32_t p) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2C71C))(this, p);
	}
	template <typename T = int32_t> T FindNextSeperator(int32_t startPos) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2D36C))(this, startPos);
	}
	template <typename T = bool> static T isLetterLikeChar(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4D2D424))(0, c);
	}
	template <typename T = int32_t> T FindPrevSeperator(int32_t startPos) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2D4DC))(this, startPos);
	}
	template <typename T = void> T MoveWordRight() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D590))(this);
	}
	template <typename T = void> T MoveToStartOfNextWord() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D63C))(this);
	}
	template <typename T = void> T MoveToEndOfPreviousWord() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D6C0))(this);
	}
	template <typename T = void> T SelectToStartOfNextWord() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D744))(this);
	}
	template <typename T = void> T SelectToEndOfPreviousWord() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D798))(this);
	}
	template <typename T = uintptr_t> T ClassifyChar(char c) {
		return ((T (*)(TextEditor*, char))(Il2CppBase() + 0x4D2D7EC))(this, c);
	}
	template <typename T = int32_t> T FindStartOfNextWord(int32_t p) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2BA9C))(this, p);
	}
	template <typename T = int32_t> T FindEndOfPreviousWord(int32_t p) {
		return ((T (*)(TextEditor*, int32_t))(Il2CppBase() + 0x4D2B914))(this, p);
	}
	template <typename T = void> T MoveWordLeft() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D8F8))(this);
	}
	template <typename T = void> T SelectWordRight() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2D990))(this);
	}
	template <typename T = void> T SelectWordLeft() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DA20))(this);
	}
	template <typename T = void> T ExpandSelectGraphicalLineStart() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DAB0))(this);
	}
	template <typename T = void> T ExpandSelectGraphicalLineEnd() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DB54))(this);
	}
	template <typename T = void> T SelectGraphicalLineStart() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DBF8))(this);
	}
	template <typename T = void> T SelectGraphicalLineEnd() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DC4C))(this);
	}
	template <typename T = void> T SelectParagraphForward() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DCA0))(this);
	}
	template <typename T = void> T SelectParagraphBackward() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DD60))(this);
	}
	template <typename T = void> T SelectCurrentWord() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DE68))(this);
	}
	template <typename T = int32_t> T FindEndOfClassification(int32_t p, int32_t dir) {
		return ((T (*)(TextEditor*, int32_t, int32_t))(Il2CppBase() + 0x4D2CF7C))(this, p, dir);
	}
	template <typename T = void> T SelectCurrentParagraph() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2DFD8))(this);
	}
	template <typename T = void> T UpdateScrollOffsetIfNeeded(uintptr_t evt) {
		return ((T (*)(TextEditor*, uintptr_t))(Il2CppBase() + 0x4D2E0A4))(this, evt);
	}
	template <typename T = void> T UpdateScrollOffset() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D29F24))(this);
	}
	template <typename T = void> T DrawCursor(Il2CppString* newText) {
		return ((T (*)(TextEditor*, Il2CppString*))(Il2CppBase() + 0x4D2E108))(this, newText);
	}
	template <typename T = bool> T PerformOperation(uintptr_t operation) {
		return ((T (*)(TextEditor*, uintptr_t))(Il2CppBase() + 0x4D2AFB0))(this, operation);
	}
	template <typename T = void> T SaveBackup() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2E970))(this);
	}
	template <typename T = bool> T Cut() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2E6E4))(this);
	}
	template <typename T = void> T Copy() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2E714))(this);
	}
	template <typename T = Il2CppString*> static T ReplaceNewlinesWithSpaces(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4D2E998))(0, value);
	}
	template <typename T = bool> T Paste() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2E82C))(this);
	}
	template <typename T = void> static T MapKey(Il2CppString* key, uintptr_t action) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D2EA74))(0, key, action);
	}
	template <typename T = void> T InitKeyActions() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2A7F4))(this);
	}
	template <typename T = void> T DetectFocusChange() {
		return ((T (*)(TextEditor*))(Il2CppBase() + 0x4D2BFC8))(this);
	}
	template <typename T = void> T ClampTextIndex(uintptr_t index) {
		return ((T (*)(TextEditor*, uintptr_t))(Il2CppBase() + 0x4D29DB0))(this, index);
	}

};

}
