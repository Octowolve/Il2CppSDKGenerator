#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HumanLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HumanLimit"));
	}

	template <typename T = Il2CppVector3> T& m_Min() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Max() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_AxisLength() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_UseDefaultValues() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
