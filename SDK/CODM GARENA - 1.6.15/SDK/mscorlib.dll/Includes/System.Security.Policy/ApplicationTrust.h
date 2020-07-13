#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Policy {

class ApplicationTrust
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Policy", "ApplicationTrust"));
	}

	template <typename T = void*> T& fullTrustAssemblies() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
