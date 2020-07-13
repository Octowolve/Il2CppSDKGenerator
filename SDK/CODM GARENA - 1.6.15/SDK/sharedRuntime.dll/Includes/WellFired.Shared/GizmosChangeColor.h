#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class GizmosChangeColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "GizmosChangeColor"));
	}

	template <typename T = uintptr_t> T& PreviousColor() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_PreviousColor() {
		return ((T (*)(GizmosChangeColor*))(Il2CppBase() + 0x5224B84))(this);
	}
	template <typename T = void> T set_PreviousColor(uintptr_t value) {
		return ((T (*)(GizmosChangeColor*, uintptr_t))(Il2CppBase() + 0x5224B6C))(this, value);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GizmosChangeColor*))(Il2CppBase() + 0x5224B94))(this);
	}

};

}
