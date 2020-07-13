#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OneShotSoundHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OneShotSoundHandle"));
	}

	template <typename T = bool> T& Finished() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCurrentCookie() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mDefaultCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mRegister() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mGameObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(OneShotSoundHandle*))(Il2CppBase() + 0x450392C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(OneShotSoundHandle*))(Il2CppBase() + 0x450391C))(this);
	}
	template <typename T = void> T PlayOneShot(Il2CppString* strEventName, Il2CppVector3 vecPos) {
		return ((T (*)(OneShotSoundHandle*, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x45035C0))(this, strEventName, vecPos);
	}
	template <typename T = void> T EventCallback(uintptr_t in_cookie, uintptr_t in_type, uintptr_t in_info) {
		return ((T (*)(OneShotSoundHandle*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4503C68))(this, in_cookie, in_type, in_info);
	}

};

}
