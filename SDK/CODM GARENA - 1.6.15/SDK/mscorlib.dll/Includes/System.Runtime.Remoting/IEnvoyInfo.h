#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class IEnvoyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "IEnvoyInfo"));
	}


	template <typename T = uintptr_t> T get_EnvoySinks() {
		return ((T (*)(IEnvoyInfo*))(Il2CppBase() + 0x0))(this);
	}

};

}
