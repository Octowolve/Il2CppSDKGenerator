#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class EventTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "EventTrigger"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Delegates() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& delegates() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_triggers() {
		return ((T (*)(EventTrigger*))(Il2CppBase() + 0x3CFE3C4))(this);
	}
	template <typename T = void> T set_triggers(Il2CppList<uintptr_t>* value) {
		return ((T (*)(EventTrigger*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3CFE474))(this, value);
	}
	template <typename T = void> T Execute(uintptr_t id, uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CFE47C))(this, id, eventData);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE5BC))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE5C8))(this, eventData);
	}
	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE5D4))(this, eventData);
	}
	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE5E0))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE5EC))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE5F8))(this, eventData);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE604))(this, eventData);
	}
	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE610))(this, eventData);
	}
	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE61C))(this, eventData);
	}
	template <typename T = void> T OnScroll(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE628))(this, eventData);
	}
	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE634))(this, eventData);
	}
	template <typename T = void> T OnUpdateSelected(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE640))(this, eventData);
	}
	template <typename T = void> T OnInitializePotentialDrag(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE64C))(this, eventData);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE658))(this, eventData);
	}
	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE664))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE670))(this, eventData);
	}
	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(EventTrigger*, uintptr_t))(Il2CppBase() + 0x3CFE67C))(this, eventData);
	}

};

}
