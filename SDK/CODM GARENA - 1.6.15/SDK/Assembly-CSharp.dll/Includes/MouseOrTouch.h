#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseOrTouch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MouseOrTouch"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& lastPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& delta() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& totalDelta() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& pressedCam() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& last() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& internalCurrent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& pressed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& dragged() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& pressTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& clickTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& clickNotification() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& touchBegan() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& pressStarted() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& dragStarted() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = int32_t> T& ignoreDelta() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T set_current(uintptr_t value) {
		return ((T (*)(MouseOrTouch*, uintptr_t))(Il2CppBase() + 0x39B3234))(this, value);
	}
	template <typename T = uintptr_t> T get_current() {
		return ((T (*)(MouseOrTouch*))(Il2CppBase() + 0x39AA0B4))(this);
	}
	template <typename T = float> T get_deltaTime() {
		return ((T (*)(MouseOrTouch*))(Il2CppBase() + 0x39C2784))(this);
	}
	template <typename T = bool> T get_isOverUI() {
		return ((T (*)(MouseOrTouch*))(Il2CppBase() + 0x39B0D1C))(this);
	}

};

}
