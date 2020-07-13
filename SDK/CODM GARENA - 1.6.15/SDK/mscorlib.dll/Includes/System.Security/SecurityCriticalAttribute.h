#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityCriticalAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityCriticalAttribute"));
	}

	template <typename T = uintptr_t> T& _scope() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
