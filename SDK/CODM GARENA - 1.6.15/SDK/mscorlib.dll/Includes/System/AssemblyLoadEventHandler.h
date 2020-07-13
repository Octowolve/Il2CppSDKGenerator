#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class AssemblyLoadEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "AssemblyLoadEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t args) {
		return ((T (*)(AssemblyLoadEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626978))(this, sender, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AssemblyLoadEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626A3C))(this, sender, args, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AssemblyLoadEventHandler*, uintptr_t))(Il2CppBase() + 0x3626A74))(this, result);
	}

};

}
