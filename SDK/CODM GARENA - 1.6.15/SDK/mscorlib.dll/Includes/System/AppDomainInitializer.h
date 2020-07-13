#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class AppDomainInitializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "AppDomainInitializer"));
	}


	template <typename T = void> T Invoke(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AppDomainInitializer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x361E56C))(this, args);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppArray<uintptr_t>* args, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AppDomainInitializer*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361E604))(this, args, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AppDomainInitializer*, uintptr_t))(Il2CppBase() + 0x361E630))(this, result);
	}

};

}
