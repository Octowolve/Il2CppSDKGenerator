#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Proxies {

class ProxyAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Proxies", "ProxyAttribute"));
	}


	template <typename T = uintptr_t> T CreateInstance(uintptr_t serverType) {
		return ((T (*)(ProxyAttribute*, uintptr_t))(Il2CppBase() + 0x4B3F54C))(this, serverType);
	}
	template <typename T = uintptr_t> T CreateProxy(uintptr_t objRef, uintptr_t serverType, uintptr_t serverObject, uintptr_t serverContext) {
		return ((T (*)(ProxyAttribute*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3F6DC))(this, objRef, serverType, serverObject, serverContext);
	}
	template <typename T = void> T GetPropertiesForNewContext(uintptr_t msg) {
		return ((T (*)(ProxyAttribute*, uintptr_t))(Il2CppBase() + 0x4B3F8EC))(this, msg);
	}
	template <typename T = bool> T IsContextOK(uintptr_t ctx, uintptr_t msg) {
		return ((T (*)(ProxyAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3F8F0))(this, ctx, msg);
	}

};

}
