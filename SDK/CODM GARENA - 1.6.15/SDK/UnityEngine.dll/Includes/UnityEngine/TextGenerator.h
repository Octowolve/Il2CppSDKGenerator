#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TextGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TextGenerator"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_LastString() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LastSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_HasGenerated() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LastValid() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Verts() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Characters() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Lines() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_CachedVerts() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_CachedCharacters() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& m_CachedLines() {
		return *(T*)((uintptr_t)this + 0x7E);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D2F49C))(this);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D2F5BC))(this);
	}
	template <typename T = uintptr_t> T ValidatedSettings(uintptr_t settings) {
		return ((T (*)(TextGenerator*, uintptr_t))(Il2CppBase() + 0x4D2F658))(this, settings);
	}
	template <typename T = void> T Invalidate() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D2FA50))(this);
	}
	template <typename T = void> T GetCharacters(Il2CppList<uintptr_t>* characters) {
		return ((T (*)(TextGenerator*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4D2FA5C))(this, characters);
	}
	template <typename T = void> T GetLines(Il2CppList<uintptr_t>* lines) {
		return ((T (*)(TextGenerator*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4D2FB00))(this, lines);
	}
	template <typename T = void> T GetVertices(Il2CppList<uintptr_t>* vertices) {
		return ((T (*)(TextGenerator*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4D2FBA4))(this, vertices);
	}
	template <typename T = float> T GetPreferredWidth(Il2CppString* str, uintptr_t settings) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D2FC48))(this, str, settings);
	}
	template <typename T = float> T GetPreferredHeight(Il2CppString* str, uintptr_t settings) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D2FD94))(this, str, settings);
	}
	template <typename T = bool> T PopulateWithErrors(Il2CppString* str, uintptr_t settings, uintptr_t context) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D2FE3C))(this, str, settings, context);
	}
	template <typename T = bool> T Populate(Il2CppString* str, uintptr_t settings) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D2FCF4))(this, str, settings);
	}
	template <typename T = uintptr_t> T PopulateWithError(Il2CppString* str, uintptr_t settings) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D300F8))(this, str, settings);
	}
	template <typename T = uintptr_t> T PopulateAlways(Il2CppString* str, uintptr_t settings) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D30254))(this, str, settings);
	}
	template <typename T = void*> T get_verts() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D305E0))(this);
	}
	template <typename T = void*> T get_characters() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D30614))(this);
	}
	template <typename T = void*> T get_lines() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D30648))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D2F404))(this);
	}
	template <typename T = void> T Dispose_cpp() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D2F5C0))(this);
	}
	template <typename T = bool> T Populate_Internal(Il2CppString* str, uintptr_t font, uintptr_t color, int32_t fontSize, float scaleFactor, float lineSpacing, uintptr_t style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, uintptr_t verticalOverFlow, uintptr_t horizontalOverflow, bool updateBounds, uintptr_t anchor, Il2CppVector2 extents, Il2CppVector2 pivot, bool generateOutOfBounds, bool alignByGeometry, uintptr_t* error) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t, uintptr_t, int32_t, float, float, uintptr_t, bool, bool, int32_t, int32_t, uintptr_t, uintptr_t, bool, uintptr_t, Il2CppVector2, Il2CppVector2, bool, bool, uintptr_t*))(Il2CppBase() + 0x4D3042C))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extents, pivot, generateOutOfBounds, alignByGeometry, error);
	}
	template <typename T = bool> T Populate_Internal_cpp(Il2CppString* str, uintptr_t font, uintptr_t color, int32_t fontSize, float scaleFactor, float lineSpacing, uintptr_t style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, uintptr_t anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uintptr_t* error) {
		return ((T (*)(TextGenerator*, Il2CppString*, uintptr_t, uintptr_t, int32_t, float, float, uintptr_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, uintptr_t, float, float, float, float, bool, bool, uintptr_t*))(Il2CppBase() + 0x4D3067C))(this, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, error);
	}
	template <typename T = bool> static T INTERNAL_CALL_Populate_Internal_cpp(uintptr_t self, Il2CppString* str, uintptr_t font, uintptr_t color, int32_t fontSize, float scaleFactor, float lineSpacing, uintptr_t style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, uintptr_t anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, uintptr_t* error) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, int32_t, float, float, uintptr_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, uintptr_t, float, float, float, float, bool, bool, uintptr_t*))(Il2CppBase() + 0x4D3075C))(0, self, str, font, color, fontSize, scaleFactor, lineSpacing, style, richText, resizeTextForBestFit, resizeTextMinSize, resizeTextMaxSize, verticalOverFlow, horizontalOverflow, updateBounds, anchor, extentsX, extentsY, pivotX, pivotY, generateOutOfBounds, alignByGeometry, error);
	}
	template <typename T = Il2CppRect> T get_rectExtents() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D2FD5C))(this);
	}
	template <typename T = void> T INTERNAL_get_rectExtents(uintptr_t* value) {
		return ((T (*)(TextGenerator*, uintptr_t*))(Il2CppBase() + 0x4D308D0))(this, value);
	}
	template <typename T = void> T GetVerticesInternal(uintptr_t vertices) {
		return ((T (*)(TextGenerator*, uintptr_t))(Il2CppBase() + 0x4D2FBA8))(this, vertices);
	}
	template <typename T = int32_t> T get_characterCount() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D30970))(this);
	}
	template <typename T = int32_t> T get_characterCountVisible() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D30A08))(this);
	}
	template <typename T = void> T GetCharactersInternal(uintptr_t characters) {
		return ((T (*)(TextGenerator*, uintptr_t))(Il2CppBase() + 0x4D2FA60))(this, characters);
	}
	template <typename T = int32_t> T get_lineCount() {
		return ((T (*)(TextGenerator*))(Il2CppBase() + 0x4D30A1C))(this);
	}
	template <typename T = void> T GetLinesInternal(uintptr_t lines) {
		return ((T (*)(TextGenerator*, uintptr_t))(Il2CppBase() + 0x4D2FB04))(this, lines);
	}

};

}
