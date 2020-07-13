#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class LerpedQuaternion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "LerpedQuaternion"));
	}

	template <typename T = bool> T& slerp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppQuaternion> T& currentValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppQuaternion> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppQuaternion> T& source() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = float> T get_x() {
		return ((T (*)(LerpedQuaternion*))(Il2CppBase() + 0x4856040))(this);
	}
	template <typename T = void> T set_x(float value) {
		return ((T (*)(LerpedQuaternion*, float))(Il2CppBase() + 0x4856108))(this, value);
	}
	template <typename T = float> T get_y() {
		return ((T (*)(LerpedQuaternion*))(Il2CppBase() + 0x4856110))(this);
	}
	template <typename T = void> T set_y(float value) {
		return ((T (*)(LerpedQuaternion*, float))(Il2CppBase() + 0x4856178))(this, value);
	}
	template <typename T = float> T get_z() {
		return ((T (*)(LerpedQuaternion*))(Il2CppBase() + 0x4856180))(this);
	}
	template <typename T = void> T set_z(float value) {
		return ((T (*)(LerpedQuaternion*, float))(Il2CppBase() + 0x48561E8))(this, value);
	}
	template <typename T = float> T get_w() {
		return ((T (*)(LerpedQuaternion*))(Il2CppBase() + 0x48561F0))(this);
	}
	template <typename T = void> T set_w(float value) {
		return ((T (*)(LerpedQuaternion*, float))(Il2CppBase() + 0x4856250))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_SmoothValue() {
		return ((T (*)(LerpedQuaternion*))(Il2CppBase() + 0x4856328))(this);
	}
	template <typename T = void> T set_SmoothValue(Il2CppQuaternion value) {
		return ((T (*)(LerpedQuaternion*, Il2CppQuaternion))(Il2CppBase() + 0x485633C))(this, value);
	}

};

}
