#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class ResolveEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "ResolveEventHandler"));
	}


	template <typename T = uintptr_t> T Invoke(uintptr_t sender, uintptr_t args) {
		return ((T (*)(ResolveEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDA5A4))(this, sender, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ResolveEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FDA668))(this, sender, args, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(ResolveEventHandler*, uintptr_t))(Il2CppBase() + 0x4FDA6A0))(this, result);
	}

};

}
