#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnActionMsgFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnActionMsgFunc"));
	}


	template <typename T = unsigned char> T Invoke(uintptr_t callback, Il2CppString* url) {
		return ((T (*)(OnActionMsgFunc*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x499077C))(this, callback, url);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, Il2CppString* url, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnActionMsgFunc*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4990808))(this, callback, url, _callback, object);
	}
	template <typename T = unsigned char> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnActionMsgFunc*, uintptr_t))(Il2CppBase() + 0x49908CC))(this, result);
	}

};

}
