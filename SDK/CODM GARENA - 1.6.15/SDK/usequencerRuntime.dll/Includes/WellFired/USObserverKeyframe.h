#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class USObserverKeyframe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "USObserverKeyframe"));
	}

	template <typename T = uintptr_t> T& observer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& prevActiveState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cachedListener() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& transition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& transitionType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& transitionDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& camera() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& cameraPath() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& fireTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& additionalSourceCameras() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& additionalDestinationCameras() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& Fired() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_Fired() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860BE4))(this);
	}
	template <typename T = void> T set_Fired(bool value) {
		return ((T (*)(USObserverKeyframe*, bool))(Il2CppBase() + 0x4860BEC))(this, value);
	}
	template <typename T = void> T set_FireTime(float value) {
		return ((T (*)(USObserverKeyframe*, float))(Il2CppBase() + 0x4860BF4))(this, value);
	}
	template <typename T = float> T get_FireTime() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860D4C))(this);
	}
	template <typename T = float> T get_TransitionDuration() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860D54))(this);
	}
	template <typename T = void> T set_TransitionDuration(float value) {
		return ((T (*)(USObserverKeyframe*, float))(Il2CppBase() + 0x4860D78))(this, value);
	}
	template <typename T = uintptr_t> T get_TransitionType() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860D80))(this);
	}
	template <typename T = void> T set_TransitionType(uintptr_t value) {
		return ((T (*)(USObserverKeyframe*, uintptr_t))(Il2CppBase() + 0x4860D88))(this, value);
	}
	template <typename T = uintptr_t> T get_ActiveTransition() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860D90))(this);
	}
	template <typename T = void> T set_ActiveTransition(uintptr_t value) {
		return ((T (*)(USObserverKeyframe*, uintptr_t))(Il2CppBase() + 0x4860D98))(this, value);
	}
	template <typename T = void> T set_KeyframeCamera(uintptr_t value) {
		return ((T (*)(USObserverKeyframe*, uintptr_t))(Il2CppBase() + 0x4860DA0))(this, value);
	}
	template <typename T = uintptr_t> T get_KeyframeCamera() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860DA8))(this);
	}
	template <typename T = void> T set_AudioListener(uintptr_t value) {
		return ((T (*)(USObserverKeyframe*, uintptr_t))(Il2CppBase() + 0x4860DB0))(this, value);
	}
	template <typename T = uintptr_t> T get_AudioListener() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4860DB4))(this);
	}
	template <typename T = void> T Fire(uintptr_t previousCamera) {
		return ((T (*)(USObserverKeyframe*, uintptr_t))(Il2CppBase() + 0x4860EB0))(this, previousCamera);
	}
	template <typename T = void> T UnFire() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4861140))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4861230))(this);
	}
	template <typename T = void> T Revert() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4861260))(this);
	}
	template <typename T = void> T ProcessFromOnGUI() {
		return ((T (*)(USObserverKeyframe*))(Il2CppBase() + 0x4861450))(this);
	}
	template <typename T = void> T Process(float time) {
		return ((T (*)(USObserverKeyframe*, float))(Il2CppBase() + 0x4861464))(this, time);
	}

};

}
