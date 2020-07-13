#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Linq {

class ILookup2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Linq", "ILookup`2"));
	}


	template <typename T = void*> T get_Item(uintptr_t key) {
		return ((T (*)(ILookup2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T Contains(uintptr_t key) {
		return ((T (*)(ILookup2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}

};

}
