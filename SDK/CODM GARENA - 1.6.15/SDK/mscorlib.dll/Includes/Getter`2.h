#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Getter2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Getter`2"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t _this) {
		return ((T (*)(Getter2*, uintptr_t))(Il2CppBase() + 0x51161C4))(this, _this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t _this, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Getter2*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x511625C))(this, _this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Getter2*, uintptr_t))(Il2CppBase() + 0x5116288))(this, result);
	}

};

}
