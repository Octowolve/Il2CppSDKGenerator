#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUILayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUILayout"));
	}


	template <typename T = void> static T Label(Il2CppString* text, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478CD3C))(0, text, options);
	}
	template <typename T = void> static T Label_1(uintptr_t content, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478CF58))(0, content, options);
	}
	template <typename T = void> static T Label_2(Il2CppString* text, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D024))(0, text, style, options);
	}
	template <typename T = void> static T Label_3(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D0E4))(0, content, style, options);
	}
	template <typename T = void> static T DoLabel(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478CE4C))(0, content, style, options);
	}
	template <typename T = void> static T Box(uintptr_t content, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D1D0))(0, content, options);
	}
	template <typename T = void> static T Box_1(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D3A8))(0, content, style, options);
	}
	template <typename T = void> static T DoBox(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D29C))(0, content, style, options);
	}
	template <typename T = bool> static T Button(Il2CppString* text, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D3C0))(0, text, options);
	}
	template <typename T = bool> static T Button_1(uintptr_t content, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D5DC))(0, content, options);
	}
	template <typename T = bool> static T Button_2(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D6A8))(0, content, style, options);
	}
	template <typename T = bool> static T DoButton(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D4D0))(0, content, style, options);
	}
	template <typename T = bool> static T RepeatButton(uintptr_t content, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D6C0))(0, content, options);
	}
	template <typename T = bool> static T RepeatButton_1(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D898))(0, content, style, options);
	}
	template <typename T = bool> static T DoRepeatButton(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D78C))(0, content, style, options);
	}
	template <typename T = Il2CppString*> static T TextField(Il2CppString* text, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D8B0))(0, text, options);
	}
	template <typename T = Il2CppString*> static T TextField_1(Il2CppString* text, int32_t maxLength, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478DCF0))(0, text, maxLength, options);
	}
	template <typename T = Il2CppString*> static T TextField_2(Il2CppString* text, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478DDC8))(0, text, style, options);
	}
	template <typename T = Il2CppString*> static T TextField_3(Il2CppString* text, int32_t maxLength, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478DDEC))(0, text, maxLength, style, options);
	}
	template <typename T = Il2CppString*> static T PasswordField(Il2CppString* password, char maskChar, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, char, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478DE14))(0, password, maskChar, style, options);
	}
	template <typename T = Il2CppString*> static T PasswordField_1(Il2CppString* password, char maskChar, int32_t maxLength, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, char, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478DE3C))(0, password, maskChar, maxLength, style, options);
	}
	template <typename T = Il2CppString*> static T DoTextField(Il2CppString* text, int32_t maxLength, bool multiline, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478D98C))(0, text, maxLength, multiline, style, options);
	}
	template <typename T = bool> static T Toggle(bool value, Il2CppString* text, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478DFC8))(0, value, text, options);
	}
	template <typename T = bool> static T Toggle_1(bool value, uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E1FC))(0, value, content, style, options);
	}
	template <typename T = bool> static T DoToggle(bool value, uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E0E8))(0, value, content, style, options);
	}
	template <typename T = int32_t> static T Toolbar(int32_t selected, Il2CppArray<uintptr_t>* contents, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E21C))(0, selected, contents, style, options);
	}
	template <typename T = int32_t> static T SelectionGrid(int32_t selected, Il2CppArray<uintptr_t>* texts, int32_t xCount, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E6F0))(0, selected, texts, xCount, options);
	}
	template <typename T = int32_t> static T SelectionGrid_1(int32_t selected, Il2CppArray<uintptr_t>* contents, int32_t xCount, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E810))(0, selected, contents, xCount, style, options);
	}
	template <typename T = float> static T HorizontalSlider(float value, float leftValue, float rightValue, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, float, float, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E8F4))(0, value, leftValue, rightValue, options);
	}
	template <typename T = float> static T DoHorizontalSlider(float value, float leftValue, float rightValue, uintptr_t slider, uintptr_t thumb, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, float, float, float, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478E9F4))(0, value, leftValue, rightValue, slider, thumb, options);
	}
	template <typename T = float> static T VerticalSlider(float value, float leftValue, float rightValue, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, float, float, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478EB88))(0, value, leftValue, rightValue, options);
	}
	template <typename T = float> static T DoVerticalSlider(float value, float leftValue, float rightValue, uintptr_t slider, uintptr_t thumb, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, float, float, float, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478EC88))(0, value, leftValue, rightValue, slider, thumb, options);
	}
	template <typename T = void> static T Space(float pixels) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x478EE1C))(0, pixels);
	}
	template <typename T = void> static T FlexibleSpace() {
		return ((T (*)(void *))(Il2CppBase() + 0x478F26C))(0);
	}
	template <typename T = void> static T BeginHorizontal(Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478F61C))(0, options);
	}
	template <typename T = void> static T BeginHorizontal_1(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478F724))(0, content, style, options);
	}
	template <typename T = void> static T EndHorizontal() {
		return ((T (*)(void *))(Il2CppBase() + 0x478FD14))(0);
	}
	template <typename T = void> static T BeginVertical(Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x478FF80))(0, options);
	}
	template <typename T = void> static T BeginVertical_1(uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47902B4))(0, style, options);
	}
	template <typename T = void> static T BeginVertical_2(uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4790088))(0, content, style, options);
	}
	template <typename T = void> static T EndVertical() {
		return ((T (*)(void *))(Il2CppBase() + 0x4790380))(0);
	}
	template <typename T = void> static T BeginArea(Il2CppRect screenRect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x4790418))(0, screenRect);
	}
	template <typename T = void> static T BeginArea_1(Il2CppRect screenRect, Il2CppString* text) {
		return ((T (*)(void *, Il2CppRect, Il2CppString*))(Il2CppBase() + 0x47907D8))(0, screenRect, text);
	}
	template <typename T = void> static T BeginArea_2(Il2CppRect screenRect, uintptr_t content, uintptr_t style) {
		return ((T (*)(void *, Il2CppRect, uintptr_t, uintptr_t))(Il2CppBase() + 0x4790538))(0, screenRect, content, style);
	}
	template <typename T = void> static T EndArea() {
		return ((T (*)(void *))(Il2CppBase() + 0x4790C5C))(0);
	}
	template <typename T = Il2CppVector2> static T BeginScrollView(Il2CppVector2 scrollPosition, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppVector2, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4790E28))(0, scrollPosition, options);
	}
	template <typename T = Il2CppVector2> static T BeginScrollView_1(Il2CppVector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppVector2, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4791334))(0, scrollPosition, alwaysShowHorizontal, alwaysShowVertical, options);
	}
	template <typename T = Il2CppVector2> static T BeginScrollView_2(Il2CppVector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, uintptr_t horizontalScrollbar, uintptr_t verticalScrollbar, uintptr_t background, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, Il2CppVector2, bool, bool, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4790F5C))(0, scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, options);
	}
	template <typename T = void> static T EndScrollView() {
		return ((T (*)(void *))(Il2CppBase() + 0x4791454))(0);
	}
	template <typename T = void> static T EndScrollView_1(bool handleScrollWheel) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x479145C))(0, handleScrollWheel);
	}
	template <typename T = Il2CppRect> static T Window(int32_t id, Il2CppRect screenRect, uintptr_t func, Il2CppString* text, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, int32_t, Il2CppRect, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4791538))(0, id, screenRect, func, text, options);
	}
	template <typename T = Il2CppRect> static T DoWindow(int32_t id, Il2CppRect screenRect, uintptr_t func, uintptr_t content, uintptr_t style, Il2CppArray<uintptr_t>* options) {
		return ((T (*)(void *, int32_t, Il2CppRect, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47916A0))(0, id, screenRect, func, content, style, options);
	}
	template <typename T = uintptr_t> static T Width(float width) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4782C54))(0, width);
	}
	template <typename T = uintptr_t> static T MinWidth(float minWidth) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x47918CC))(0, minWidth);
	}
	template <typename T = uintptr_t> static T MaxWidth(float maxWidth) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4791998))(0, maxWidth);
	}
	template <typename T = uintptr_t> static T Height(float height) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4782D20))(0, height);
	}
	template <typename T = uintptr_t> static T MinHeight(float minHeight) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4791A64))(0, minHeight);
	}
	template <typename T = uintptr_t> static T MaxHeight(float maxHeight) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4791B30))(0, maxHeight);
	}
	template <typename T = uintptr_t> static T ExpandWidth(bool expand) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x478F558))(0, expand);
	}
	template <typename T = uintptr_t> static T ExpandHeight(bool expand) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x478F494))(0, expand);
	}

};

}
