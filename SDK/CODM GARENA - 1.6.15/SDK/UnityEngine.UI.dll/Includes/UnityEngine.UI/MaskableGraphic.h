#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class MaskableGraphic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "MaskableGraphic"));
	}

	template <typename T = bool> T& m_ShouldRecalculateStencil() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = uintptr_t> T& m_MaskMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_ParentMask() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_Maskable() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IncludeForMasking() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = uintptr_t> T& m_OnCullStateChanged() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_ShouldRecalculate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_StencilValue() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Corners() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_onCullStateChanged() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D37610))(this);
	}
	template <typename T = void> T set_onCullStateChanged(uintptr_t value) {
		return ((T (*)(MaskableGraphic*, uintptr_t))(Il2CppBase() + 0x3D37618))(this, value);
	}
	template <typename T = bool> T get_maskable() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D37620))(this);
	}
	template <typename T = void> T set_maskable(bool value) {
		return ((T (*)(MaskableGraphic*, bool))(Il2CppBase() + 0x3D37628))(this, value);
	}
	template <typename T = uintptr_t> T GetModifiedMaterial(uintptr_t baseMaterial) {
		return ((T (*)(MaskableGraphic*, uintptr_t))(Il2CppBase() + 0x3D37658))(this, baseMaterial);
	}
	template <typename T = void> T Cull(Il2CppRect clipRect, bool validRect) {
		return ((T (*)(MaskableGraphic*, Il2CppRect, bool))(Il2CppBase() + 0x3D37874))(this, clipRect, validRect);
	}
	template <typename T = void> T UpdateCull(bool cull) {
		return ((T (*)(MaskableGraphic*, bool))(Il2CppBase() + 0x3D37BDC))(this, cull);
	}
	template <typename T = void> T SetClipRect(Il2CppRect clipRect, bool validRect) {
		return ((T (*)(MaskableGraphic*, Il2CppRect, bool))(Il2CppBase() + 0x3D37CD4))(this, clipRect, validRect);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D37D44))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D38060))(this);
	}
	template <typename T = void> T OnTransformParentChanged() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D381B8))(this);
	}
	template <typename T = void> T ParentMaskStateChanged() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D38204))(this);
	}
	template <typename T = void> T OnCanvasHierarchyChanged() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D38208))(this);
	}
	template <typename T = Il2CppRect> T get_rootCanvasRect() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D378E8))(this);
	}
	template <typename T = void> T UpdateClipParent() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D37E48))(this);
	}
	template <typename T = void> T RecalculateClipping() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D3882C))(this);
	}
	template <typename T = void> T RecalculateMasking() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D38830))(this);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_IClippable_get_gameObject() {
		return ((T (*)(MaskableGraphic*))(Il2CppBase() + 0x3D38848))(this);
	}

};

}
