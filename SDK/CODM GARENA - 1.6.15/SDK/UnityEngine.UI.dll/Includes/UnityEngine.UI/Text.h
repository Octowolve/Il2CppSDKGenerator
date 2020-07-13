#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Text
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Text"));
	}

	template <typename T = uintptr_t> T& m_FontData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_TextCache() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_TextCacheForLayout() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& s_DefaultText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_DisableFontTextureRebuiltCallback() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_TempVerts() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> T get_cachedTextGenerator() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3C738))(this);
	}
	template <typename T = uintptr_t> T get_cachedTextGeneratorForLayout() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3C848))(this);
	}
	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3C8E8))(this);
	}
	template <typename T = void> T FontTextureChanged() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3CB50))(this);
	}
	template <typename T = uintptr_t> T get_font() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3CB24))(this);
	}
	template <typename T = void> T set_font(uintptr_t value) {
		return ((T (*)(Text*, uintptr_t))(Il2CppBase() + 0x4E3CD00))(this, value);
	}
	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3CE60))(this);
	}
	template <typename T = void> T set_text(Il2CppString* value) {
		return ((T (*)(Text*, Il2CppString*))(Il2CppBase() + 0x4E3CE68))(this, value);
	}
	template <typename T = bool> T get_supportRichText() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D00C))(this);
	}
	template <typename T = void> T set_supportRichText(bool value) {
		return ((T (*)(Text*, bool))(Il2CppBase() + 0x4E3D038))(this, value);
	}
	template <typename T = bool> T get_resizeTextForBestFit() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D0B8))(this);
	}
	template <typename T = void> T set_resizeTextForBestFit(bool value) {
		return ((T (*)(Text*, bool))(Il2CppBase() + 0x4E3D0E4))(this, value);
	}
	template <typename T = int32_t> T get_resizeTextMinSize() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D164))(this);
	}
	template <typename T = void> T set_resizeTextMinSize(int32_t value) {
		return ((T (*)(Text*, int32_t))(Il2CppBase() + 0x4E3D190))(this, value);
	}
	template <typename T = int32_t> T get_resizeTextMaxSize() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D20C))(this);
	}
	template <typename T = void> T set_resizeTextMaxSize(int32_t value) {
		return ((T (*)(Text*, int32_t))(Il2CppBase() + 0x4E3D238))(this, value);
	}
	template <typename T = uintptr_t> T get_alignment() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D2B4))(this);
	}
	template <typename T = void> T set_alignment(uintptr_t value) {
		return ((T (*)(Text*, uintptr_t))(Il2CppBase() + 0x4E3D2E0))(this, value);
	}
	template <typename T = bool> T get_alignByGeometry() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D35C))(this);
	}
	template <typename T = void> T set_alignByGeometry(bool value) {
		return ((T (*)(Text*, bool))(Il2CppBase() + 0x4E3D388))(this, value);
	}
	template <typename T = int32_t> T get_fontSize() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D3F4))(this);
	}
	template <typename T = void> T set_fontSize(int32_t value) {
		return ((T (*)(Text*, int32_t))(Il2CppBase() + 0x4E3D420))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalOverflow() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D49C))(this);
	}
	template <typename T = void> T set_horizontalOverflow(uintptr_t value) {
		return ((T (*)(Text*, uintptr_t))(Il2CppBase() + 0x4E3D4C8))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalOverflow() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D544))(this);
	}
	template <typename T = void> T set_verticalOverflow(uintptr_t value) {
		return ((T (*)(Text*, uintptr_t))(Il2CppBase() + 0x4E3D570))(this, value);
	}
	template <typename T = float> T get_lineSpacing() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D5EC))(this);
	}
	template <typename T = void> T set_lineSpacing(float value) {
		return ((T (*)(Text*, float))(Il2CppBase() + 0x4E3D618))(this, value);
	}
	template <typename T = uintptr_t> T get_fontStyle() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D6AC))(this);
	}
	template <typename T = void> T set_fontStyle(uintptr_t value) {
		return ((T (*)(Text*, uintptr_t))(Il2CppBase() + 0x4E3D6D8))(this, value);
	}
	template <typename T = float> T get_pixelsPerUnit() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D754))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3D940))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3DA18))(this);
	}
	template <typename T = void> T UpdateGeometry() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3DACC))(this);
	}
	template <typename T = void> T AssignDefaultFont() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3DB98))(this);
	}
	template <typename T = uintptr_t> T GetGenerationSettings(Il2CppVector2 extents) {
		return ((T (*)(Text*, Il2CppVector2))(Il2CppBase() + 0x4E3DC38))(this, extents);
	}
	template <typename T = Il2CppVector2> static T GetTextAnchorPivot(uintptr_t anchor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E3DF2C))(0, anchor);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t toFill) {
		return ((T (*)(Text*, uintptr_t))(Il2CppBase() + 0x4E3E0AC))(this, toFill);
	}
	template <typename T = void> T CalculateLayoutInputHorizontal() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3E9E8))(this);
	}
	template <typename T = void> T CalculateLayoutInputVertical() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3E9EC))(this);
	}
	template <typename T = float> T get_minWidth() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3E9F0))(this);
	}
	template <typename T = float> T get_preferredWidth() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3E9F8))(this);
	}
	template <typename T = float> T get_flexibleWidth() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3EADC))(this);
	}
	template <typename T = float> T get_minHeight() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3EAE8))(this);
	}
	template <typename T = float> T get_preferredHeight() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3EAF0))(this);
	}
	template <typename T = float> T get_flexibleHeight() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3EC20))(this);
	}
	template <typename T = int32_t> T get_layoutPriority() {
		return ((T (*)(Text*))(Il2CppBase() + 0x4E3EC2C))(this);
	}

};

}
