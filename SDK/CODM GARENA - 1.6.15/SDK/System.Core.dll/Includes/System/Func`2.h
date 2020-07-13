#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Func2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Func`2"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t arg1) {
		return ((T (*)(Func2*, uintptr_t))(Il2CppBase() + 0x517E310))(this, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Func2*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x517E3A8))(this, arg1, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Func2*, uintptr_t))(Il2CppBase() + 0x517E3D4))(this, result);
	}

};

}
