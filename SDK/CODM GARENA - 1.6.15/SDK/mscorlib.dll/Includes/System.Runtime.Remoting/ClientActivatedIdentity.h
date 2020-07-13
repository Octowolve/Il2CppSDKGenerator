#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ClientActivatedIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ClientActivatedIdentity"));
	}


	template <typename T = uintptr_t> T GetServerObject() {
		return ((T (*)(ClientActivatedIdentity*))(Il2CppBase() + 0x4B22270))(this);
	}
	template <typename T = void> T OnLifetimeExpired() {
		return ((T (*)(ClientActivatedIdentity*))(Il2CppBase() + 0x4B22278))(this);
	}

};

}
