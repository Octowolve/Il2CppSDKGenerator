#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StaticGetter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "StaticGetter`1"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(StaticGetter1*))(Il2CppBase() + 0x51162A8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(StaticGetter1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5116338))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(StaticGetter1*, uintptr_t))(Il2CppBase() + 0x5116364))(this, result);
	}

};

}
