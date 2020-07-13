#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Func1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Func`1"));
	}


	template <typename T = uintptr_t> T Invoke() {
		return ((T (*)(Func1*))(Il2CppBase() + 0x51573B0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(Func1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5157440))(this, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(Func1*, uintptr_t))(Il2CppBase() + 0x515746C))(this, result);
	}

};

}
