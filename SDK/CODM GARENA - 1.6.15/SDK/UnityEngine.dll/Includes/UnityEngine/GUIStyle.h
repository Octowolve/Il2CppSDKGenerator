#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUIStyle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUIStyle"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Hover() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Active() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Focused() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_OnNormal() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_OnHover() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_OnActive() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_OnFocused() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Border() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Padding() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_Margin() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Overflow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_FontInternal() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> static T& showKeyboardFocus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479A6FC))(this);
	}
	template <typename T = void> static T CleanupRoots() {
		return ((T (*)(void *))(Il2CppBase() + 0x479A7F8))(0);
	}
	template <typename T = void> T InternalOnAfterDeserialize() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479A8AC))(this);
	}
	template <typename T = uintptr_t> T get_normal() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479A088))(this);
	}
	template <typename T = void> T set_normal(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AC74))(this, value);
	}
	template <typename T = uintptr_t> T get_hover() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479AD48))(this);
	}
	template <typename T = void> T set_hover(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AD80))(this, value);
	}
	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479ADAC))(this);
	}
	template <typename T = void> T set_active(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479ADE4))(this, value);
	}
	template <typename T = uintptr_t> T get_onNormal() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479AE10))(this);
	}
	template <typename T = void> T set_onNormal(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AE48))(this, value);
	}
	template <typename T = uintptr_t> T get_onHover() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479AE74))(this);
	}
	template <typename T = void> T set_onHover(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AEAC))(this, value);
	}
	template <typename T = uintptr_t> T get_onActive() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479AED8))(this);
	}
	template <typename T = void> T set_onActive(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AF10))(this, value);
	}
	template <typename T = uintptr_t> T get_focused() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479AF3C))(this);
	}
	template <typename T = void> T set_focused(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AF74))(this, value);
	}
	template <typename T = uintptr_t> T get_onFocused() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479AFA0))(this);
	}
	template <typename T = void> T set_onFocused(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479AFD8))(this, value);
	}
	template <typename T = uintptr_t> T get_border() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479B004))(this);
	}
	template <typename T = void> T set_border(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479B17C))(this, value);
	}
	template <typename T = uintptr_t> T get_margin() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x477DF58))(this);
	}
	template <typename T = void> T set_margin(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479B250))(this, value);
	}
	template <typename T = uintptr_t> T get_padding() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x4793CCC))(this);
	}
	template <typename T = void> T set_padding(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479B27C))(this, value);
	}
	template <typename T = uintptr_t> T get_overflow() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479B2A8))(this);
	}
	template <typename T = void> T set_overflow(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479B360))(this, value);
	}
	template <typename T = Il2CppVector2> T get_clipOffset() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479B38C))(this);
	}
	template <typename T = void> T set_clipOffset(Il2CppVector2 value) {
		return ((T (*)(GUIStyle*, Il2CppVector2))(Il2CppBase() + 0x479B404))(this, value);
	}
	template <typename T = uintptr_t> T get_font() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x477C174))(this);
	}
	template <typename T = void> T set_font(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479B4D4))(this, value);
	}
	template <typename T = float> T get_lineHeight() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479B590))(this);
	}
	template <typename T = void> static T Internal_Draw(uintptr_t target, Il2CppRect position, uintptr_t content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x479B7C8))(0, target, position, content, isHover, isActive, on, hasKeyboardFocus);
	}
	template <typename T = void> T Draw(Il2CppRect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
		return ((T (*)(GUIStyle*, Il2CppRect, bool, bool, bool, bool))(Il2CppBase() + 0x4781D94))(this, position, isHover, isActive, on, hasKeyboardFocus);
	}
	template <typename T = void> T Draw_1(Il2CppRect position, Il2CppString* text, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
		return ((T (*)(GUIStyle*, Il2CppRect, Il2CppString*, bool, bool, bool, bool))(Il2CppBase() + 0x479B9D0))(this, position, text, isHover, isActive, on, hasKeyboardFocus);
	}
	template <typename T = void> T Draw_2(Il2CppRect position, uintptr_t image, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x479BB00))(this, position, image, isHover, isActive, on, hasKeyboardFocus);
	}
	template <typename T = void> T Draw_3(Il2CppRect position, uintptr_t content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x477EC6C))(this, position, content, isHover, isActive, on, hasKeyboardFocus);
	}
	template <typename T = void> T Draw_4(Il2CppRect position, uintptr_t content, int32_t controlID) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, int32_t))(Il2CppBase() + 0x477985C))(this, position, content, controlID);
	}
	template <typename T = void> T Draw_5(Il2CppRect position, uintptr_t content, int32_t controlID, bool on) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, int32_t, bool))(Il2CppBase() + 0x477C008))(this, position, content, controlID, on);
	}
	template <typename T = void> T DrawCursor(Il2CppRect position, uintptr_t content, int32_t controlID, int32_t Character) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x479BD08))(this, position, content, controlID, Character);
	}
	template <typename T = void> T DrawWithTextSelection(Il2CppRect position, uintptr_t content, int32_t controlID, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter, bool drawSelectionAsComposition) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x479C134))(this, position, content, controlID, firstSelectedCharacter, lastSelectedCharacter, drawSelectionAsComposition);
	}
	template <typename T = void> T DrawWithTextSelection_1(Il2CppRect position, uintptr_t content, int32_t controlID, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x479C628))(this, position, content, controlID, firstSelectedCharacter, lastSelectedCharacter);
	}
	template <typename T = uintptr_t> static T op_Implicit(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x479C66C))(0, str);
	}
	template <typename T = uintptr_t> static T get_none() {
		return ((T (*)(void *))(Il2CppBase() + 0x478098C))(0);
	}
	template <typename T = Il2CppVector2> T GetCursorPixelPosition(Il2CppRect position, uintptr_t content, int32_t cursorStringIndex) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, int32_t))(Il2CppBase() + 0x479C7D8))(this, position, content, cursorStringIndex);
	}
	template <typename T = int32_t> T GetCursorStringIndex(Il2CppRect position, uintptr_t content, Il2CppVector2 cursorPixelPosition) {
		return ((T (*)(GUIStyle*, Il2CppRect, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x479C9A8))(this, position, content, cursorPixelPosition);
	}
	template <typename T = int32_t> T GetNumCharactersThatFitWithinWidth(Il2CppString* text, float width) {
		return ((T (*)(GUIStyle*, Il2CppString*, float))(Il2CppBase() + 0x479CB6C))(this, text, width);
	}
	template <typename T = Il2CppVector2> T CalcSize(uintptr_t content) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x478C3BC))(this, content);
	}
	template <typename T = Il2CppVector2> T CalcSizeWithConstraints(uintptr_t content, Il2CppVector2 constraints) {
		return ((T (*)(GUIStyle*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x4797E88))(this, content, constraints);
	}
	template <typename T = Il2CppVector2> T CalcScreenSize(Il2CppVector2 contentSize) {
		return ((T (*)(GUIStyle*, Il2CppVector2))(Il2CppBase() + 0x479CE40))(this, contentSize);
	}
	template <typename T = float> T CalcHeight(uintptr_t content, float width) {
		return ((T (*)(GUIStyle*, uintptr_t, float))(Il2CppBase() + 0x479D060))(this, content, width);
	}
	template <typename T = bool> T get_isHeightDependantOnWidth() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x4797D18))(this);
	}
	template <typename T = void> T CalcMinMaxWidth(uintptr_t content, uintptr_t* minWidth, uintptr_t* maxWidth) {
		return ((T (*)(GUIStyle*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x479D2F4))(this, content, minWidth, maxWidth);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479D468))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479A59C))(this);
	}
	template <typename T = void> T InitCopy(uintptr_t other) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479A65C))(this, other);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479A760))(this);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x477DAD0))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(GUIStyle*, Il2CppString*))(Il2CppBase() + 0x4799F48))(this, value);
	}
	template <typename T = uintptr_t> T GetStyleStatePtr(int32_t idx) {
		return ((T (*)(GUIStyle*, int32_t))(Il2CppBase() + 0x479AA3C))(this, idx);
	}
	template <typename T = void> static T INTERNAL_CALL_GetStyleStatePtr(uintptr_t self, int32_t idx, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x479D588))(0, self, idx, value);
	}
	template <typename T = void> T AssignStyleState(int32_t idx, uintptr_t srcStyleState) {
		return ((T (*)(GUIStyle*, int32_t, uintptr_t))(Il2CppBase() + 0x479ACA0))(this, idx, srcStyleState);
	}
	template <typename T = uintptr_t> T GetRectOffsetPtr(int32_t idx) {
		return ((T (*)(GUIStyle*, int32_t))(Il2CppBase() + 0x479B0BC))(this, idx);
	}
	template <typename T = void> static T INTERNAL_CALL_GetRectOffsetPtr(uintptr_t self, int32_t idx, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x479D630))(0, self, idx, value);
	}
	template <typename T = void> T AssignRectOffset(int32_t idx, uintptr_t srcRectOffset) {
		return ((T (*)(GUIStyle*, int32_t, uintptr_t))(Il2CppBase() + 0x479B1A8))(this, idx, srcRectOffset);
	}
	template <typename T = uintptr_t> T get_imagePosition() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479D25C))(this);
	}
	template <typename T = void> T set_imagePosition(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479D6D8))(this, value);
	}
	template <typename T = uintptr_t> T get_alignment() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479D778))(this);
	}
	template <typename T = void> T set_alignment(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479D810))(this, value);
	}
	template <typename T = bool> T get_wordWrap() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479D1C4))(this);
	}
	template <typename T = void> T set_wordWrap(bool value) {
		return ((T (*)(GUIStyle*, bool))(Il2CppBase() + 0x479D8B0))(this, value);
	}
	template <typename T = uintptr_t> T get_clipping() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479D950))(this);
	}
	template <typename T = void> T set_clipping(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479D9E8))(this, value);
	}
	template <typename T = Il2CppVector2> T get_contentOffset() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479DA88))(this);
	}
	template <typename T = void> T set_contentOffset(Il2CppVector2 value) {
		return ((T (*)(GUIStyle*, Il2CppVector2))(Il2CppBase() + 0x479DB64))(this, value);
	}
	template <typename T = void> T INTERNAL_get_contentOffset(uintptr_t* value) {
		return ((T (*)(GUIStyle*, uintptr_t*))(Il2CppBase() + 0x479DAC4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_contentOffset(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479DB80))(this, value);
	}
	template <typename T = Il2CppVector2> T get_Internal_clipOffset() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479B3C8))(this);
	}
	template <typename T = void> T set_Internal_clipOffset(Il2CppVector2 value) {
		return ((T (*)(GUIStyle*, Il2CppVector2))(Il2CppBase() + 0x479B420))(this, value);
	}
	template <typename T = void> T INTERNAL_get_Internal_clipOffset(uintptr_t* value) {
		return ((T (*)(GUIStyle*, uintptr_t*))(Il2CppBase() + 0x479DC20))(this, value);
	}
	template <typename T = void> T INTERNAL_set_Internal_clipOffset(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479DCC0))(this, value);
	}
	template <typename T = float> T get_fixedWidth() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x477E010))(this);
	}
	template <typename T = void> T set_fixedWidth(float value) {
		return ((T (*)(GUIStyle*, float))(Il2CppBase() + 0x479DD60))(this, value);
	}
	template <typename T = float> T get_fixedHeight() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x477E0A8))(this);
	}
	template <typename T = void> T set_fixedHeight(float value) {
		return ((T (*)(GUIStyle*, float))(Il2CppBase() + 0x479DE00))(this, value);
	}
	template <typename T = bool> T get_stretchWidth() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x4792040))(this);
	}
	template <typename T = void> T set_stretchWidth(bool value) {
		return ((T (*)(GUIStyle*, bool))(Il2CppBase() + 0x47981F8))(this, value);
	}
	template <typename T = bool> T get_stretchHeight() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x47920D8))(this);
	}
	template <typename T = void> T set_stretchHeight(bool value) {
		return ((T (*)(GUIStyle*, bool))(Il2CppBase() + 0x4799FE8))(this, value);
	}
	template <typename T = float> static T Internal_GetLineHeight(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x479B730))(0, target);
	}
	template <typename T = void> T SetFontInternal(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479B4F0))(this, value);
	}
	template <typename T = uintptr_t> T GetFontInternalDuringLoadingThread() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479A9A4))(this);
	}
	template <typename T = uintptr_t> T GetFontInternal() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479B43C))(this);
	}
	template <typename T = int32_t> T get_fontSize() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479DEA0))(this);
	}
	template <typename T = void> T set_fontSize(int32_t value) {
		return ((T (*)(GUIStyle*, int32_t))(Il2CppBase() + 0x479DF38))(this, value);
	}
	template <typename T = uintptr_t> T get_fontStyle() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479DFD8))(this);
	}
	template <typename T = void> T set_fontStyle(uintptr_t value) {
		return ((T (*)(GUIStyle*, uintptr_t))(Il2CppBase() + 0x479E070))(this, value);
	}
	template <typename T = bool> T get_richText() {
		return ((T (*)(GUIStyle*))(Il2CppBase() + 0x479E110))(this);
	}
	template <typename T = void> T set_richText(bool value) {
		return ((T (*)(GUIStyle*, bool))(Il2CppBase() + 0x479E1A8))(this, value);
	}
	template <typename T = void> static T Internal_Draw_1(uintptr_t content, uintptr_t arguments) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x479B930))(0, content, arguments);
	}
	template <typename T = void> static T Internal_Draw2(uintptr_t style, Il2CppRect position, uintptr_t content, int32_t controlID, bool on) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, uintptr_t, int32_t, bool))(Il2CppBase() + 0x479BC30))(0, style, position, content, controlID, on);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_Draw2(uintptr_t style, uintptr_t position, uintptr_t content, int32_t controlID, bool on) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x479E248))(0, style, position, content, controlID, on);
	}
	template <typename T = void> T SetMouseTooltip(Il2CppString* tooltip, Il2CppRect screenRect) {
		return ((T (*)(GUIStyle*, Il2CppString*, Il2CppRect))(Il2CppBase() + 0x479E300))(this, tooltip, screenRect);
	}
	template <typename T = void> static T INTERNAL_CALL_SetMouseTooltip(uintptr_t self, Il2CppString* tooltip, uintptr_t screenRect) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x479E3C8))(0, self, tooltip, screenRect);
	}
	template <typename T = void> static T Internal_DrawPrefixLabel(uintptr_t style, Il2CppRect position, uintptr_t content, int32_t controlID, bool on) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, uintptr_t, int32_t, bool))(Il2CppBase() + 0x479E470))(0, style, position, content, controlID, on);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_DrawPrefixLabel(uintptr_t style, uintptr_t position, uintptr_t content, int32_t controlID, bool on) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x479E548))(0, style, position, content, controlID, on);
	}
	template <typename T = float> static T Internal_GetCursorFlashOffset() {
		return ((T (*)(void *))(Il2CppBase() + 0x479BFB0))(0);
	}
	template <typename T = void> static T Internal_DrawCursor(uintptr_t target, Il2CppRect position, uintptr_t content, int32_t pos, uintptr_t cursorColor) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x479C040))(0, target, position, content, pos, cursorColor);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_DrawCursor(uintptr_t target, uintptr_t position, uintptr_t content, int32_t pos, uintptr_t cursorColor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x479E600))(0, target, position, content, pos, cursorColor);
	}
	template <typename T = void> static T Internal_DrawWithTextSelection(uintptr_t content, uintptr_t arguments) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x479C588))(0, content, arguments);
	}
	template <typename T = void> static T SetDefaultFont(uintptr_t font) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4798E8C))(0, font);
	}
	template <typename T = void> static T Internal_GetCursorPixelPosition(uintptr_t target, Il2CppRect position, uintptr_t content, int32_t cursorStringIndex, uintptr_t* ret) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x479C8D0))(0, target, position, content, cursorStringIndex, ret);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_GetCursorPixelPosition(uintptr_t target, uintptr_t position, uintptr_t content, int32_t cursorStringIndex, uintptr_t* ret) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x479E6B8))(0, target, position, content, cursorStringIndex, ret);
	}
	template <typename T = int32_t> static T Internal_GetCursorStringIndex(uintptr_t target, Il2CppRect position, uintptr_t content, Il2CppVector2 cursorPixelPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppRect, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x479CA8C))(0, target, position, content, cursorPixelPosition);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_Internal_GetCursorStringIndex(uintptr_t target, uintptr_t position, uintptr_t content, uintptr_t cursorPixelPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x479E770))(0, target, position, content, cursorPixelPosition);
	}
	template <typename T = int32_t> static T Internal_GetNumCharactersThatFitWithinWidth(uintptr_t target, Il2CppString* text, float width) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x479CC28))(0, target, text, width);
	}
	template <typename T = void> static T Internal_CalcSize(uintptr_t target, uintptr_t content, uintptr_t* ret) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x479CCD0))(0, target, content, ret);
	}
	template <typename T = void> static T Internal_CalcSizeWithConstraints(uintptr_t target, uintptr_t content, Il2CppVector2 maxSize, uintptr_t* ret) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t*))(Il2CppBase() + 0x479CD78))(0, target, content, maxSize, ret);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_CalcSizeWithConstraints(uintptr_t target, uintptr_t content, uintptr_t maxSize, uintptr_t* ret) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x479E820))(0, target, content, maxSize, ret);
	}
	template <typename T = float> static T Internal_CalcHeight(uintptr_t target, uintptr_t content, float width) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x479D11C))(0, target, content, width);
	}
	template <typename T = void> static T Internal_CalcMinMaxWidth(uintptr_t target, uintptr_t content, uintptr_t* minWidth, uintptr_t* maxWidth) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x479D3B8))(0, target, content, minWidth, maxWidth);
	}

};

}
