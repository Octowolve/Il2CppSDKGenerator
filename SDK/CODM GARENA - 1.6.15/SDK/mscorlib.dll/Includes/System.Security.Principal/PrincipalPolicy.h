#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Principal {

class PrincipalPolicy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Principal", "PrincipalPolicy"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& UnauthenticatedPrincipal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& NoPrincipal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& WindowsPrincipal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
