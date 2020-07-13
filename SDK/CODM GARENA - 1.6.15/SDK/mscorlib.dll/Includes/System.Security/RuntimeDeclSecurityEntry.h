#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class RuntimeDeclSecurityEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "RuntimeDeclSecurityEntry"));
	}

	template <typename T = uintptr_t> T& blob() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
