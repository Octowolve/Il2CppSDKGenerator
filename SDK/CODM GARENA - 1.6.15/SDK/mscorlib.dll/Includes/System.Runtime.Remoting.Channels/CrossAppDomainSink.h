#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class CrossAppDomainSink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "CrossAppDomainSink"));
	}

	template <typename T = uintptr_t> static T& s_sinks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& processMessageMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& _domainID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T GetSink(int32_t domainID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4B21C6C))(0, domainID);
	}
	template <typename T = int32_t> T get_TargetDomainId() {
		return ((T (*)(CrossAppDomainSink*))(Il2CppBase() + 0x4B22130))(this);
	}

};

}
