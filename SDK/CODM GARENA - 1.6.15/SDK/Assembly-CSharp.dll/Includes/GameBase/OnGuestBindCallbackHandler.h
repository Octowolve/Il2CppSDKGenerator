#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnGuestBindCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnGuestBindCallbackHandler"));
	}


	template <typename T = void> T Invoke(bool success, int32_t retCode, int32_t innerCode, Il2CppString* confirmCode) {
		return ((T (*)(OnGuestBindCallbackHandler*, bool, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1622CF8))(this, success, retCode, innerCode, confirmCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool success, int32_t retCode, int32_t innerCode, Il2CppString* confirmCode, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnGuestBindCallbackHandler*, bool, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1622DAC))(this, success, retCode, innerCode, confirmCode, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnGuestBindCallbackHandler*, uintptr_t))(Il2CppBase() + 0x1622EAC))(this, result);
	}

};

}
