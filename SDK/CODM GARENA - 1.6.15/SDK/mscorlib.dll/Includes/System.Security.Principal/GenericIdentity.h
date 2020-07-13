#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Principal {

class GenericIdentity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Principal", "GenericIdentity"));
	}

	template <typename T = Il2CppString*> T& m_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
