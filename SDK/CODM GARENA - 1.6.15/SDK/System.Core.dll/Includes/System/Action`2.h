#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Action2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Action`2"));
	}


	template <typename T = void> T Invoke(uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(Action2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x50BA8DC))(this, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Action2*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50BA9A0))(this, arg1, arg2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Action2*, uintptr_t))(Il2CppBase() + 0x50BA9D8))(this, result);
	}

};

}
