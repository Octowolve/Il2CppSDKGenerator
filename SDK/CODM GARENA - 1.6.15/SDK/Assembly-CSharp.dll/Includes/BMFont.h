#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BMFont
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BMFont"));
	}

	template <typename T = int32_t> T& mSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mBase() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& mSpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mSaved() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mDict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlyph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGlyph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Trim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_isValid() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE610))(this);
	}
	template <typename T = int32_t> T get_charSize() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE6B8))(this);
	}
	template <typename T = void> T set_charSize(int32_t value) {
		return ((T (*)(BMFont*, int32_t))(Il2CppBase() + 0x35BE6C0))(this, value);
	}
	template <typename T = int32_t> T get_baseOffset() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE6C8))(this);
	}
	template <typename T = void> T set_baseOffset(int32_t value) {
		return ((T (*)(BMFont*, int32_t))(Il2CppBase() + 0x35BE6D0))(this, value);
	}
	template <typename T = int32_t> T get_texWidth() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE6D8))(this);
	}
	template <typename T = void> T set_texWidth(int32_t value) {
		return ((T (*)(BMFont*, int32_t))(Il2CppBase() + 0x35BE6E0))(this, value);
	}
	template <typename T = int32_t> T get_texHeight() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE6E8))(this);
	}
	template <typename T = void> T set_texHeight(int32_t value) {
		return ((T (*)(BMFont*, int32_t))(Il2CppBase() + 0x35BE6F0))(this, value);
	}
	template <typename T = int32_t> T get_glyphCount() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE6F8))(this);
	}
	template <typename T = Il2CppString*> T get_spriteName() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE7A8))(this);
	}
	template <typename T = void> T set_spriteName(Il2CppString* value) {
		return ((T (*)(BMFont*, Il2CppString*))(Il2CppBase() + 0x35BE7B0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_glyphs() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BE7B8))(this);
	}
	template <typename T = uintptr_t> T GetGlyph(int32_t index, bool createIfMissing) {
		return ((T (*)(BMFont*, int32_t, bool))(Il2CppBase() + 0x35BE7C0))(this, index, createIfMissing);
	}
	template <typename T = uintptr_t> T GetGlyph_1(int32_t index) {
		return ((T (*)(BMFont*, int32_t))(Il2CppBase() + 0x35BEAF0))(this, index);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BMFont*))(Il2CppBase() + 0x35BEBA4))(this);
	}
	template <typename T = void> T Trim(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax) {
		return ((T (*)(BMFont*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x35BECA4))(this, xMin, yMin, xMax, yMax);
	}

};

}
