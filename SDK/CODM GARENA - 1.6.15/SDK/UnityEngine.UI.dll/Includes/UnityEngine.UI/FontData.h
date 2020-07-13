#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class FontData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "FontData"));
	}

	template <typename T = uintptr_t> T& m_Font() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_FontSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_FontStyle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_BestFit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_MinSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_MaxSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Alignment() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_AlignByGeometry() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_RichText() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& m_HorizontalOverflow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_VerticalOverflow() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LineSpacing() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> static T get_defaultFontData() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D13338))(0);
	}
	template <typename T = uintptr_t> T get_font() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13414))(this);
	}
	template <typename T = void> T set_font(uintptr_t value) {
		return ((T (*)(FontData*, uintptr_t))(Il2CppBase() + 0x3D1341C))(this, value);
	}
	template <typename T = int32_t> T get_fontSize() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13424))(this);
	}
	template <typename T = void> T set_fontSize(int32_t value) {
		return ((T (*)(FontData*, int32_t))(Il2CppBase() + 0x3D1342C))(this, value);
	}
	template <typename T = uintptr_t> T get_fontStyle() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13434))(this);
	}
	template <typename T = void> T set_fontStyle(uintptr_t value) {
		return ((T (*)(FontData*, uintptr_t))(Il2CppBase() + 0x3D1343C))(this, value);
	}
	template <typename T = bool> T get_bestFit() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13444))(this);
	}
	template <typename T = void> T set_bestFit(bool value) {
		return ((T (*)(FontData*, bool))(Il2CppBase() + 0x3D1344C))(this, value);
	}
	template <typename T = int32_t> T get_minSize() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13454))(this);
	}
	template <typename T = void> T set_minSize(int32_t value) {
		return ((T (*)(FontData*, int32_t))(Il2CppBase() + 0x3D1345C))(this, value);
	}
	template <typename T = int32_t> T get_maxSize() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13464))(this);
	}
	template <typename T = void> T set_maxSize(int32_t value) {
		return ((T (*)(FontData*, int32_t))(Il2CppBase() + 0x3D1346C))(this, value);
	}
	template <typename T = uintptr_t> T get_alignment() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13474))(this);
	}
	template <typename T = void> T set_alignment(uintptr_t value) {
		return ((T (*)(FontData*, uintptr_t))(Il2CppBase() + 0x3D1347C))(this, value);
	}
	template <typename T = bool> T get_alignByGeometry() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13484))(this);
	}
	template <typename T = void> T set_alignByGeometry(bool value) {
		return ((T (*)(FontData*, bool))(Il2CppBase() + 0x3D1348C))(this, value);
	}
	template <typename T = bool> T get_richText() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D13494))(this);
	}
	template <typename T = void> T set_richText(bool value) {
		return ((T (*)(FontData*, bool))(Il2CppBase() + 0x3D1349C))(this, value);
	}
	template <typename T = uintptr_t> T get_horizontalOverflow() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D134A4))(this);
	}
	template <typename T = void> T set_horizontalOverflow(uintptr_t value) {
		return ((T (*)(FontData*, uintptr_t))(Il2CppBase() + 0x3D134AC))(this, value);
	}
	template <typename T = uintptr_t> T get_verticalOverflow() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D134B4))(this);
	}
	template <typename T = void> T set_verticalOverflow(uintptr_t value) {
		return ((T (*)(FontData*, uintptr_t))(Il2CppBase() + 0x3D134BC))(this, value);
	}
	template <typename T = float> T get_lineSpacing() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D134C4))(this);
	}
	template <typename T = void> T set_lineSpacing(float value) {
		return ((T (*)(FontData*, float))(Il2CppBase() + 0x3D134CC))(this, value);
	}
	template <typename T = void> T UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D134D4))(this);
	}
	template <typename T = void> T UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
		return ((T (*)(FontData*))(Il2CppBase() + 0x3D134D8))(this);
	}

};

}
