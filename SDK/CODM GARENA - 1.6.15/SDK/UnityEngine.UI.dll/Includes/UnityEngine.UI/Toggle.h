#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Toggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Toggle"));
	}

	template <typename T = uintptr_t> T& toggleTransition() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& graphic() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Group() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& onValueChanged() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_IsOn() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = uintptr_t> T get_group() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3EE04))(this);
	}
	template <typename T = void> T set_group(uintptr_t value) {
		return ((T (*)(Toggle*, uintptr_t))(Il2CppBase() + 0x4E3EE0C))(this, value);
	}
	template <typename T = void> T Rebuild(uintptr_t executing) {
		return ((T (*)(Toggle*, uintptr_t))(Il2CppBase() + 0x4E3F194))(this, executing);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3F198))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3F19C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3F1A0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3F1D0))(this);
	}
	template <typename T = void> T OnDidApplyAnimationProperties() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3F1F4))(this);
	}
	template <typename T = void> T SetToggleGroup(uintptr_t newGroup, bool setMemberValue) {
		return ((T (*)(Toggle*, uintptr_t, bool))(Il2CppBase() + 0x4E3EE34))(this, newGroup, setMemberValue);
	}
	template <typename T = bool> T get_isOn() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3F534))(this);
	}
	template <typename T = void> T set_isOn(bool value) {
		return ((T (*)(Toggle*, bool))(Il2CppBase() + 0x4E3F6C8))(this, value);
	}
	template <typename T = void> T Set(bool value) {
		return ((T (*)(Toggle*, bool))(Il2CppBase() + 0x4E3F37C))(this, value);
	}
	template <typename T = void> T Set_1(bool value, bool sendCallback) {
		return ((T (*)(Toggle*, bool, bool))(Il2CppBase() + 0x4E3F6D0))(this, value, sendCallback);
	}
	template <typename T = void> T PlayEffect(bool instant) {
		return ((T (*)(Toggle*, bool))(Il2CppBase() + 0x4E3F070))(this, instant);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3FA14))(this);
	}
	template <typename T = void> T InternalToggle() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3FA1C))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(Toggle*, uintptr_t))(Il2CppBase() + 0x4E3FA84))(this, eventData);
	}
	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(Toggle*, uintptr_t))(Il2CppBase() + 0x4E3FAC4))(this, eventData);
	}
	template <typename T = uintptr_t> T UnityEngine_UI_ICanvasElement_get_transform() {
		return ((T (*)(Toggle*))(Il2CppBase() + 0x4E3FAC8))(this);
	}

};

}
