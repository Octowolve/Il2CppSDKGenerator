#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NGUIText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NGUIText"));
	}

	template <typename T = double> static T& timeAccumulation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = double> static T& cpuTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& frame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& runCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& mInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& mColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = float> static T& mAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& mTempChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& mSizes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& SBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& s_c0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& s_c1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = float> static T& sizeShrinkage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mBoldOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlyphWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGlyph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseColor24() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseColor32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_EncodeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeColor24() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EncodeColor32() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ParseSymbol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StripSymbols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Align() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExactCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetApproximateCharacterIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceSpaceWithNewline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculatePrintedSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateOffsetToFit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEndOfLineThatFits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_WrapText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WrapTextAndCalculatePrintedSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Print() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintUV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintApproximateCharacterPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintExactCharacterPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintCaretAndSelection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceLink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertHyperlink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceLinks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}

	template <typename T = void> static T Prepare(uintptr_t context, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C176C))(0, context, text);
	}
	template <typename T = uintptr_t> static T GetSymbol(uintptr_t context, Il2CppString* text, int32_t index, int32_t textLength) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x43C1928))(0, context, text, index, textLength);
	}
	template <typename T = float> static T GetGlyphWidth(uintptr_t context, int32_t ch, int32_t prev, float fontScale) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x43C1AB0))(0, context, ch, prev, fontScale);
	}
	template <typename T = uintptr_t> static T GetGlyph(uintptr_t context, int32_t ch, int32_t prev, float fontScale) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, float))(Il2CppBase() + 0x43C1D5C))(0, context, ch, prev, fontScale);
	}
	template <typename T = float> static T ParseAlpha(Il2CppString* text, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x43C2368))(0, text, index);
	}
	template <typename T = uintptr_t> static T ParseColor(Il2CppString* text, int32_t offset) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x43C24E8))(0, text, offset);
	}
	template <typename T = uintptr_t> static T ParseColor24(Il2CppString* text, int32_t offset) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x43C2600))(0, text, offset);
	}
	template <typename T = uintptr_t> static T ParseColor32(Il2CppString* text, int32_t offset) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x43C2804))(0, text, offset);
	}
	template <typename T = Il2CppString*> static T EncodeColor(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43C2A50))(0, c);
	}
	template <typename T = Il2CppString*> static T EncodeColor_1(Il2CppString* text, uintptr_t c) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x43C2C84))(0, text, c);
	}
	template <typename T = Il2CppString*> static T EncodeAlpha(float a) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x43C301C))(0, a);
	}
	template <typename T = Il2CppString*> static T EncodeColor24(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43C2B78))(0, c);
	}
	template <typename T = Il2CppString*> static T EncodeColor32(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43C317C))(0, c);
	}
	template <typename T = bool> static T ParseSymbol(Il2CppString* text, uintptr_t index) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x43C3288))(0, text, index);
	}
	template <typename T = bool> static T IsHex(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x43C3F6C))(0, ch);
	}
	template <typename T = bool> static T ParseSymbol_1(Il2CppString* text, uintptr_t index, void* colors, bool premultiply, uintptr_t sub, uintptr_t bold, uintptr_t italic, uintptr_t underline, uintptr_t strike, uintptr_t ignoreColor) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, void*, bool, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43C33FC))(0, text, index, colors, premultiply, sub, bold, italic, underline, strike, ignoreColor);
	}
	template <typename T = Il2CppString*> static T StripSymbols(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C406C))(0, text);
	}
	template <typename T = void> static T Align(uintptr_t context, Il2CppList<Il2CppVector3>* verts, int32_t indexOffset, float printedWidth, int32_t elements) {
		return ((T (*)(void *, uintptr_t, Il2CppList<Il2CppVector3>*, int32_t, float, int32_t))(Il2CppBase() + 0x43C42B4))(0, context, verts, indexOffset, printedWidth, elements);
	}
	template <typename T = int32_t> static T GetExactCharacterIndex(Il2CppList<Il2CppVector3>* verts, Il2CppList<int32_t>* indices, Il2CppVector2 pos) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, Il2CppList<int32_t>*, Il2CppVector2))(Il2CppBase() + 0x43C4B24))(0, verts, indices, pos);
	}
	template <typename T = int32_t> static T GetApproximateCharacterIndex(Il2CppList<Il2CppVector3>* verts, Il2CppList<int32_t>* indices, Il2CppVector2 pos) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, Il2CppList<int32_t>*, Il2CppVector2))(Il2CppBase() + 0x43C4DB4))(0, verts, indices, pos);
	}
	template <typename T = bool> static T IsSpace(int32_t ch) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43C5054))(0, ch);
	}
	template <typename T = void> static T EndLine(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43C513C))(0, s);
	}
	template <typename T = void> static T ReplaceSpaceWithNewline(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43C52C8))(0, s);
	}
	template <typename T = Il2CppVector2> static T CalculatePrintedSize(uintptr_t context, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C543C))(0, context, text);
	}
	template <typename T = int32_t> static T CalculateOffsetToFit(uintptr_t context, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C5B70))(0, context, text);
	}
	template <typename T = Il2CppString*> static T GetEndOfLineThatFits(uintptr_t context, Il2CppString* text) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43C62DC))(0, context, text);
	}
	template <typename T = bool> static T WrapText(uintptr_t context, Il2CppString* text, uintptr_t* finalText, bool wrapLineColors) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*, bool))(Il2CppBase() + 0x43C6424))(0, context, text, finalText, wrapLineColors);
	}
	template <typename T = bool> static T WrapText_1(uintptr_t context, Il2CppString* text, uintptr_t* finalText, bool keepCharCount, bool wrapLineColors, bool useEllipsis) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t*, bool, bool, bool))(Il2CppBase() + 0x43C6550))(0, context, text, finalText, keepCharCount, wrapLineColors, useEllipsis);
	}
	template <typename T = bool> static T WrapTextAndCalculatePrintedSize(uintptr_t* calculatedSize, uintptr_t context, Il2CppString* text, uintptr_t* finalText, bool keepCharCount, bool wrapLineColors, bool useEllipsis) {
		return ((T (*)(void *, uintptr_t*, uintptr_t, Il2CppString*, uintptr_t*, bool, bool, bool))(Il2CppBase() + 0x43C84B8))(0, calculatedSize, context, text, finalText, keepCharCount, wrapLineColors, useEllipsis);
	}
	template <typename T = void> static T Print(uintptr_t context, Il2CppString* text, Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x43CA550))(0, context, text, verts, uvs, cols);
	}
	template <typename T = void> static T PrintUV(uintptr_t context, Il2CppString* text, Il2CppList<Il2CppVector2>* uvs) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<Il2CppVector2>*))(Il2CppBase() + 0x43CD12C))(0, context, text, uvs);
	}
	template <typename T = void> static T PrintApproximateCharacterPositions(uintptr_t context, Il2CppString* text, Il2CppList<Il2CppVector3>* verts, Il2CppList<int32_t>* indices) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<Il2CppVector3>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x43CE020))(0, context, text, verts, indices);
	}
	template <typename T = void> static T PrintExactCharacterPositions(uintptr_t context, Il2CppString* text, Il2CppList<Il2CppVector3>* verts, Il2CppList<int32_t>* indices) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppList<Il2CppVector3>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x43CE9D0))(0, context, text, verts, indices);
	}
	template <typename T = void> static T PrintCaretAndSelection(uintptr_t context, Il2CppString* text, int32_t start, int32_t end, Il2CppList<Il2CppVector3>* caret, Il2CppList<Il2CppVector3>* highlight) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, int32_t, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x43CF35C))(0, context, text, start, end, caret, highlight);
	}
	template <typename T = bool> static T ReplaceLink(uintptr_t text, uintptr_t index, Il2CppString* prefix) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43D0764))(0, text, index, prefix);
	}
	template <typename T = bool> static T InsertHyperlink(uintptr_t text, uintptr_t index, Il2CppString* keyword, Il2CppString* link) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43D0CE0))(0, text, index, keyword, link);
	}
	template <typename T = void> static T ReplaceLinks(uintptr_t text) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43D0F8C))(0, text);
	}

};

}
