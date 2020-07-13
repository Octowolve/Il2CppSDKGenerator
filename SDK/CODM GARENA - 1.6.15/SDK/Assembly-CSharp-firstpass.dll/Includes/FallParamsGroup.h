#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FallParamsGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "FallParamsGroup"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& groups() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& fallParams() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
