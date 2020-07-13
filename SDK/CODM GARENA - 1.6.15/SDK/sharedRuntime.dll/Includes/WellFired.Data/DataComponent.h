#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Data {

class DataComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Data", "DataComponent"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(DataComponent*))(Il2CppBase() + 0x5220380))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(DataComponent*, uintptr_t))(Il2CppBase() + 0x5220388))(this, value);
	}
	template <typename T = void> T InitFromData(uintptr_t data) {
		return ((T (*)(DataComponent*, uintptr_t))(Il2CppBase() + 0x5220390))(this, data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DataComponent*))(Il2CppBase() + 0x5220398))(this);
	}

};

}
