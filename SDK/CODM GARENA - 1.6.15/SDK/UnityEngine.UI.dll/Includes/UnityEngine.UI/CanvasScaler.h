#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class CanvasScaler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "CanvasScaler"));
	}

	template <typename T = uintptr_t> T& m_UiScaleMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_ReferencePixelsPerUnit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_ScaleFactor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& m_ReferenceResolution() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_ScreenMatchMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_MatchWidthOrHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& kLogBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_PhysicalUnit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_FallbackScreenDPI() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DefaultSpriteDPI() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_DynamicPixelsPerUnit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Canvas() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_PrevScaleFactor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_PrevReferencePixelsPerUnit() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T get_uiScaleMode() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0A93C))(this);
	}
	template <typename T = void> T set_uiScaleMode(uintptr_t value) {
		return ((T (*)(CanvasScaler*, uintptr_t))(Il2CppBase() + 0x3D0A944))(this, value);
	}
	template <typename T = float> T get_referencePixelsPerUnit() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0A94C))(this);
	}
	template <typename T = void> T set_referencePixelsPerUnit(float value) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0A954))(this, value);
	}
	template <typename T = float> T get_scaleFactor() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0A95C))(this);
	}
	template <typename T = void> T set_scaleFactor(float value) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0A964))(this, value);
	}
	template <typename T = Il2CppVector2> T get_referenceResolution() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AA1C))(this);
	}
	template <typename T = void> T set_referenceResolution(Il2CppVector2 value) {
		return ((T (*)(CanvasScaler*, Il2CppVector2))(Il2CppBase() + 0x3D0AA30))(this, value);
	}
	template <typename T = uintptr_t> T get_screenMatchMode() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AB9C))(this);
	}
	template <typename T = void> T set_screenMatchMode(uintptr_t value) {
		return ((T (*)(CanvasScaler*, uintptr_t))(Il2CppBase() + 0x3D0ABA4))(this, value);
	}
	template <typename T = float> T get_matchWidthOrHeight() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0ABAC))(this);
	}
	template <typename T = void> T set_matchWidthOrHeight(float value) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0ABB4))(this, value);
	}
	template <typename T = uintptr_t> T get_physicalUnit() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0ABBC))(this);
	}
	template <typename T = void> T set_physicalUnit(uintptr_t value) {
		return ((T (*)(CanvasScaler*, uintptr_t))(Il2CppBase() + 0x3D0ABC4))(this, value);
	}
	template <typename T = float> T get_fallbackScreenDPI() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0ABCC))(this);
	}
	template <typename T = void> T set_fallbackScreenDPI(float value) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0ABD4))(this, value);
	}
	template <typename T = float> T get_defaultSpriteDPI() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0ABDC))(this);
	}
	template <typename T = void> T set_defaultSpriteDPI(float value) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0ABE4))(this, value);
	}
	template <typename T = float> T get_dynamicPixelsPerUnit() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AC98))(this);
	}
	template <typename T = void> T set_dynamicPixelsPerUnit(float value) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0ACA0))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0ACA8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AD44))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AE0C))(this);
	}
	template <typename T = void> T Handle() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AE1C))(this);
	}
	template <typename T = void> T HandleWorldCanvas() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AF7C))(this);
	}
	template <typename T = void> T HandleConstantPixelSize() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AFA0))(this);
	}
	template <typename T = void> T HandleScaleWithScreenSize() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0AFC4))(this);
	}
	template <typename T = void> T HandleConstantPhysicalSize() {
		return ((T (*)(CanvasScaler*))(Il2CppBase() + 0x3D0B360))(this);
	}
	template <typename T = void> T SetScaleFactor(float scaleFactor) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0AD6C))(this, scaleFactor);
	}
	template <typename T = void> T SetReferencePixelsPerUnit(float referencePixelsPerUnit) {
		return ((T (*)(CanvasScaler*, float))(Il2CppBase() + 0x3D0ADBC))(this, referencePixelsPerUnit);
	}

};

}
