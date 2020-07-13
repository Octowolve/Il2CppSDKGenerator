#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class EventHandlerList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "EventHandlerList"));
	}

	template <typename T = uintptr_t> T& entries() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& null_entry() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Item(uintptr_t key) {
		return ((T (*)(EventHandlerList*, uintptr_t))(Il2CppBase() + 0x4CA42E4))(this, key);
	}
	template <typename T = void> T AddHandler(uintptr_t key, uintptr_t value) {
		return ((T (*)(EventHandlerList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA3CBC))(this, key, value);
	}
	template <typename T = void> T RemoveHandler(uintptr_t key, uintptr_t value) {
		return ((T (*)(EventHandlerList*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CA3E14))(this, key, value);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(EventHandlerList*))(Il2CppBase() + 0x4CACC50))(this);
	}
	template <typename T = uintptr_t> T FindEntry(uintptr_t key) {
		return ((T (*)(EventHandlerList*, uintptr_t))(Il2CppBase() + 0x4CACC1C))(this, key);
	}

};

}
