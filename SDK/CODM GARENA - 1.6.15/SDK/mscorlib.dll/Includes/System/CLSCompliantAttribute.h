#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class CLSCompliantAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "CLSCompliantAttribute"));
	}

	template <typename T = bool> T& is_compliant() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
