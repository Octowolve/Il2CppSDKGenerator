#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class ConditionalAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Diagnostics", "ConditionalAttribute"));
	}

	template <typename T = Il2CppString*> T& myCondition() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}