#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUITextFontCacheDynamic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUITextFontCacheDynamic"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& FontCharacterCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& TempCharInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FontRebuilt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFontGlyphCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlyphWithCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlyph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlyphWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> static T FontRebuilt(uintptr_t font) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3ECB168))(0, font);
	}
	template <typename T = void> static T Prepare(uintptr_t font, Il2CppString* text, int32_t finalSize, uintptr_t fontStyle) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x3ECB404))(0, font, text, finalSize, fontStyle);
	}
	template <typename T = uintptr_t> static T GetFontGlyphCache(uintptr_t font, int32_t finalSize, uintptr_t fontStyle) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3ECB524))(0, font, finalSize, fontStyle);
	}
	template <typename T = uintptr_t> static T GetGlyphWithCache(uintptr_t font, int32_t ch, int32_t finalSize, uintptr_t fontStyle) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3ECBCFC))(0, font, ch, finalSize, fontStyle);
	}
	template <typename T = uintptr_t> static T GetGlyph(uintptr_t font, int32_t ch, int32_t finalSize, uintptr_t fontStyle, float baseline) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t, float))(Il2CppBase() + 0x3ECC570))(0, font, ch, finalSize, fontStyle, baseline);
	}
	template <typename T = float> static T GetGlyphWidth(int32_t ch, uintptr_t font, int32_t finalSize, uintptr_t fontStyle) {
		return ((T (*)(void *, int32_t, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3ECCC6C))(0, ch, font, finalSize, fontStyle);
	}

};

}
