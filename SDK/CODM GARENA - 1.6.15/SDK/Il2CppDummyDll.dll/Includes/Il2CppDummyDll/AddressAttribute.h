#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Il2CppDummyDll {

class AddressAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Il2CppDummyDll.dll", "Il2CppDummyDll", "AddressAttribute"));
	}

	template <typename T = Il2CppString*> T& RVA() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& VA() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Slot() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
