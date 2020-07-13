#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Il2CppDummyDll {

class AttributeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Il2CppDummyDll.dll", "Il2CppDummyDll", "AttributeAttribute"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& RVA() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
