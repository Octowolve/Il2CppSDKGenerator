#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddEventAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "AddEventAdapter"));
	}


	template <typename T = void> T Invoke(uintptr_t _this, uintptr_t dele) {
		return ((T (*)(AddEventAdapter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD0530))(this, _this, dele);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t _this, uintptr_t dele, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AddEventAdapter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD05F4))(this, _this, dele, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AddEventAdapter*, uintptr_t))(Il2CppBase() + 0x4FD062C))(this, result);
	}

};

}
