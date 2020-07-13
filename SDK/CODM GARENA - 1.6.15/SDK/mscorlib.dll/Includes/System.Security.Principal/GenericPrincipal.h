#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Principal {

class GenericPrincipal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Principal", "GenericPrincipal"));
	}

	template <typename T = uintptr_t> T& m_identity() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_roles() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
