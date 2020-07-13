#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Globalization.Unicode {

class Contraction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Globalization.Unicode", "Contraction"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Replacement() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SortKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
