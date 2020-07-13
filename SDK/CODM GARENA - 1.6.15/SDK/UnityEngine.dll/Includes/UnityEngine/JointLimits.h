#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class JointLimits
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "JointLimits"));
	}

	template <typename T = float> T& m_Min() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Max() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_Bounciness() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_BounceMinVelocity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_ContactDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minBounce() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& maxBounce() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = float> T get_min() {
		return ((T (*)(JointLimits*))(Il2CppBase() + 0x47A486C))(this);
	}
	template <typename T = float> T get_max() {
		return ((T (*)(JointLimits*))(Il2CppBase() + 0x47A487C))(this);
	}
	template <typename T = float> T get_bounciness() {
		return ((T (*)(JointLimits*))(Il2CppBase() + 0x47A488C))(this);
	}

};

}
