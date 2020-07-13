#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "TypeInfo"));
	}

	template <typename T = uintptr_t> T& Attributes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Elements() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
