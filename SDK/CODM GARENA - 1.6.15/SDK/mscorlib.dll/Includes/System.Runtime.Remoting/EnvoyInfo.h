#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class EnvoyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "EnvoyInfo"));
	}

	template <typename T = uintptr_t> T& envoySinks() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_EnvoySinks() {
		return ((T (*)(EnvoyInfo*))(Il2CppBase() + 0x4B302E8))(this);
	}

};

}
