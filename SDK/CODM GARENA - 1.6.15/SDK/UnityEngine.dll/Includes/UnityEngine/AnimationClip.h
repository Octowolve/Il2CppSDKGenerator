#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimationClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimationClip"));
	}


	template <typename T = void> static T Internal_CreateAnimationClip(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468ECE8))(0, self);
	}
	template <typename T = float> T get_length() {
		return ((T (*)(AnimationClip*))(Il2CppBase() + 0x468ED80))(this);
	}
	template <typename T = void> T SetCurve(Il2CppString* relativePath, uintptr_t type, Il2CppString* propertyName, uintptr_t curve) {
		return ((T (*)(AnimationClip*, Il2CppString*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x468EE18))(this, relativePath, type, propertyName, curve);
	}
	template <typename T = void> T AddEvent(uintptr_t evt) {
		return ((T (*)(AnimationClip*, uintptr_t))(Il2CppBase() + 0x468EEC8))(this, evt);
	}
	template <typename T = void> T AddEventInternal(uintptr_t evt) {
		return ((T (*)(AnimationClip*, uintptr_t))(Il2CppBase() + 0x468EF90))(this, evt);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_events() {
		return ((T (*)(AnimationClip*))(Il2CppBase() + 0x468F030))(this);
	}
	template <typename T = uintptr_t> T GetEventsInternal() {
		return ((T (*)(AnimationClip*))(Il2CppBase() + 0x468F0B8))(this);
	}

};

}
