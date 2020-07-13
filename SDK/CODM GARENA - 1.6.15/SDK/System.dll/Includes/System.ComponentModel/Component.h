#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class Component
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "Component"));
	}

	template <typename T = uintptr_t> T& event_handlers() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mySite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& disposedEvent() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T add_Disposed(uintptr_t value) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4CA3BE4))(this, value);
	}
	template <typename T = void> T remove_Disposed(uintptr_t value) {
		return ((T (*)(Component*, uintptr_t))(Il2CppBase() + 0x4CA3DDC))(this, value);
	}
	template <typename T = uintptr_t> T get_Site() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4CA3E60))(this);
	}
	template <typename T = uintptr_t> T get_Events() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4CA3C1C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4CA3E70))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4CA3EDC))(this);
	}
	template <typename T = void> T Dispose_1(bool release_all) {
		return ((T (*)(Component*, bool))(Il2CppBase() + 0x4CA3F14))(this, release_all);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Component*))(Il2CppBase() + 0x4CA431C))(this);
	}

};

}
