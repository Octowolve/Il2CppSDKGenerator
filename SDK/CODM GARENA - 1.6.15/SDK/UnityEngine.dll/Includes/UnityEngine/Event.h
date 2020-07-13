#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Event
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Event"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& s_Current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_MasterEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA703C))(this);
	}
	template <typename T = Il2CppVector2> T get_mousePosition() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA7138))(this);
	}
	template <typename T = Il2CppVector2> T get_delta() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA7214))(this);
	}
	template <typename T = bool> T get_shift() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA72F0))(this);
	}
	template <typename T = bool> T get_alt() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA739C))(this);
	}
	template <typename T = uintptr_t> static T get_current() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DA73B4))(0);
	}
	template <typename T = void> static T Internal_MakeMasterEventCurrent(int32_t displayIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4DA7434))(0, displayIndex);
	}
	template <typename T = bool> T get_isKey() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA7698))(this);
	}
	template <typename T = bool> T get_isMouse() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA7754))(this);
	}
	template <typename T = uintptr_t> static T KeyboardEvent(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DA7784))(0, key);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA8AB0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Event*, uintptr_t))(Il2CppBase() + 0x4DA8C00))(this, obj);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA8ECC))(this);
	}
	template <typename T = void> T Use() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA991C))(this);
	}
	template <typename T = void> T Init(int32_t displayIndex) {
		return ((T (*)(Event*, int32_t))(Il2CppBase() + 0x4DA6F74))(this, displayIndex);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA70A0))(this);
	}
	template <typename T = uintptr_t> T get_rawType() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA9B58))(this);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA76BC))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(Event*, uintptr_t))(Il2CppBase() + 0x4DA8798))(this, value);
	}
	template <typename T = uintptr_t> T GetTypeForControl(int32_t controlID) {
		return ((T (*)(Event*, int32_t))(Il2CppBase() + 0x4DA9BF0))(this, controlID);
	}
	template <typename T = void> T Internal_GetMousePosition(uintptr_t* value) {
		return ((T (*)(Event*, uintptr_t*))(Il2CppBase() + 0x4DA7174))(this, value);
	}
	template <typename T = void> T Internal_GetMouseDelta(uintptr_t* value) {
		return ((T (*)(Event*, uintptr_t*))(Il2CppBase() + 0x4DA7250))(this, value);
	}
	template <typename T = uintptr_t> T get_modifiers() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA7304))(this);
	}
	template <typename T = void> T set_modifiers(uintptr_t value) {
		return ((T (*)(Event*, uintptr_t))(Il2CppBase() + 0x4DA8838))(this, value);
	}
	template <typename T = int32_t> T get_clickCount() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA9C90))(this);
	}
	template <typename T = char> T get_character() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA8A18))(this);
	}
	template <typename T = void> T set_character(char value) {
		return ((T (*)(Event*, char))(Il2CppBase() + 0x4DA88D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_commandName() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA9884))(this);
	}
	template <typename T = uintptr_t> T get_keyCode() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA8B68))(this);
	}
	template <typename T = void> T set_keyCode(uintptr_t value) {
		return ((T (*)(Event*, uintptr_t))(Il2CppBase() + 0x4DA8978))(this, value);
	}
	template <typename T = void> static T Internal_SetNativeEvent(uintptr_t ptr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA7600))(0, ptr);
	}
	template <typename T = void> T set_displayIndex(int32_t value) {
		return ((T (*)(Event*, int32_t))(Il2CppBase() + 0x4DA7560))(this, value);
	}
	template <typename T = void> T Internal_Use() {
		return ((T (*)(Event*))(Il2CppBase() + 0x4DA9AC0))(this);
	}
	template <typename T = bool> static T PopEvent(uintptr_t outEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA9D28))(0, outEvent);
	}

};

}
