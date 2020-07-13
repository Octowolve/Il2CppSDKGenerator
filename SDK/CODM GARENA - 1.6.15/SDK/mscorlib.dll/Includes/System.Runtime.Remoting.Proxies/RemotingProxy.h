#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Proxies {

class RemotingProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Proxies", "RemotingProxy"));
	}

	template <typename T = uintptr_t> static T& _cache_GetTypeMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _cache_GetHashCodeMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& _sink() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _hasEnvoySink() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _ctorCall() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(RemotingProxy*))(Il2CppBase() + 0x4B40190))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(RemotingProxy*))(Il2CppBase() + 0x4B40344))(this);
	}

};

}
