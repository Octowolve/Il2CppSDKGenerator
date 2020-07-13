#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Mask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Mask"));
	}

	template <typename T = uintptr_t> T& m_RectTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_ShowMaskGraphic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Graphic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_MaskMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_UnmaskMaterial() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D3619C))(this);
	}
	template <typename T = bool> T get_showMaskGraphic() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D36230))(this);
	}
	template <typename T = void> T set_showMaskGraphic(bool value) {
		return ((T (*)(Mask*, bool))(Il2CppBase() + 0x3D36238))(this, value);
	}
	template <typename T = uintptr_t> T get_graphic() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D36344))(this);
	}
	template <typename T = bool> T MaskEnabled() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D363D8))(this);
	}
	template <typename T = void> T OnSiblingGraphicEnabledDisabled() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D364B4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D364B8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Mask*))(Il2CppBase() + 0x3D36960))(this);
	}
	template <typename T = bool> T IsRaycastLocationValid(Il2CppVector2 sp, uintptr_t eventCamera) {
		return ((T (*)(Mask*, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x3D36B0C))(this, sp, eventCamera);
	}
	template <typename T = uintptr_t> T GetModifiedMaterial(uintptr_t baseMaterial) {
		return ((T (*)(Mask*, uintptr_t))(Il2CppBase() + 0x3D36C00))(this, baseMaterial);
	}

};

}
