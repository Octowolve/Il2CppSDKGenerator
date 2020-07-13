#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtFont
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtFont"));
	}

	template <typename T = Il2CppString*> T& Face() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Size() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Bold() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Italic() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T get_Face() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x475BBA4))(this);
	}
	template <typename T = void> T set_Face(Il2CppString* value) {
		return ((T (*)(HtFont*, Il2CppString*))(Il2CppBase() + 0x4766D28))(this, value);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x475BB8C))(this);
	}
	template <typename T = void> T set_Size(int32_t value) {
		return ((T (*)(HtFont*, int32_t))(Il2CppBase() + 0x4766D30))(this, value);
	}
	template <typename T = bool> T get_Bold() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x475BB94))(this);
	}
	template <typename T = void> T set_Bold(bool value) {
		return ((T (*)(HtFont*, bool))(Il2CppBase() + 0x4766D38))(this, value);
	}
	template <typename T = bool> T get_Italic() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x475BB9C))(this);
	}
	template <typename T = void> T set_Italic(bool value) {
		return ((T (*)(HtFont*, bool))(Il2CppBase() + 0x4766D40))(this, value);
	}
	template <typename T = int32_t> T get_LineSpacing() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_WhiteSize() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Measure(Il2CppString* text) {
		return ((T (*)(HtFont*, Il2CppString*))(Il2CppBase() + 0x0))(this, text);
	}
	template <typename T = void> T Draw(Il2CppString* id, uintptr_t rect, uintptr_t color, Il2CppString* text, bool isEffect, uintptr_t effect, uintptr_t effectColor, int32_t effectAmount, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(HtFont*, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, bool, uintptr_t, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, id, rect, color, text, isEffect, effect, effectColor, effectAmount, linkText, userData);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x4766D48))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(HtFont*))(Il2CppBase() + 0x47670B8))(this);
	}

};

}
