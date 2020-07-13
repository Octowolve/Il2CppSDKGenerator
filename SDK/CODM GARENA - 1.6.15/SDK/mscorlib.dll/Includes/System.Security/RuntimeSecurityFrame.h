#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class RuntimeSecurityFrame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "RuntimeSecurityFrame"));
	}

	template <typename T = uintptr_t> T& domain() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& assert() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& deny() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& permitonly() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
