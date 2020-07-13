#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.UI {

class WindowStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.UI", "WindowStack"));
	}

	template <typename T = void*> T& windowStack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rootCanvas() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& eventSystem() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CloseWindow(uintptr_t window) {
		return ((T (*)(WindowStack*, uintptr_t))(Il2CppBase() + 0x5225EF4))(this, window);
	}
	template <typename T = void> T PopWindow() {
		return ((T (*)(WindowStack*))(Il2CppBase() + 0x5226058))(this);
	}

};

}
