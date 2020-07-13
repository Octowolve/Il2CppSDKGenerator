#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI.CoroutineTween {

class ColorTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI.CoroutineTween", "ColorTween"));
	}

	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_StartColor() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& m_TargetColor() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_TweenMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IgnoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T get_startColor() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0EC84))(this);
	}
	template <typename T = void> T set_startColor(uintptr_t value) {
		return ((T (*)(ColorTween*, uintptr_t))(Il2CppBase() + 0x3D0EC94))(this, value);
	}
	template <typename T = uintptr_t> T get_targetColor() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0ECAC))(this);
	}
	template <typename T = void> T set_targetColor(uintptr_t value) {
		return ((T (*)(ColorTween*, uintptr_t))(Il2CppBase() + 0x3D0ECBC))(this, value);
	}
	template <typename T = uintptr_t> T get_tweenMode() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0ECD4))(this);
	}
	template <typename T = void> T set_tweenMode(uintptr_t value) {
		return ((T (*)(ColorTween*, uintptr_t))(Il2CppBase() + 0x3D0ECDC))(this, value);
	}
	template <typename T = float> T get_duration() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0ECEC))(this);
	}
	template <typename T = void> T set_duration(float value) {
		return ((T (*)(ColorTween*, float))(Il2CppBase() + 0x3D0ECF4))(this, value);
	}
	template <typename T = bool> T get_ignoreTimeScale() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0ED04))(this);
	}
	template <typename T = void> T set_ignoreTimeScale(bool value) {
		return ((T (*)(ColorTween*, bool))(Il2CppBase() + 0x3D0ED0C))(this, value);
	}
	template <typename T = void> T TweenValue(float floatPercentage) {
		return ((T (*)(ColorTween*, float))(Il2CppBase() + 0x3D0EE48))(this, floatPercentage);
	}
	template <typename T = void> T AddOnChangedCallback(void* callback) {
		return ((T (*)(ColorTween*, void*))(Il2CppBase() + 0x3D0EFAC))(this, callback);
	}
	template <typename T = bool> T GetIgnoreTimescale() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0EFB4))(this);
	}
	template <typename T = float> T GetDuration() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0EFBC))(this);
	}
	template <typename T = bool> T ValidTarget() {
		return ((T (*)(ColorTween*))(Il2CppBase() + 0x3D0EFC4))(this);
	}

};

}
