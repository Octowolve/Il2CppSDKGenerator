#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIFont
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFont"));
	}

	template <typename T = uintptr_t> T& mMat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppRect> T& mUVRect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mFont() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mAtlas() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mReplacement() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mSymbols() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mDynamicFont() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& mDynamicFontSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& mDynamicFontStyle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mSprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mPMA() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mPacked() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Trim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_References() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfRelated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUVRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatchSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RenameSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UsesSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_bmFont() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EA808))(this);
	}
	template <typename T = void> T set_bmFont(uintptr_t value) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39EA8F4))(this, value);
	}
	template <typename T = int32_t> T get_texWidth() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EA9E4))(this);
	}
	template <typename T = void> T set_texWidth(int32_t value) {
		return ((T (*)(UIFont*, int32_t))(Il2CppBase() + 0x39EAAEC))(this, value);
	}
	template <typename T = int32_t> T get_texHeight() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EABF4))(this);
	}
	template <typename T = void> T set_texHeight(int32_t value) {
		return ((T (*)(UIFont*, int32_t))(Il2CppBase() + 0x39EACFC))(this, value);
	}
	template <typename T = bool> T get_hasSymbols() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EAE04))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_symbols() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EAF20))(this);
	}
	template <typename T = uintptr_t> T get_atlas() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EB00C))(this);
	}
	template <typename T = void> T set_atlas(uintptr_t value) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39EB0F8))(this, value);
	}
	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EBA78))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39EBD8C))(this, value);
	}
	template <typename T = bool> T get_premultipliedAlpha() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EBEE8))(this);
	}
	template <typename T = bool> T get_premultipliedAlphaShader() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EBEEC))(this);
	}
	template <typename T = bool> T get_packedFontShader() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EC180))(this);
	}
	template <typename T = uintptr_t> T get_texture() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EC400))(this);
	}
	template <typename T = Il2CppRect> T get_uvRect() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EB5B8))(this);
	}
	template <typename T = void> T set_uvRect(Il2CppRect value) {
		return ((T (*)(UIFont*, Il2CppRect))(Il2CppBase() + 0x39EC59C))(this, value);
	}
	template <typename T = Il2CppString*> T get_spriteName() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EC714))(this);
	}
	template <typename T = void> T set_spriteName(Il2CppString* value) {
		return ((T (*)(UIFont*, Il2CppString*))(Il2CppBase() + 0x39EC814))(this, value);
	}
	template <typename T = bool> T get_isValid() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EC998))(this);
	}
	template <typename T = int32_t> T get_size() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ECA78))(this);
	}
	template <typename T = void> T set_size(int32_t value) {
		return ((T (*)(UIFont*, int32_t))(Il2CppBase() + 0x39ECB94))(this, value);
	}
	template <typename T = int32_t> T get_defaultSize() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ECA7C))(this);
	}
	template <typename T = void> T set_defaultSize(int32_t value) {
		return ((T (*)(UIFont*, int32_t))(Il2CppBase() + 0x39ECB98))(this, value);
	}
	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EB2E0))(this);
	}
	template <typename T = uintptr_t> T get_replacement() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ED070))(this);
	}
	template <typename T = void> T set_replacement(uintptr_t value) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39ED078))(this, value);
	}
	template <typename T = bool> T get_isDynamic() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ECC88))(this);
	}
	template <typename T = uintptr_t> T get_dynamicFont() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ED304))(this);
	}
	template <typename T = void> T set_dynamicFont(uintptr_t value) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39ED3F0))(this, value);
	}
	template <typename T = uintptr_t> T get_dynamicFontStyle() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ED5A0))(this);
	}
	template <typename T = void> T set_dynamicFontStyle(uintptr_t value) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39ED68C))(this, value);
	}
	template <typename T = void> T Trim() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ED798))(this);
	}
	template <typename T = bool> T References(uintptr_t font) {
		return ((T (*)(UIFont*, uintptr_t))(Il2CppBase() + 0x39EDB70))(this, font);
	}
	template <typename T = bool> static T CheckIfRelated(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x39EDD60))(0, a, b);
	}
	template <typename T = uintptr_t> T get_dynamicTexture() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EE03C))(this);
	}
	template <typename T = void> T MarkAsChanged() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39EB758))(this);
	}
	template <typename T = void> T UpdateUVRect() {
		return ((T (*)(UIFont*))(Il2CppBase() + 0x39ECDBC))(this);
	}
	template <typename T = uintptr_t> T GetSymbol(Il2CppString* sequence, bool createIfMissing) {
		return ((T (*)(UIFont*, Il2CppString*, bool))(Il2CppBase() + 0x39EE164))(this, sequence, createIfMissing);
	}
	template <typename T = uintptr_t> T MatchSymbol(Il2CppString* text, int32_t offset, int32_t textLength) {
		return ((T (*)(UIFont*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x39EE388))(this, text, offset, textLength);
	}
	template <typename T = void> T AddSymbol(Il2CppString* sequence, Il2CppString* spriteName) {
		return ((T (*)(UIFont*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39EE5A4))(this, sequence, spriteName);
	}
	template <typename T = void> T RemoveSymbol(Il2CppString* sequence) {
		return ((T (*)(UIFont*, Il2CppString*))(Il2CppBase() + 0x39EE690))(this, sequence);
	}
	template <typename T = void> T RenameSymbol(Il2CppString* before, Il2CppString* after) {
		return ((T (*)(UIFont*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x39EE798))(this, before, after);
	}
	template <typename T = bool> T UsesSprite(Il2CppString* s) {
		return ((T (*)(UIFont*, Il2CppString*))(Il2CppBase() + 0x39EE874))(this, s);
	}

};

}
