#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RangeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RangeAttribute"));
	}

	template <typename T = float> T& min() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& max() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
