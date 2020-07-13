#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArrayNullFiller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "ArrayNullFiller"));
	}

	template <typename T = int32_t> T& NullCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
