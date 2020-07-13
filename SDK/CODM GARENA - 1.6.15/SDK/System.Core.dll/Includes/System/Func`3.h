#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Func3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Func`3"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(Func3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5162780))(this, arg1, arg2);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg1, uintptr_t arg2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Func3*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5162844))(this, arg1, arg2, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Func3*, uintptr_t))(Il2CppBase() + 0x516287C))(this, result);
	}

};

}
