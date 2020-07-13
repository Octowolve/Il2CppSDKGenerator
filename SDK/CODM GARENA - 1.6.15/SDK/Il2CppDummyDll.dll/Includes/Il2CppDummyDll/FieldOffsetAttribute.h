#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Il2CppDummyDll {

class FieldOffsetAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Il2CppDummyDll.dll", "Il2CppDummyDll", "FieldOffsetAttribute"));
	}

	template <typename T = Il2CppString*> T& Offset() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
