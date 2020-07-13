#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinMaxGradient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "MinMaxGradient"));
	}

	template <typename T = uintptr_t> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_GradientMin() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& m_GradientMax() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_ColorMin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_ColorMax() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> static T op_Implicit(uintptr_t color) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC1658))(0, color);
	}

};

}
