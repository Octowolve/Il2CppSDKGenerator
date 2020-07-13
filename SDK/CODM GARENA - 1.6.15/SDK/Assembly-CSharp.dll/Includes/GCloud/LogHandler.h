#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class LogHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "LogHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t pri, Il2CppString* msg) {
		return ((T (*)(LogHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x46B26FC))(this, pri, msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t pri, Il2CppString* msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LogHandler*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B2790))(this, pri, msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LogHandler*, uintptr_t))(Il2CppBase() + 0x46B2854))(this, result);
	}

};

}
