#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI.CoroutineTween {

class FloatTween
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI.CoroutineTween", "FloatTween"));
	}

	template <typename T = uintptr_t> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_StartValue() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_TargetValue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IgnoreTimeScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T get_startValue() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F038))(this);
	}
	template <typename T = void> T set_startValue(float value) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x3D0F040))(this, value);
	}
	template <typename T = float> T get_targetValue() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F048))(this);
	}
	template <typename T = void> T set_targetValue(float value) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x3D0F050))(this, value);
	}
	template <typename T = float> T get_duration() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F060))(this);
	}
	template <typename T = void> T set_duration(float value) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x3D0F068))(this, value);
	}
	template <typename T = bool> T get_ignoreTimeScale() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F078))(this);
	}
	template <typename T = void> T set_ignoreTimeScale(bool value) {
		return ((T (*)(FloatTween*, bool))(Il2CppBase() + 0x3D0F080))(this, value);
	}
	template <typename T = void> T TweenValue(float floatPercentage) {
		return ((T (*)(FloatTween*, float))(Il2CppBase() + 0x3D0F1BC))(this, floatPercentage);
	}
	template <typename T = void> T AddOnChangedCallback(void* callback) {
		return ((T (*)(FloatTween*, void*))(Il2CppBase() + 0x3D0F320))(this, callback);
	}
	template <typename T = bool> T GetIgnoreTimescale() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F328))(this);
	}
	template <typename T = float> T GetDuration() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F330))(this);
	}
	template <typename T = bool> T ValidTarget() {
		return ((T (*)(FloatTween*))(Il2CppBase() + 0x3D0F338))(this);
	}

};

}
