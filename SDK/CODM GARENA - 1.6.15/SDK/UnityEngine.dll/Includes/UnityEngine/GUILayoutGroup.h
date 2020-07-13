#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUILayoutGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUILayoutGroup"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& entries() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isVertical() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& resetCoords() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = float> T& spacing() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& sameSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isWindow() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = int32_t> T& windowID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_Cursor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_StretchableCountX() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_StretchableCountY() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_UserSpecifiedWidth() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_UserSpecifiedHeight() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = float> T& m_ChildMinWidth() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_ChildMaxWidth() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_ChildMinHeight() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_ChildMaxHeight() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_Margin() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_margin() {
		return ((T (*)(GUILayoutGroup*))(Il2CppBase() + 0x479305C))(this);
	}
	template <typename T = void> T ApplyOptions(Il2CppArray<uintptr_t>* options) {
		return ((T (*)(GUILayoutGroup*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4793064))(this, options);
	}
	template <typename T = void> T ApplyStyleSettings(uintptr_t style) {
		return ((T (*)(GUILayoutGroup*, uintptr_t))(Il2CppBase() + 0x47931A4))(this, style);
	}
	template <typename T = void> T ResetCursor() {
		return ((T (*)(GUILayoutGroup*))(Il2CppBase() + 0x4791D90))(this);
	}
	template <typename T = uintptr_t> T GetNext() {
		return ((T (*)(GUILayoutGroup*))(Il2CppBase() + 0x478C7A4))(this);
	}
	template <typename T = void> T Add(uintptr_t e) {
		return ((T (*)(GUILayoutGroup*, uintptr_t))(Il2CppBase() + 0x478C704))(this, e);
	}
	template <typename T = void> T CalcWidth() {
		return ((T (*)(GUILayoutGroup*))(Il2CppBase() + 0x4793284))(this);
	}
	template <typename T = void> T SetHorizontal(float x, float width) {
		return ((T (*)(GUILayoutGroup*, float, float))(Il2CppBase() + 0x4793D84))(this, x, width);
	}
	template <typename T = void> T CalcHeight() {
		return ((T (*)(GUILayoutGroup*))(Il2CppBase() + 0x4794B50))(this);
	}
	template <typename T = void> T SetVertical(float y, float height) {
		return ((T (*)(GUILayoutGroup*, float, float))(Il2CppBase() + 0x4795574))(this, y, height);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GUILayoutGroup*))(Il2CppBase() + 0x479635C))(this);
	}

};

}
