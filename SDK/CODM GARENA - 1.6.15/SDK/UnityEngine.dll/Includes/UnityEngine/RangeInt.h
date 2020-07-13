#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RangeInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RangeInt"));
	}

	template <typename T = int32_t> T& start() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = int32_t> T get_end() {
		return ((T (*)(RangeInt*))(Il2CppBase() + 0x4ACAAE4))(this);
	}

};

}
