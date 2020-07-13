#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Contexts {

class CrossContextDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Contexts", "CrossContextDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(CrossContextDelegate*))(Il2CppBase() + 0x4B2F3F8))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(CrossContextDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B2F488))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CrossContextDelegate*, uintptr_t))(Il2CppBase() + 0x4B2F4B4))(this, result);
	}

};

}
