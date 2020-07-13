#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class FrameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "FrameData"));
	}

	template <typename T = uint64_t> T& m_FrameID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = double> T& m_DeltaTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Weight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_EffectiveWeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_EffectiveSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Flags() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
