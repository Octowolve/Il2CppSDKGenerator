#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class CanvasUpdateRegistry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "CanvasUpdateRegistry"));
	}

	template <typename T = uintptr_t> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_PerformingLayoutUpdate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_PerformingGraphicUpdate() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = void*> T& m_LayoutRebuildQueue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_GraphicRebuildQueue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& s_SortLayoutFunction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D0B500))(0);
	}
	template <typename T = bool> T ObjectValidForUpdate(uintptr_t element) {
		return ((T (*)(CanvasUpdateRegistry*, uintptr_t))(Il2CppBase() + 0x3D0B65C))(this, element);
	}
	template <typename T = void> T CleanInvalidItems() {
		return ((T (*)(CanvasUpdateRegistry*))(Il2CppBase() + 0x3D0B788))(this);
	}
	template <typename T = void> T PerformUpdate() {
		return ((T (*)(CanvasUpdateRegistry*))(Il2CppBase() + 0x3D0BBA4))(this);
	}
	template <typename T = int32_t> static T ParentCount(uintptr_t child) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0C8D8))(0, child);
	}
	template <typename T = int32_t> static T SortLayoutList(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D0CA28))(0, x, y);
	}
	template <typename T = void> static T RegisterCanvasElementForLayoutRebuild(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0CBF0))(0, element);
	}
	template <typename T = bool> static T TryRegisterCanvasElementForLayoutRebuild(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0CD88))(0, element);
	}
	template <typename T = bool> T InternalRegisterCanvasElementForLayoutRebuild(uintptr_t element) {
		return ((T (*)(CanvasUpdateRegistry*, uintptr_t))(Il2CppBase() + 0x3D0CCA8))(this, element);
	}
	template <typename T = void> static T RegisterCanvasElementForGraphicRebuild(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0CE40))(0, element);
	}
	template <typename T = bool> T InternalRegisterCanvasElementForGraphicRebuild(uintptr_t element) {
		return ((T (*)(CanvasUpdateRegistry*, uintptr_t))(Il2CppBase() + 0x3D0CEF8))(this, element);
	}
	template <typename T = void> static T UnRegisterCanvasElementForRebuild(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D0D058))(0, element);
	}
	template <typename T = void> T InternalUnRegisterCanvasElementForLayoutRebuild(uintptr_t element) {
		return ((T (*)(CanvasUpdateRegistry*, uintptr_t))(Il2CppBase() + 0x3D0D124))(this, element);
	}
	template <typename T = void> T InternalUnRegisterCanvasElementForGraphicRebuild(uintptr_t element) {
		return ((T (*)(CanvasUpdateRegistry*, uintptr_t))(Il2CppBase() + 0x3D0D33C))(this, element);
	}
	template <typename T = bool> static T IsRebuildingLayout() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D0D554))(0);
	}
	template <typename T = bool> static T IsRebuildingGraphics() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D0D600))(0);
	}

};

}
