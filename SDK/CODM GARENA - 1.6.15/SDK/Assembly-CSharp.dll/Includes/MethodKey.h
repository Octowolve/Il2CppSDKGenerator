#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MethodKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MethodKey"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsStatic() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
