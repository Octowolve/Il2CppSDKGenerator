#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimationCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimationCurve"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Cleanup() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468F258))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468F2F0))(this);
	}
	template <typename T = float> T Evaluate(float time) {
		return ((T (*)(AnimationCurve*, float))(Il2CppBase() + 0x468F354))(this, time);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_keys() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468F3F4))(this);
	}
	template <typename T = void> T set_keys(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AnimationCurve*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468F490))(this, value);
	}
	template <typename T = int32_t> T AddKey(float time, float value) {
		return ((T (*)(AnimationCurve*, float, float))(Il2CppBase() + 0x468F534))(this, time, value);
	}
	template <typename T = int32_t> T AddKey_1(uintptr_t key) {
		return ((T (*)(AnimationCurve*, uintptr_t))(Il2CppBase() + 0x468F5DC))(this, key);
	}
	template <typename T = int32_t> T AddKey_Internal(uintptr_t key) {
		return ((T (*)(AnimationCurve*, uintptr_t))(Il2CppBase() + 0x468F604))(this, key);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_AddKey_Internal(uintptr_t self, uintptr_t key) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x468F62C))(0, self, key);
	}
	template <typename T = void> T RemoveKey(int32_t index) {
		return ((T (*)(AnimationCurve*, int32_t))(Il2CppBase() + 0x468F6CC))(this, index);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(AnimationCurve*, int32_t))(Il2CppBase() + 0x468F76C))(this, index);
	}
	template <typename T = int32_t> T get_length() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468F7E4))(this);
	}
	template <typename T = void> T SetKeys(Il2CppArray<uintptr_t>* keys) {
		return ((T (*)(AnimationCurve*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468F494))(this, keys);
	}
	template <typename T = uintptr_t> T GetKey_Internal(int32_t index) {
		return ((T (*)(AnimationCurve*, int32_t))(Il2CppBase() + 0x468F7B0))(this, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetKey_Internal(uintptr_t self, int32_t index, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x468F87C))(0, self, index, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetKeys() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468F3F8))(this);
	}
	template <typename T = void> T SmoothTangents(int32_t index, float weight) {
		return ((T (*)(AnimationCurve*, int32_t, float))(Il2CppBase() + 0x468F924))(this, index, weight);
	}
	template <typename T = uintptr_t> static T Linear(float timeStart, float valueStart, float timeEnd, float valueEnd) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x468F9CC))(0, timeStart, valueStart, timeEnd, valueEnd);
	}
	template <typename T = uintptr_t> T get_preWrapMode() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468FB74))(this);
	}
	template <typename T = void> T set_preWrapMode(uintptr_t value) {
		return ((T (*)(AnimationCurve*, uintptr_t))(Il2CppBase() + 0x468FC0C))(this, value);
	}
	template <typename T = uintptr_t> T get_postWrapMode() {
		return ((T (*)(AnimationCurve*))(Il2CppBase() + 0x468FCAC))(this);
	}
	template <typename T = void> T set_postWrapMode(uintptr_t value) {
		return ((T (*)(AnimationCurve*, uintptr_t))(Il2CppBase() + 0x468FD44))(this, value);
	}
	template <typename T = void> T Init(Il2CppArray<uintptr_t>* keys) {
		return ((T (*)(AnimationCurve*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468F194))(this, keys);
	}

};

}
