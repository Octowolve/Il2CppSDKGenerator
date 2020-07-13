#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class Guideline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "Guideline"));
	}

	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& canRepeated() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isTrigger() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& isDiasbled() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = uintptr_t> T& TriggerEvent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_CanRepeated() {
		return ((T (*)(Guideline*))(Il2CppBase() + 0x4B04CD4))(this);
	}
	template <typename T = bool> T get_IsTrigger() {
		return ((T (*)(Guideline*))(Il2CppBase() + 0x4B04CDC))(this);
	}
	template <typename T = void> T set_IsTrigger(bool value) {
		return ((T (*)(Guideline*, bool))(Il2CppBase() + 0x4B04CCC))(this, value);
	}
	template <typename T = bool> T get_IsDisabled() {
		return ((T (*)(Guideline*))(Il2CppBase() + 0x4B04CE4))(this);
	}
	template <typename T = void> T set_IsDisabled(bool value) {
		return ((T (*)(Guideline*, bool))(Il2CppBase() + 0x4B04CEC))(this, value);
	}
	template <typename T = uintptr_t> T get_EventType() {
		return ((T (*)(Guideline*))(Il2CppBase() + 0x4B04CF4))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t inEventType, bool isRepeated) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4B04CFC))(0, inEventType, isRepeated);
	}

};

}
