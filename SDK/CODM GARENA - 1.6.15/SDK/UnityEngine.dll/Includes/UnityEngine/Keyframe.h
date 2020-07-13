#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Keyframe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Keyframe"));
	}

	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Value() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_InTangent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_OutTangent() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = float> T get_time() {
		return ((T (*)(Keyframe*))(Il2CppBase() + 0x47A4AE0))(this);
	}
	template <typename T = void> T set_time(float value) {
		return ((T (*)(Keyframe*, float))(Il2CppBase() + 0x47A4AF0))(this, value);
	}
	template <typename T = float> T get_value() {
		return ((T (*)(Keyframe*))(Il2CppBase() + 0x47A4B00))(this);
	}
	template <typename T = void> T set_value(float value) {
		return ((T (*)(Keyframe*, float))(Il2CppBase() + 0x47A4B10))(this, value);
	}
	template <typename T = float> T get_inTangent() {
		return ((T (*)(Keyframe*))(Il2CppBase() + 0x47A4B20))(this);
	}
	template <typename T = void> T set_inTangent(float value) {
		return ((T (*)(Keyframe*, float))(Il2CppBase() + 0x47A4B30))(this, value);
	}
	template <typename T = float> T get_outTangent() {
		return ((T (*)(Keyframe*))(Il2CppBase() + 0x47A4B40))(this);
	}
	template <typename T = void> T set_outTangent(float value) {
		return ((T (*)(Keyframe*, float))(Il2CppBase() + 0x47A4B50))(this, value);
	}
	template <typename T = int32_t> T get_tangentMode() {
		return ((T (*)(Keyframe*))(Il2CppBase() + 0x47A4B58))(this);
	}
	template <typename T = void> T set_tangentMode(int32_t value) {
		return ((T (*)(Keyframe*, int32_t))(Il2CppBase() + 0x47A4B64))(this, value);
	}

};

}
