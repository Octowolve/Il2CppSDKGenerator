#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SliderState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SliderState"));
	}

	template <typename T = float> T& dragStartPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& dragStartValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isDragging() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
