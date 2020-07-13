#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Activation {

class RemoteActivator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "RemoteActivator"));
	}


	template <typename T = uintptr_t> T InitializeLifetimeService() {
		return ((T (*)(RemoteActivator*))(Il2CppBase() + 0x4B1C0B0))(this);
	}

};

}
