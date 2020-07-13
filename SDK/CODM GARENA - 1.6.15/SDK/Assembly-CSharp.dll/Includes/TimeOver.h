#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeOver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeOver"));
	}


	template <typename T = void> T Invoke(uintptr_t buff) {
		return ((T (*)(TimeOver*, uintptr_t))(Il2CppBase() + 0x374CE20))(this, buff);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t buff, uintptr_t callback, uintptr_t object) {
		return ((T (*)(TimeOver*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x374D910))(this, buff, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(TimeOver*, uintptr_t))(Il2CppBase() + 0x374D93C))(this, result);
	}

};

}
