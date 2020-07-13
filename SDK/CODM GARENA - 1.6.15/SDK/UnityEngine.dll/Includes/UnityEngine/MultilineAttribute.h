#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MultilineAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MultilineAttribute"));
	}

	template <typename T = int32_t> T& lines() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
