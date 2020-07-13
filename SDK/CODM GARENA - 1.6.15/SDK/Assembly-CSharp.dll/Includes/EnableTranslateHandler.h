#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnableTranslateHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnableTranslateHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t code, Il2CppString* roomName, bool enable) {
		return ((T (*)(EnableTranslateHandler*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x45433F8))(this, code, roomName, enable);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t code, Il2CppString* roomName, bool enable, uintptr_t callback, uintptr_t object) {
		return ((T (*)(EnableTranslateHandler*, uintptr_t, Il2CppString*, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x454B99C))(this, code, roomName, enable, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EnableTranslateHandler*, uintptr_t))(Il2CppBase() + 0x454BA7C))(this, result);
	}

};

}
