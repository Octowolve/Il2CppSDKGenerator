#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class HorizontalOrVerticalLayoutGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup"));
	}

	template <typename T = float> T& m_Spacing() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_ChildForceExpandWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_ChildForceExpandHeight() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& m_ChildControlWidth() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = bool> T& m_ChildControlHeight() {
		return *(T*)((uintptr_t)this + 0x3F);
	}

	template <typename T = float> T get_spacing() {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*))(Il2CppBase() + 0x3D1D684))(this);
	}
	template <typename T = void> T set_spacing(float value) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, float))(Il2CppBase() + 0x3D1D68C))(this, value);
	}
	template <typename T = bool> T get_childForceExpandWidth() {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*))(Il2CppBase() + 0x3D1D71C))(this);
	}
	template <typename T = void> T set_childForceExpandWidth(bool value) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, bool))(Il2CppBase() + 0x3D1D724))(this, value);
	}
	template <typename T = bool> T get_childForceExpandHeight() {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*))(Il2CppBase() + 0x3D1D7B4))(this);
	}
	template <typename T = void> T set_childForceExpandHeight(bool value) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, bool))(Il2CppBase() + 0x3D1D7BC))(this, value);
	}
	template <typename T = bool> T get_childControlWidth() {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*))(Il2CppBase() + 0x3D1D84C))(this);
	}
	template <typename T = void> T set_childControlWidth(bool value) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, bool))(Il2CppBase() + 0x3D1D854))(this, value);
	}
	template <typename T = bool> T get_childControlHeight() {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*))(Il2CppBase() + 0x3D1D8E4))(this);
	}
	template <typename T = void> T set_childControlHeight(bool value) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, bool))(Il2CppBase() + 0x3D1D8EC))(this, value);
	}
	template <typename T = void> T CalcAlongAxis(int32_t axis, bool isVertical) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, int32_t, bool))(Il2CppBase() + 0x3D1CB9C))(this, axis, isVertical);
	}
	template <typename T = void> T SetChildrenAlongAxis(int32_t axis, bool isVertical) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, int32_t, bool))(Il2CppBase() + 0x3D1CF10))(this, axis, isVertical);
	}
	template <typename T = void> T GetChildSizes(uintptr_t child, int32_t axis, bool controlSize, bool childForceExpand, uintptr_t* min, uintptr_t* preferred, uintptr_t* flexible) {
		return ((T (*)(HorizontalOrVerticalLayoutGroup*, uintptr_t, int32_t, bool, bool, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3D1D97C))(this, child, axis, controlSize, childForceExpand, min, preferred, flexible);
	}

};

}
