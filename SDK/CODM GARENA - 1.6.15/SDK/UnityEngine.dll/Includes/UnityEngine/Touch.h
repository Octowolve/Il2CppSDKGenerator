#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Touch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Touch"));
	}

	template <typename T = int32_t> T& m_FingerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector2> T& m_RawPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& m_PositionDelta() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TimeDelta() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_TapCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Phase() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_Pressure() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_maximumPossiblePressure() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_RadiusVariance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_AltitudeAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_AzimuthAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_fingerId() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D347E0))(this);
	}
	template <typename T = Il2CppVector2> T get_position() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D347FC))(this);
	}
	template <typename T = Il2CppVector2> T get_deltaPosition() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D34824))(this);
	}
	template <typename T = float> T get_deltaTime() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D34840))(this);
	}
	template <typename T = int32_t> T get_tapCount() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D34850))(this);
	}
	template <typename T = uintptr_t> T get_phase() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D34860))(this);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(Touch*))(Il2CppBase() + 0x4D34870))(this);
	}

};

}
