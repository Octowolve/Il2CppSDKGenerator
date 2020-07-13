#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.UI {

class Window
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.UI", "Window"));
	}

	template <typename T = uintptr_t> T& WindowStack() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FirstSelectedGameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& OnClose() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_WindowStack() {
		return ((T (*)(Window*))(Il2CppBase() + 0x5225DD8))(this);
	}
	template <typename T = void> T set_WindowStack(uintptr_t value) {
		return ((T (*)(Window*, uintptr_t))(Il2CppBase() + 0x5225DE0))(this, value);
	}
	template <typename T = uintptr_t> T get_FirstSelectedGameObject() {
		return ((T (*)(Window*))(Il2CppBase() + 0x5225DE8))(this);
	}
	template <typename T = void> T set_FirstSelectedGameObject(uintptr_t value) {
		return ((T (*)(Window*, uintptr_t))(Il2CppBase() + 0x5225DF0))(this, value);
	}
	template <typename T = uintptr_t> T get_OnClose() {
		return ((T (*)(Window*))(Il2CppBase() + 0x5225DF8))(this);
	}
	template <typename T = void> T set_OnClose(uintptr_t value) {
		return ((T (*)(Window*, uintptr_t))(Il2CppBase() + 0x5225E00))(this, value);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(Window*))(Il2CppBase() + 0x5225E08))(this);
	}
	template <typename T = void> T Ready() {
		return ((T (*)(Window*))(Il2CppBase() + 0x5226054))(this);
	}

};

}
