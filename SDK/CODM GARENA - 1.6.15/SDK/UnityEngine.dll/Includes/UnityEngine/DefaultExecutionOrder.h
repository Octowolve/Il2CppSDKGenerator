#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class DefaultExecutionOrder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "DefaultExecutionOrder"));
	}

	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_order() {
		return ((T (*)(DefaultExecutionOrder*))(Il2CppBase() + 0x4DA61D4))(this);
	}
	template <typename T = void> T set_order(int32_t value) {
		return ((T (*)(DefaultExecutionOrder*, int32_t))(Il2CppBase() + 0x4DA61CC))(this, value);
	}

};

}
