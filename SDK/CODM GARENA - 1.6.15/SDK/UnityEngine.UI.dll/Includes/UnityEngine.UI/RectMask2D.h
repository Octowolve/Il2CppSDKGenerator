#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class RectMask2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "RectMask2D"));
	}

	template <typename T = uintptr_t> T& m_VertexClipper() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_RectTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ClipTargets() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ShouldRecalculateClipRects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Clippers() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppRect> T& m_LastClipRectCanvasSpace() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_LastValidClipRect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_ForceClip() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = Il2CppRect> T get_canvasRect() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2B358))(this);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2B574))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2B608))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2B648))(this);
	}
	template <typename T = bool> T IsRaycastLocationValid(Il2CppVector2 sp, uintptr_t eventCamera) {
		return ((T (*)(RectMask2D*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x4E2B738))(this, sp, eventCamera);
	}
	template <typename T = void> T PerformClipping() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2B82C))(this);
	}
	template <typename T = void> T AddClippable(uintptr_t clippable) {
		return ((T (*)(RectMask2D*, uintptr_t))(Il2CppBase() + 0x4E2BE54))(this, clippable);
	}
	template <typename T = void> T RemoveClippable(uintptr_t clippable) {
		return ((T (*)(RectMask2D*, uintptr_t))(Il2CppBase() + 0x4E2BF44))(this, clippable);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2C10C))(this);
	}
	template <typename T = void> T OnCanvasHierarchyChanged() {
		return ((T (*)(RectMask2D*))(Il2CppBase() + 0x4E2C12C))(this);
	}

};

}
