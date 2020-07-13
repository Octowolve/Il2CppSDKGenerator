#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.UI {

class WindowWithDataComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.UI", "WindowWithDataComponent"));
	}

	template <typename T = uintptr_t> T& Data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(WindowWithDataComponent*))(Il2CppBase() + 0x52260F8))(this);
	}
	template <typename T = void> T set_Data(uintptr_t value) {
		return ((T (*)(WindowWithDataComponent*, uintptr_t))(Il2CppBase() + 0x5226100))(this, value);
	}
	template <typename T = void> T InitFromData(uintptr_t data) {
		return ((T (*)(WindowWithDataComponent*, uintptr_t))(Il2CppBase() + 0x5226108))(this, data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WindowWithDataComponent*))(Il2CppBase() + 0x5226110))(this);
	}
	template <typename T = void> T Ready() {
		return ((T (*)(WindowWithDataComponent*))(Il2CppBase() + 0x52261F0))(this);
	}

};

}
