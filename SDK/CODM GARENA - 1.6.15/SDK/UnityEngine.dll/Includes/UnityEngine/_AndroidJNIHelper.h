#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJNIHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "_AndroidJNIHelper"));
	}


	template <typename T = uintptr_t> static T CreateJavaProxy(int32_t delegateHandle, uintptr_t proxy) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x467A4E8))(0, delegateHandle, proxy);
	}
	template <typename T = uintptr_t> static T CreateJavaRunnable(uintptr_t jrunnable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467A734))(0, jrunnable);
	}
	template <typename T = uintptr_t> static T InvokeJavaProxyMethod(uintptr_t proxy, uintptr_t jmethodName, uintptr_t jargs) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x467A8CC))(0, proxy, jmethodName, jargs);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateJNIArgArray(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467AED0))(0, args);
	}
	template <typename T = uintptr_t> static T UnboxArray(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467C32C))(0, obj);
	}
	template <typename T = uintptr_t> static T Unbox(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467CE08))(0, obj);
	}
	template <typename T = uintptr_t> static T Box(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467D984))(0, obj);
	}
	template <typename T = void> static T DeleteJNIArgArray(Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* jniArgs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467EA04))(0, args, jniArgs);
	}
	template <typename T = uintptr_t> static T ConvertToJNIArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467B818))(0, array);
	}
	template <typename T = uintptr_t> static T ConvertFromJNIArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B4515C))(0, array);
	}
	template <typename T = uintptr_t> static T GetConstructorID(uintptr_t jclass, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467F0D0))(0, jclass, args);
	}
	template <typename T = uintptr_t> static T GetMethodID(uintptr_t jclass, Il2CppString* methodName, Il2CppArray<uintptr_t>* args, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x467F234))(0, jclass, methodName, args, isStatic);
	}
	template <typename T = uintptr_t> static T GetMethodID_1(uintptr_t jclass, Il2CppString* methodName, Il2CppArray<uintptr_t>* args, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1E64C88))(0, jclass, methodName, args, isStatic);
	}
	template <typename T = uintptr_t> static T GetFieldID(uintptr_t jclass, Il2CppString* fieldName, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1E64840))(0, jclass, fieldName, isStatic);
	}
	template <typename T = uintptr_t> static T GetConstructorID_1(uintptr_t jclass, Il2CppString* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x467F290))(0, jclass, signature);
	}
	template <typename T = uintptr_t> static T GetMethodID_2(uintptr_t jclass, Il2CppString* methodName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x467F7B8))(0, jclass, methodName, signature, isStatic);
	}
	template <typename T = uintptr_t> static T GetMethodIDFallback(uintptr_t jclass, Il2CppString* methodName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x467FC78))(0, jclass, methodName, signature, isStatic);
	}
	template <typename T = uintptr_t> static T GetFieldID_1(uintptr_t jclass, Il2CppString* fieldName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x467FE40))(0, jclass, fieldName, signature, isStatic);
	}
	template <typename T = Il2CppString*> static T GetSignature(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4680450))(0, obj);
	}
	template <typename T = Il2CppString*> static T GetSignature_1(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x467F0F4))(0, args);
	}
	template <typename T = Il2CppString*> static T GetSignature_2(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E7A58C))(0, args);
	}

};

}
