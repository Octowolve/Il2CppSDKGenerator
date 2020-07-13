#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ToggleGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ToggleGroup"));
	}

	template <typename T = bool> T& m_AllowSwitchOff() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Toggles() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_allowSwitchOff() {
		return ((T (*)(ToggleGroup*))(Il2CppBase() + 0x4E3FA0C))(this);
	}
	template <typename T = void> T set_allowSwitchOff(bool value) {
		return ((T (*)(ToggleGroup*, bool))(Il2CppBase() + 0x4E3FB84))(this, value);
	}
	template <typename T = void> T ValidateToggleIsInGroup(uintptr_t toggle) {
		return ((T (*)(ToggleGroup*, uintptr_t))(Il2CppBase() + 0x4E3FB8C))(this, toggle);
	}
	template <typename T = void> T NotifyToggleOn(uintptr_t toggle) {
		return ((T (*)(ToggleGroup*, uintptr_t))(Il2CppBase() + 0x4E3F53C))(this, toggle);
	}
	template <typename T = void> T UnregisterToggle(uintptr_t toggle) {
		return ((T (*)(ToggleGroup*, uintptr_t))(Il2CppBase() + 0x4E3F384))(this, toggle);
	}
	template <typename T = void> T RegisterToggle(uintptr_t toggle) {
		return ((T (*)(ToggleGroup*, uintptr_t))(Il2CppBase() + 0x4E3F45C))(this, toggle);
	}
	template <typename T = bool> T AnyTogglesOn() {
		return ((T (*)(ToggleGroup*))(Il2CppBase() + 0x4E3F88C))(this);
	}
	template <typename T = void*> T ActiveToggles() {
		return ((T (*)(ToggleGroup*))(Il2CppBase() + 0x4E3FDDC))(this);
	}
	template <typename T = void> T SetAllTogglesOff() {
		return ((T (*)(ToggleGroup*))(Il2CppBase() + 0x4E3FF04))(this);
	}
	template <typename T = bool> static T AnyTogglesOnm__0(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E4000C))(0, x);
	}
	template <typename T = bool> static T ActiveTogglesm__1(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E4002C))(0, x);
	}

};

}
