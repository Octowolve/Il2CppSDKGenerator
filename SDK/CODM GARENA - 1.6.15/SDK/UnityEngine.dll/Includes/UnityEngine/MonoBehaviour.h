#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MonoBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MonoBehaviour"));
	}


	template <typename T = void> T Internal_CancelInvokeAll() {
		return ((T (*)(MonoBehaviour*))(Il2CppBase() + 0x4AB9354))(this);
	}
	template <typename T = bool> T Internal_IsInvokingAll() {
		return ((T (*)(MonoBehaviour*))(Il2CppBase() + 0x4AB93EC))(this);
	}
	template <typename T = void> T Invoke(Il2CppString* methodName, float time) {
		return ((T (*)(MonoBehaviour*, Il2CppString*, float))(Il2CppBase() + 0x4AB9484))(this, methodName, time);
	}
	template <typename T = void> T InvokeRepeating(Il2CppString* methodName, float time, float repeatRate) {
		return ((T (*)(MonoBehaviour*, Il2CppString*, float, float))(Il2CppBase() + 0x4AB952C))(this, methodName, time, repeatRate);
	}
	template <typename T = void> T CancelInvoke() {
		return ((T (*)(MonoBehaviour*))(Il2CppBase() + 0x4AB95DC))(this);
	}
	template <typename T = void> T CancelInvoke_1(Il2CppString* methodName) {
		return ((T (*)(MonoBehaviour*, Il2CppString*))(Il2CppBase() + 0x4AB95E0))(this, methodName);
	}
	template <typename T = bool> T IsInvoking(Il2CppString* methodName) {
		return ((T (*)(MonoBehaviour*, Il2CppString*))(Il2CppBase() + 0x4AB9680))(this, methodName);
	}
	template <typename T = bool> T IsInvoking_1() {
		return ((T (*)(MonoBehaviour*))(Il2CppBase() + 0x4AB9720))(this);
	}
	template <typename T = uintptr_t> T StartCoroutine(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB9724))(this, routine);
	}
	template <typename T = uintptr_t> T StartCoroutine_Auto(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB97C8))(this, routine);
	}
	template <typename T = uintptr_t> T StartCoroutine_Auto_Internal(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB9728))(this, routine);
	}
	template <typename T = uintptr_t> T StartCoroutine_1(Il2CppString* methodName, uintptr_t value) {
		return ((T (*)(MonoBehaviour*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AB97CC))(this, methodName, value);
	}
	template <typename T = uintptr_t> T StartCoroutine_2(Il2CppString* methodName) {
		return ((T (*)(MonoBehaviour*, Il2CppString*))(Il2CppBase() + 0x4AB9874))(this, methodName);
	}
	template <typename T = void> T StopCoroutine(Il2CppString* methodName) {
		return ((T (*)(MonoBehaviour*, Il2CppString*))(Il2CppBase() + 0x4AB987C))(this, methodName);
	}
	template <typename T = void> T StopCoroutine_1(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB991C))(this, routine);
	}
	template <typename T = void> T StopCoroutine_2(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB99C0))(this, routine);
	}
	template <typename T = void> T StopCoroutineViaEnumerator_Auto(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB9920))(this, routine);
	}
	template <typename T = void> T StopCoroutine_Auto(uintptr_t routine) {
		return ((T (*)(MonoBehaviour*, uintptr_t))(Il2CppBase() + 0x4AB99C4))(this, routine);
	}
	template <typename T = void> T StopAllCoroutines() {
		return ((T (*)(MonoBehaviour*))(Il2CppBase() + 0x4AB9A64))(this);
	}
	template <typename T = void> static T print(uintptr_t message) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB9AFC))(0, message);
	}
	template <typename T = bool> T get_useGUILayout() {
		return ((T (*)(MonoBehaviour*))(Il2CppBase() + 0x4AB9BA4))(this);
	}
	template <typename T = void> T set_useGUILayout(bool value) {
		return ((T (*)(MonoBehaviour*, bool))(Il2CppBase() + 0x4AB9C3C))(this, value);
	}

};

}
