#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ServerIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ServerIdentity"));
	}

	template <typename T = uintptr_t> T& _objectType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _serverObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _serverSink() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _lease() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uintptr_t> T get_ObjectType() {
		return ((T (*)(ServerIdentity*))(Il2CppBase() + 0x4B41A9C))(this);
	}
	template <typename T = void> T StartTrackingLifetime(uintptr_t lease) {
		return ((T (*)(ServerIdentity*, uintptr_t))(Il2CppBase() + 0x4B42EFC))(this, lease);
	}
	template <typename T = void> T OnLifetimeExpired() {
		return ((T (*)(ServerIdentity*))(Il2CppBase() + 0x4B22320))(this);
	}
	template <typename T = uintptr_t> T CreateObjRef(uintptr_t requestedType) {
		return ((T (*)(ServerIdentity*, uintptr_t))(Il2CppBase() + 0x4B44594))(this, requestedType);
	}
	template <typename T = void> T AttachServerObject(uintptr_t serverObject, uintptr_t context) {
		return ((T (*)(ServerIdentity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B44308))(this, serverObject, context);
	}
	template <typename T = uintptr_t> T get_Lease() {
		return ((T (*)(ServerIdentity*))(Il2CppBase() + 0x4B32070))(this);
	}
	template <typename T = void> T DisposeServerObject() {
		return ((T (*)(ServerIdentity*))(Il2CppBase() + 0x4B444D0))(this);
	}

};

}
