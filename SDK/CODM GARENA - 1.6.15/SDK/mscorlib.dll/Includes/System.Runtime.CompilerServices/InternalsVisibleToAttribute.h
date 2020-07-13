#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.CompilerServices {

class InternalsVisibleToAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.CompilerServices", "InternalsVisibleToAttribute"));
	}

	template <typename T = Il2CppString*> T& assemblyName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& all_visible() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
