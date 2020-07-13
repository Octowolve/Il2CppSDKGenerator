#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ClientIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ClientIdentity"));
	}

	template <typename T = uintptr_t> T& _proxyReference() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_ClientProxy() {
		return ((T (*)(ClientIdentity*))(Il2CppBase() + 0x4B22728))(this);
	}
	template <typename T = void> T set_ClientProxy(uintptr_t value) {
		return ((T (*)(ClientIdentity*, uintptr_t))(Il2CppBase() + 0x4B227D0))(this, value);
	}
	template <typename T = uintptr_t> T CreateObjRef(uintptr_t requestedType) {
		return ((T (*)(ClientIdentity*, uintptr_t))(Il2CppBase() + 0x4B22868))(this, requestedType);
	}
	template <typename T = Il2CppString*> T get_TargetUri() {
		return ((T (*)(ClientIdentity*))(Il2CppBase() + 0x4B22870))(this);
	}

};

}
