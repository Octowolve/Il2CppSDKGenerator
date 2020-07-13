#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WheelHit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WheelHit"));
	}

	template <typename T = Il2CppVector3> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_ForwardDir() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_SidewaysDir() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Force() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_ForwardSlip() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_SidewaysSlip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = Il2CppVector3> T get_point() {
		return ((T (*)(WheelHit*))(Il2CppBase() + 0x4D41498))(this);
	}
	template <typename T = Il2CppVector3> T get_normal() {
		return ((T (*)(WheelHit*))(Il2CppBase() + 0x4D414C0))(this);
	}
	template <typename T = Il2CppVector3> T get_forwardDir() {
		return ((T (*)(WheelHit*))(Il2CppBase() + 0x4D414E8))(this);
	}
	template <typename T = float> T get_forwardSlip() {
		return ((T (*)(WheelHit*))(Il2CppBase() + 0x4D41504))(this);
	}

};

}
