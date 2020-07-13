#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Canvas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Canvas"));
	}

	template <typename T = uintptr_t> static T& willRenderCanvases() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_renderMode() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A4D48))(this);
	}
	template <typename T = bool> T get_isRootCanvas() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A4DE0))(this);
	}
	template <typename T = uintptr_t> T get_worldCamera() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A4E78))(this);
	}
	template <typename T = float> T get_scaleFactor() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A4F10))(this);
	}
	template <typename T = void> T set_scaleFactor(float value) {
		return ((T (*)(Canvas*, float))(Il2CppBase() + 0x46A4FA8))(this, value);
	}
	template <typename T = float> T get_referencePixelsPerUnit() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A5048))(this);
	}
	template <typename T = void> T set_referencePixelsPerUnit(float value) {
		return ((T (*)(Canvas*, float))(Il2CppBase() + 0x46A50E0))(this, value);
	}
	template <typename T = bool> T get_pixelPerfect() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A5180))(this);
	}
	template <typename T = int32_t> T get_renderOrder() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A5218))(this);
	}
	template <typename T = bool> T get_overrideSorting() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A52B0))(this);
	}
	template <typename T = void> T set_overrideSorting(bool value) {
		return ((T (*)(Canvas*, bool))(Il2CppBase() + 0x46A5348))(this, value);
	}
	template <typename T = int32_t> T get_sortingOrder() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A53E8))(this);
	}
	template <typename T = void> T set_sortingOrder(int32_t value) {
		return ((T (*)(Canvas*, int32_t))(Il2CppBase() + 0x46A5480))(this, value);
	}
	template <typename T = int32_t> T get_targetDisplay() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A5520))(this);
	}
	template <typename T = int32_t> T get_sortingLayerID() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A55B8))(this);
	}
	template <typename T = void> T set_sortingLayerID(int32_t value) {
		return ((T (*)(Canvas*, int32_t))(Il2CppBase() + 0x46A5650))(this, value);
	}
	template <typename T = uintptr_t> T get_rootCanvas() {
		return ((T (*)(Canvas*))(Il2CppBase() + 0x46A56F0))(this);
	}
	template <typename T = uintptr_t> static T GetDefaultCanvasMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A5788))(0);
	}
	template <typename T = uintptr_t> static T GetETC1SupportedCanvasMaterial() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A5818))(0);
	}
	template <typename T = void> static T add_willRenderCanvases(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A58A8))(0, value);
	}
	template <typename T = void> static T remove_willRenderCanvases(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46A5A88))(0, value);
	}
	template <typename T = void> static T SendWillRenderCanvases() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A5C68))(0);
	}
	template <typename T = void> static T ForceUpdateCanvases() {
		return ((T (*)(void *))(Il2CppBase() + 0x46A5D88))(0);
	}

};

}
