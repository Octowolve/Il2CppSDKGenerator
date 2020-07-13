#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventCallbackPackage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventCallbackPackage"));
	}

	template <typename T = bool> T& m_bNotifyEndOfEvent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Cookie() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& m_playingID() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> static T Create(uintptr_t in_cb, uintptr_t in_cookie, uintptr_t io_Flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48F60B4))(0, in_cb, in_cookie, io_Flags);
	}
	template <typename T = void> T RemoveCookie() {
		return ((T (*)(EventCallbackPackage*))(Il2CppBase() + 0x48F6248))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(EventCallbackPackage*))(Il2CppBase() + 0x48F62FC))(this);
	}

};

}
