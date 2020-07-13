#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CastHelper1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CastHelper`1"));
	}

	template <typename T = uintptr_t> T& t() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& onePointerFurtherThanT() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
