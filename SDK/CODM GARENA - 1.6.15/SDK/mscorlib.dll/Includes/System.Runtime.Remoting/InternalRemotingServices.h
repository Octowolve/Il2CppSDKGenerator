#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class InternalRemotingServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "InternalRemotingServices"));
	}

	template <typename T = uintptr_t> static T& _soapAttributes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetCachedSoapAttribute(uintptr_t reflectionObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B303D0))(0, reflectionObject);
	}

};

}
