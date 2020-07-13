#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class LogDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "LogDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t pri, uintptr_t msg) {
		return ((T (*)(LogDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B2530))(this, pri, msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t pri, uintptr_t msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LogDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B25C4))(this, pri, msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LogDelegate*, uintptr_t))(Il2CppBase() + 0x46B26A4))(this, result);
	}

};

}
