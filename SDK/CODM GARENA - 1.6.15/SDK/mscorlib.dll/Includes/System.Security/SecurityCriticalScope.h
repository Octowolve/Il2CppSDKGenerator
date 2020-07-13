#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityCriticalScope
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityCriticalScope"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Explicit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Everything() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
