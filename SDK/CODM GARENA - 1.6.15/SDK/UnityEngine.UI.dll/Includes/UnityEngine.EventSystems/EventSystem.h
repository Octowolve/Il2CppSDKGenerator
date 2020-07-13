#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class EventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "EventSystem"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_SystemInputModules() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_CurrentInputModule() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_FirstSelected() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_sendNavigationEvents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_DragThreshold() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CurrentSelected() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_HasFocus() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_SelectionGuard() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& m_DummyData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> static T& s_RaycastComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_current() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFCA7C))(0);
	}
	template <typename T = void> static T set_current(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CFCB2C))(0, value);
	}
	template <typename T = bool> T get_sendNavigationEvents() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCBE0))(this);
	}
	template <typename T = void> T set_sendNavigationEvents(bool value) {
		return ((T (*)(EventSystem*, bool))(Il2CppBase() + 0x3CFCBE8))(this, value);
	}
	template <typename T = int32_t> T get_pixelDragThreshold() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCBF0))(this);
	}
	template <typename T = void> T set_pixelDragThreshold(int32_t value) {
		return ((T (*)(EventSystem*, int32_t))(Il2CppBase() + 0x3CFCBF8))(this, value);
	}
	template <typename T = uintptr_t> T get_currentInputModule() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCC00))(this);
	}
	template <typename T = uintptr_t> T get_firstSelectedGameObject() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCC08))(this);
	}
	template <typename T = void> T set_firstSelectedGameObject(uintptr_t value) {
		return ((T (*)(EventSystem*, uintptr_t))(Il2CppBase() + 0x3CFCC10))(this, value);
	}
	template <typename T = uintptr_t> T get_currentSelectedGameObject() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCC18))(this);
	}
	template <typename T = uintptr_t> T get_lastSelectedGameObject() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCC20))(this);
	}
	template <typename T = bool> T get_isFocused() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCC28))(this);
	}
	template <typename T = void> T UpdateModules() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFAD1C))(this);
	}
	template <typename T = bool> T get_alreadySelecting() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCC30))(this);
	}
	template <typename T = void> T SetSelectedGameObject(uintptr_t selected, uintptr_t pointer) {
		return ((T (*)(EventSystem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CF9B68))(this, selected, pointer);
	}
	template <typename T = uintptr_t> T get_baseEventDataCache() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFCD98))(this);
	}
	template <typename T = void> T SetSelectedGameObject_1(uintptr_t selected) {
		return ((T (*)(EventSystem*, uintptr_t))(Il2CppBase() + 0x3CFCE3C))(this, selected);
	}
	template <typename T = int32_t> static T RaycastComparer(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFCE64))(0, lhs, rhs);
	}
	template <typename T = void> T RaycastAll(uintptr_t eventData, Il2CppList<uintptr_t>* raycastResults) {
		return ((T (*)(EventSystem*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CFD330))(this, eventData, raycastResults);
	}
	template <typename T = bool> T IsPointerOverGameObject() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFD61C))(this);
	}
	template <typename T = bool> T IsPointerOverGameObject_1(int32_t pointerId) {
		return ((T (*)(EventSystem*, int32_t))(Il2CppBase() + 0x3CFD624))(this, pointerId);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFD718))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFD844))(this);
	}
	template <typename T = void> T TickModules() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFD9F0))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool hasFocus) {
		return ((T (*)(EventSystem*, bool))(Il2CppBase() + 0x3CFDB68))(this, hasFocus);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFDB74))(this);
	}
	template <typename T = void> T ChangeEventModule(uintptr_t module) {
		return ((T (*)(EventSystem*, uintptr_t))(Il2CppBase() + 0x3CFDF44))(this, module);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(EventSystem*))(Il2CppBase() + 0x3CFE0E4))(this);
	}

};

}
