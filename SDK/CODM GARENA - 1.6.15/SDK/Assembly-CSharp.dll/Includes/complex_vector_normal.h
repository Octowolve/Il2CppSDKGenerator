#pragma once
#include <Il2Cpp/Il2Cpp.h>

class complexvectornormal
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "complex_vector_normal"));
	}

	template <typename T = Il2CppVector2> T& h() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& D() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& n() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
