#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Action3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Action`3"));
	}


	template <typename T = void> T Invoke(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3) {
		return ((T (*)(Action3*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50BC4DC))(this, arg1, arg2, arg3);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Action3*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50BC5B8))(this, arg1, arg2, arg3, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Action3*, uintptr_t))(Il2CppBase() + 0x50BC5F4))(this, result);
	}

};

}
