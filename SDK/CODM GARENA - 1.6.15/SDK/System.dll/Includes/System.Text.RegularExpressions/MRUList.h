#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class MRUList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "MRUList"));
	}

	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& tail() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Use(uintptr_t o) {
		return ((T (*)(MRUList*, uintptr_t))(Il2CppBase() + 0x4AD30A8))(this, o);
	}
	template <typename T = uintptr_t> T Evict() {
		return ((T (*)(MRUList*))(Il2CppBase() + 0x4AD3238))(this);
	}

};

}
