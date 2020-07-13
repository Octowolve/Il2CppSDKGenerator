#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class CrossAppDomainData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "CrossAppDomainData"));
	}

	template <typename T = uintptr_t> T& _ContextID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _DomainID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _processGuid() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_DomainID() {
		return ((T (*)(CrossAppDomainData*))(Il2CppBase() + 0x4B21C64))(this);
	}
	template <typename T = Il2CppString*> T get_ProcessID() {
		return ((T (*)(CrossAppDomainData*))(Il2CppBase() + 0x4B21AFC))(this);
	}

};

}
