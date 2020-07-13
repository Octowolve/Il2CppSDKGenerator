#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventCallbackOnEnd
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventCallbackOnEnd"));
	}

	template <typename T = uintptr_t> T& Cookie() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& CallbackGot() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EventCallbackOnEnd*))(Il2CppBase() + 0x44FA9E0))(this);
	}

};

}
