#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UITextList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITextList"));
	}

	template <typename T = uintptr_t> T& textLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& scrollBar() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& style() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& paragraphHistory() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mSeparator() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mScroll() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mTotalLines() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mLastWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mLastHeight() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& mParagraphs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> static T& mHistory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScroll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rebuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVisibleText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void*> T get_paragraphs() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB1604))(this);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB17E0))(this);
	}
	template <typename T = float> T get_scrollValue() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB1914))(this);
	}
	template <typename T = void> T set_scrollValue(float value) {
		return ((T (*)(UITextList*, float))(Il2CppBase() + 0x2FB191C))(this, value);
	}
	template <typename T = float> T get_lineHeight() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB1E9C))(this);
	}
	template <typename T = int32_t> T get_scrollHeight() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB1FB0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB20D4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB21D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB2484))(this);
	}
	template <typename T = void> T OnScroll(float val) {
		return ((T (*)(UITextList*, float))(Il2CppBase() + 0x2FB2A9C))(this, val);
	}
	template <typename T = void> T OnDrag(Il2CppVector2 delta) {
		return ((T (*)(UITextList*, Il2CppVector2))(Il2CppBase() + 0x2FB2BCC))(this, delta);
	}
	template <typename T = void> T OnScrollBar() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB2D04))(this);
	}
	template <typename T = void> T Add(Il2CppString* text) {
		return ((T (*)(UITextList*, Il2CppString*))(Il2CppBase() + 0x2FB2E18))(this, text);
	}
	template <typename T = void> T Add_1(Il2CppString* text, bool updateVisible) {
		return ((T (*)(UITextList*, Il2CppString*, bool))(Il2CppBase() + 0x2FB2EFC))(this, text, updateVisible);
	}
	template <typename T = void> T Rebuild() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB25B8))(this);
	}
	template <typename T = void> T UpdateVisibleText() {
		return ((T (*)(UITextList*))(Il2CppBase() + 0x2FB1A90))(this);
	}

};

}
