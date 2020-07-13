#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUI"));
	}

	template <typename T = float> static T& s_ScrollStepSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& s_ScrollControlId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& s_HotTextField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& s_BoxHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& s_RepeatButtonHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& s_ToggleHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& s_ButtonGridHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& s_SliderHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& s_BeginGroupHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& s_ScrollviewHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& scrollTroughSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& nextScrollStepTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& s_Skin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& s_ScrollViewStates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = int32_t> static T get_scrollTroughSide() {
		return ((T (*)(void *))(Il2CppBase() + 0x47775D4))(0);
	}
	template <typename T = void> static T set_scrollTroughSide(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4777684))(0, value);
	}
	template <typename T = uintptr_t> static T get_nextScrollStepTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4777738))(0);
	}
	template <typename T = void> static T set_nextScrollStepTime(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4777508))(0, value);
	}
	template <typename T = void> static T set_skin(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47777F4))(0, value);
	}
	template <typename T = uintptr_t> static T get_skin() {
		return ((T (*)(void *))(Il2CppBase() + 0x4777B1C))(0);
	}
	template <typename T = void> static T DoSetSkin(uintptr_t newSkin) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47779BC))(0, newSkin);
	}
	template <typename T = uintptr_t> static T get_matrix() {
		return ((T (*)(void *))(Il2CppBase() + 0x4777DA4))(0);
	}
	template <typename T = void> static T set_matrix(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4777F80))(0, value);
	}
	template <typename T = Il2CppString*> static T get_tooltip() {
		return ((T (*)(void *))(Il2CppBase() + 0x4778078))(0);
	}
	template <typename T = void> static T set_tooltip(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47781C4))(0, value);
	}
	template <typename T = void> static T Label(Il2CppRect position, Il2CppString* text) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*))(Il2CppBase() + 0x47782FC))(0, position, text);
	}
	template <typename T = void> static T Label_1(Il2CppRect position, uintptr_t content) {
		return ((T (*)(void *, Il2CppRect, uintptr_t))(Il2CppBase() + 0x47786A8))(0, position, content);
	}
	template <typename T = void> static T Label_2(Il2CppRect position, Il2CppString* text, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*, uintptr_t))(Il2CppBase() + 0x47787A4))(0, position, text, style);
	}
	template <typename T = void> static T Label_3(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x477858C))(0, position, content, style);
	}
	template <typename T = void> static T DrawTexture(Il2CppRect position, uintptr_t image) {
		return ((T (*)(void *, Il2CppRect, uintptr_t))(Il2CppBase() + 0x4778978))(0, position, image);
	}
	template <typename T = void> static T DrawTexture_1(Il2CppRect position, uintptr_t image, uintptr_t scaleMode) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x4778A44))(0, position, image, scaleMode);
	}
	template <typename T = void> static T DrawTexture_2(Il2CppRect position, uintptr_t image, uintptr_t scaleMode, bool alphaBlend) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4778B18))(0, position, image, scaleMode, alphaBlend);
	}
	template <typename T = void> static T DrawTexture_3(Il2CppRect position, uintptr_t image, uintptr_t scaleMode, bool alphaBlend, float imageAspect) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t, bool, float))(Il2CppBase() + 0x4778BF4))(0, position, image, scaleMode, alphaBlend, imageAspect);
	}
	template <typename T = bool> static T CalculateScaledTextureRects(Il2CppRect position, uintptr_t scaleMode, float imageAspect, uintptr_t outScreenRect, uintptr_t outSourceRect) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x4779198))(0, position, scaleMode, imageAspect, outScreenRect, outSourceRect);
	}
	template <typename T = void> static T Box(Il2CppRect position, Il2CppString* text) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*))(Il2CppBase() + 0x477940C))(0, position, text);
	}
	template <typename T = void> static T Box_1(Il2CppRect position, uintptr_t content) {
		return ((T (*)(void *, Il2CppRect, uintptr_t))(Il2CppBase() + 0x47796C0))(0, position, content);
	}
	template <typename T = void> static T Box_2(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x4779554))(0, position, content, style);
	}
	template <typename T = bool> static T Button(Il2CppRect position, Il2CppString* text) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*))(Il2CppBase() + 0x4779890))(0, position, text);
	}
	template <typename T = bool> static T Button_1(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x47799D8))(0, position, content, style);
	}
	template <typename T = bool> static T RepeatButton(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x4779BB8))(0, position, content, style);
	}
	template <typename T = bool> static T DoRepeatButton(Il2CppRect position, uintptr_t content, uintptr_t style, uintptr_t focusType) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4779C8C))(0, position, content, style, focusType);
	}
	template <typename T = Il2CppString*> static T PasswordField(Il2CppRect position, Il2CppString* password, char maskChar, int32_t maxLength, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*, char, int32_t, uintptr_t))(Il2CppBase() + 0x477A210))(0, position, password, maskChar, maxLength, style);
	}
	template <typename T = Il2CppString*> static T PasswordFieldGetStrToShow(Il2CppString* password, char maskChar) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x477A578))(0, password, maskChar);
	}
	template <typename T = Il2CppString*> static T TextArea(Il2CppRect position, Il2CppString* text) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*))(Il2CppBase() + 0x477AD30))(0, position, text);
	}
	template <typename T = void> static T DoTextField(Il2CppRect position, int32_t id, uintptr_t content, bool multiline, int32_t maxLength, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, int32_t, uintptr_t, bool, int32_t, uintptr_t))(Il2CppBase() + 0x477AC34))(0, position, id, content, multiline, maxLength, style);
	}
	template <typename T = void> static T DoTextField_1(Il2CppRect position, int32_t id, uintptr_t content, bool multiline, int32_t maxLength, uintptr_t style, Il2CppString* secureText) {
		return ((T (*)(void *, Il2CppRect, int32_t, uintptr_t, bool, int32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x477AECC))(0, position, id, content, multiline, maxLength, style, secureText);
	}
	template <typename T = void> static T DoTextField_2(Il2CppRect position, int32_t id, uintptr_t content, bool multiline, int32_t maxLength, uintptr_t style, Il2CppString* secureText, char maskChar) {
		return ((T (*)(void *, Il2CppRect, int32_t, uintptr_t, bool, int32_t, uintptr_t, Il2CppString*, char))(Il2CppBase() + 0x477A848))(0, position, id, content, multiline, maxLength, style, secureText, maskChar);
	}
	template <typename T = void> static T HandleTextFieldEventForTouchscreen(Il2CppRect position, int32_t id, uintptr_t content, bool multiline, int32_t maxLength, uintptr_t style, Il2CppString* secureText, char maskChar, uintptr_t editor) {
		return ((T (*)(void *, Il2CppRect, int32_t, uintptr_t, bool, int32_t, uintptr_t, Il2CppString*, char, uintptr_t))(Il2CppBase() + 0x477B07C))(0, position, id, content, multiline, maxLength, style, secureText, maskChar, editor);
	}
	template <typename T = void> static T HandleTextFieldEventForDesktop(Il2CppRect position, int32_t id, uintptr_t content, bool multiline, int32_t maxLength, uintptr_t style, uintptr_t editor) {
		return ((T (*)(void *, Il2CppRect, int32_t, uintptr_t, bool, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x477B5F4))(0, position, id, content, multiline, maxLength, style, editor);
	}
	template <typename T = bool> static T Toggle(Il2CppRect position, bool value, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x477C2A8))(0, position, value, content, style);
	}
	template <typename T = int32_t> static T Toolbar(Il2CppRect position, int32_t selected, Il2CppArray<uintptr_t>* contents, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, int32_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x477C4D8))(0, position, selected, contents, style);
	}
	template <typename T = int32_t> static T SelectionGrid(Il2CppRect position, int32_t selected, Il2CppArray<uintptr_t>* contents, int32_t xCount, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x477D970))(0, position, selected, contents, xCount, style);
	}
	template <typename T = void> static T FindStyles(uintptr_t style, uintptr_t* firstStyle, uintptr_t* midStyle, uintptr_t* lastStyle, Il2CppString* first, Il2CppString* mid, Il2CppString* last) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x477C684))(0, style, firstStyle, midStyle, lastStyle, first, mid, last);
	}
	template <typename T = int32_t> static T CalcTotalHorizSpacing(int32_t xCount, uintptr_t style, uintptr_t firstStyle, uintptr_t midStyle, uintptr_t lastStyle) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x477DCFC))(0, xCount, style, firstStyle, midStyle, lastStyle);
	}
	template <typename T = int32_t> static T DoButtonGrid(Il2CppRect position, int32_t selected, Il2CppArray<uintptr_t>* contents, int32_t xCount, uintptr_t style, uintptr_t firstStyle, uintptr_t midStyle, uintptr_t lastStyle) {
		return ((T (*)(void *, Il2CppRect, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x477C978))(0, position, selected, contents, xCount, style, firstStyle, midStyle, lastStyle);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CalcMouseRects(Il2CppRect position, int32_t count, int32_t xCount, float elemWidth, float elemHeight, uintptr_t style, uintptr_t firstStyle, uintptr_t midStyle, uintptr_t lastStyle, bool addBorders) {
		return ((T (*)(void *, Il2CppRect, int32_t, int32_t, float, float, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x477E140))(0, position, count, xCount, elemWidth, elemHeight, style, firstStyle, midStyle, lastStyle, addBorders);
	}
	template <typename T = int32_t> static T GetButtonGridMouseSelection(Il2CppArray<uintptr_t>* buttonRects, Il2CppVector2 mousePos, bool findNearest) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppVector2, bool))(Il2CppBase() + 0x477E7E0))(0, buttonRects, mousePos, findNearest);
	}
	template <typename T = float> static T HorizontalSlider(Il2CppRect position, float value, float leftValue, float rightValue, uintptr_t slider, uintptr_t thumb) {
		return ((T (*)(void *, Il2CppRect, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x477ED80))(0, position, value, leftValue, rightValue, slider, thumb);
	}
	template <typename T = float> static T VerticalSlider(Il2CppRect position, float value, float topValue, float bottomValue, uintptr_t slider, uintptr_t thumb) {
		return ((T (*)(void *, Il2CppRect, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x477F094))(0, position, value, topValue, bottomValue, slider, thumb);
	}
	template <typename T = float> static T Slider(Il2CppRect position, float value, float size, float start, float end, uintptr_t slider, uintptr_t thumb, bool horiz, int32_t id) {
		return ((T (*)(void *, Il2CppRect, float, float, float, float, uintptr_t, uintptr_t, bool, int32_t))(Il2CppBase() + 0x477EE8C))(0, position, value, size, start, end, slider, thumb, horiz, id);
	}
	template <typename T = float> static T HorizontalScrollbar(Il2CppRect position, float value, float size, float leftValue, float rightValue, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, float, float, float, float, uintptr_t))(Il2CppBase() + 0x477F19C))(0, position, value, size, leftValue, rightValue, style);
	}
	template <typename T = bool> static T ScrollerRepeatButton(int32_t scrollerID, Il2CppRect rect, uintptr_t style) {
		return ((T (*)(void *, int32_t, Il2CppRect, uintptr_t))(Il2CppBase() + 0x477FF58))(0, scrollerID, rect, style);
	}
	template <typename T = float> static T VerticalScrollbar(Il2CppRect position, float value, float size, float topValue, float bottomValue, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, float, float, float, float, uintptr_t))(Il2CppBase() + 0x4780438))(0, position, value, size, topValue, bottomValue, style);
	}
	template <typename T = float> static T Scroller(Il2CppRect position, float value, float size, float leftValue, float rightValue, uintptr_t slider, uintptr_t thumb, uintptr_t leftButton, uintptr_t rightButton, bool horiz) {
		return ((T (*)(void *, Il2CppRect, float, float, float, float, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x477F7B0))(0, position, value, size, leftValue, rightValue, slider, thumb, leftButton, rightButton, horiz);
	}
	template <typename T = void> static T BeginGroup(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x4780694))(0, position, content, style);
	}
	template <typename T = void> static T EndGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x4780AF4))(0);
	}
	template <typename T = Il2CppVector2> static T BeginScrollView(Il2CppRect position, Il2CppVector2 scrollPosition, Il2CppRect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, uintptr_t horizontalScrollbar, uintptr_t verticalScrollbar, uintptr_t background) {
		return ((T (*)(void *, Il2CppRect, Il2CppVector2, Il2CppRect, bool, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4780C20))(0, position, scrollPosition, viewRect, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background);
	}
	template <typename T = void> static T EndScrollView(bool handleScrollWheel) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4781EEC))(0, handleScrollWheel);
	}
	template <typename T = Il2CppRect> static T Window(int32_t id, Il2CppRect clientRect, uintptr_t func, uintptr_t title, uintptr_t style) {
		return ((T (*)(void *, int32_t, Il2CppRect, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4782234))(0, id, clientRect, func, title, style);
	}
	template <typename T = Il2CppRect> static T DoWindow(int32_t id, Il2CppRect clientRect, uintptr_t func, uintptr_t title, uintptr_t style, uintptr_t skin, bool forceRectOnLayout) {
		return ((T (*)(void *, int32_t, Il2CppRect, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x478237C))(0, id, clientRect, func, title, style, skin, forceRectOnLayout);
	}
	template <typename T = void> static T CallWindowDelegate(uintptr_t func, int32_t id, int32_t instanceID, uintptr_t _skin, int32_t forceRect, float width, float height, uintptr_t style) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t, int32_t, float, float, uintptr_t))(Il2CppBase() + 0x4782608))(0, func, id, instanceID, _skin, forceRect, width, height, style);
	}
	template <typename T = uintptr_t> static T get_color() {
		return ((T (*)(void *))(Il2CppBase() + 0x47790DC))(0);
	}
	template <typename T = void> static T set_color(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4789DA4))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_color(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4789D0C))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_color(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4789E54))(0, value);
	}
	template <typename T = uintptr_t> static T get_backgroundColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x4789EEC))(0);
	}
	template <typename T = void> static T set_backgroundColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478A040))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_backgroundColor(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x4789FA8))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_backgroundColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478A0F0))(0, value);
	}
	template <typename T = uintptr_t> static T get_contentColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x478A188))(0);
	}
	template <typename T = void> static T set_contentColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478A2DC))(0, value);
	}
	template <typename T = void> static T INTERNAL_get_contentColor(uintptr_t* value) {
		return ((T (*)(void *, uintptr_t*))(Il2CppBase() + 0x478A244))(0, value);
	}
	template <typename T = void> static T INTERNAL_set_contentColor(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x478A38C))(0, value);
	}
	template <typename T = bool> static T get_changed() {
		return ((T (*)(void *))(Il2CppBase() + 0x477A67C))(0);
	}
	template <typename T = void> static T set_changed(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x477A70C))(0, value);
	}
	template <typename T = bool> static T get_enabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x477EBDC))(0);
	}
	template <typename T = void> static T set_enabled(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x478A424))(0, value);
	}
	template <typename T = void> static T ToggleGUIEvent(bool open) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x478A4BC))(0, open);
	}
	template <typename T = Il2CppString*> static T Internal_GetTooltip() {
		return ((T (*)(void *))(Il2CppBase() + 0x4778134))(0);
	}
	template <typename T = void> static T Internal_SetTooltip(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4778264))(0, value);
	}
	template <typename T = int32_t> static T get_depth() {
		return ((T (*)(void *))(Il2CppBase() + 0x478A554))(0);
	}
	template <typename T = void> static T set_depth(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x478A5E4))(0, value);
	}
	template <typename T = void> static T DoLabel(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x47788B4))(0, position, content, style);
	}
	template <typename T = void> static T INTERNAL_CALL_DoLabel(uintptr_t position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x478A67C))(0, position, content, style);
	}
	template <typename T = uintptr_t> static T get_blendMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x4778FBC))(0);
	}
	template <typename T = uintptr_t> static T get_blitMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x477904C))(0);
	}
	template <typename T = bool> static T DoButton(Il2CppRect position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x4779AF4))(0, position, content, style);
	}
	template <typename T = bool> static T INTERNAL_CALL_DoButton(uintptr_t position, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x478A724))(0, position, content, style);
	}
	template <typename T = bool> static T DoToggle(Il2CppRect position, int32_t id, bool value, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x477C404))(0, position, id, value, content, style);
	}
	template <typename T = bool> static T INTERNAL_CALL_DoToggle(uintptr_t position, int32_t id, bool value, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, uintptr_t, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x478A7CC))(0, position, id, value, content, style);
	}
	template <typename T = bool> static T get_usePageScrollbars() {
		return ((T (*)(void *))(Il2CppBase() + 0x478A884))(0);
	}
	template <typename T = void> static T InternalRepaintEditorWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x47803A8))(0);
	}
	template <typename T = Il2CppRect> static T Internal_DoWindow(int32_t id, int32_t instanceID, Il2CppRect clientRect, uintptr_t func, uintptr_t title, uintptr_t style, uintptr_t skin, bool forceRectOnLayout) {
		return ((T (*)(void *, int32_t, int32_t, Il2CppRect, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x47824F0))(0, id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout);
	}
	template <typename T = void> static T INTERNAL_CALL_Internal_DoWindow(int32_t id, int32_t instanceID, uintptr_t clientRect, uintptr_t func, uintptr_t title, uintptr_t style, uintptr_t skin, bool forceRectOnLayout, uintptr_t* value) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x478A914))(0, id, instanceID, clientRect, func, title, style, skin, forceRectOnLayout, value);
	}

};

}
