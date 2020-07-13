#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetterAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "GetterAdapter"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t _this) {
		return ((T (*)(GetterAdapter*, uintptr_t))(Il2CppBase() + 0x4FD81F0))(this, _this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t _this, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GetterAdapter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD8288))(this, _this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(GetterAdapter*, uintptr_t))(Il2CppBase() + 0x4FD82B4))(this, result);
	}

};

}
