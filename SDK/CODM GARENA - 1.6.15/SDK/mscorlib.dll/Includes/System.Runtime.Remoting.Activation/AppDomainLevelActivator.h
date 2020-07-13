#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Activation {

class AppDomainLevelActivator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "AppDomainLevelActivator"));
	}

	template <typename T = Il2CppString*> T& _activationUrl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _next() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
