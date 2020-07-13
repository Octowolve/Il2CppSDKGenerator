#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CullingGroupEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CullingGroupEvent"));
	}

	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& m_PrevState() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = unsigned char> T& m_ThisState() {
		return *(T*)((uintptr_t)this + 0x5);
	}

	template <typename T = bool> T get_isVisible() {
		return ((T (*)(CullingGroupEvent*))(Il2CppBase() + 0x4DA420C))(this);
	}

};

}
