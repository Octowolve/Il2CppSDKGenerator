#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Proxies {

class RealProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Proxies", "RealProxy"));
	}

	template <typename T = uintptr_t> T& class_to_proxy() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _targetDomainId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _targetUri() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _objectIdentity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _objTP() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> static T InternalGetProxyType(uintptr_t transparentProxy) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B3FBC0))(0, transparentProxy);
	}
	template <typename T = uintptr_t> T GetProxiedType() {
		return ((T (*)(RealProxy*))(Il2CppBase() + 0x4B3FBC8))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(RealProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3FCCC))(this, info, context);
	}
	template <typename T = uintptr_t> T get_ObjectIdentity() {
		return ((T (*)(RealProxy*))(Il2CppBase() + 0x4B2B634))(this);
	}
	template <typename T = void> T set_ObjectIdentity(uintptr_t value) {
		return ((T (*)(RealProxy*, uintptr_t))(Il2CppBase() + 0x4B3FDA4))(this, value);
	}
	template <typename T = uintptr_t> T InternalGetTransparentProxy(Il2CppString* className) {
		return ((T (*)(RealProxy*, Il2CppString*))(Il2CppBase() + 0x4B3FDAC))(this, className);
	}
	template <typename T = uintptr_t> T GetTransparentProxy() {
		return ((T (*)(RealProxy*))(Il2CppBase() + 0x4B3FDB0))(this);
	}
	template <typename T = void> T SetTargetDomain(int32_t domainId) {
		return ((T (*)(RealProxy*, int32_t))(Il2CppBase() + 0x4B3FFE4))(this, domainId);
	}

};

}
