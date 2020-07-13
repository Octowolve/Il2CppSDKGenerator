#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class ModuleResolveEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "ModuleResolveEventHandler"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(ModuleResolveEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD3000))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ModuleResolveEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD30C4))(this, sender, e, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ModuleResolveEventHandler*, uintptr_t))(Il2CppBase() + 0x4FD30FC))(this, result);
	}

};

}
