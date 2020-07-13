#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJNIHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJNIHelper"));
	}


	template <typename T = bool> static T get_debug() {
		return ((T (*)(void *))(Il2CppBase() + 0x468BD94))(0);
	}
	template <typename T = void> static T set_debug(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x468BE24))(0, value);
	}
	template <typename T = uintptr_t> static T GetConstructorID(uintptr_t javaClass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468BEBC))(0, javaClass);
	}
	template <typename T = uintptr_t> static T GetConstructorID_1(uintptr_t javaClass, Il2CppString* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x467F230))(0, javaClass, signature);
	}
	template <typename T = uintptr_t> static T GetMethodID(uintptr_t javaClass, Il2CppString* methodName, Il2CppString* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x468BF40))(0, javaClass, methodName, signature);
	}
	template <typename T = uintptr_t> static T GetMethodID_1(uintptr_t javaClass, Il2CppString* methodName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x468BF60))(0, javaClass, methodName);
	}
	template <typename T = uintptr_t> static T GetMethodID_2(uintptr_t javaClass, Il2CppString* methodName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x467F270))(0, javaClass, methodName, signature, isStatic);
	}
	template <typename T = uintptr_t> static T GetFieldID(uintptr_t javaClass, Il2CppString* fieldName, Il2CppString* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x468BFFC))(0, javaClass, fieldName, signature);
	}
	template <typename T = uintptr_t> static T GetFieldID_1(uintptr_t javaClass, Il2CppString* fieldName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x468C03C))(0, javaClass, fieldName);
	}
	template <typename T = uintptr_t> static T GetFieldID_2(uintptr_t javaClass, Il2CppString* fieldName, Il2CppString* signature, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x468C01C))(0, javaClass, fieldName, signature, isStatic);
	}
	template <typename T = uintptr_t> static T CreateJavaRunnable(uintptr_t jrunnable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467C328))(0, jrunnable);
	}
	template <typename T = uintptr_t> static T CreateJavaProxy(uintptr_t proxy) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467A8A4))(0, proxy);
	}
	template <typename T = void> static T INTERNAL_CALL_CreateJavaProxy(uintptr_t proxy, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x468C0D8))(0, proxy, value);
	}
	template <typename T = uintptr_t> static T ConvertToJNIArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468C178))(0, array);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateJNIArgArray(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684878))(0, args);
	}
	template <typename T = void> static T DeleteJNIArgArray(Il2CppArray<uintptr_t>* args, Il2CppArray<uintptr_t>* jniArgs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684908))(0, args, jniArgs);
	}
	template <typename T = uintptr_t> static T GetConstructorID_2(uintptr_t jclass, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468487C))(0, jclass, args);
	}
	template <typename T = uintptr_t> static T GetMethodID_3(uintptr_t jclass, Il2CppString* methodName, Il2CppArray<uintptr_t>* args, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x46849BC))(0, jclass, methodName, args, isStatic);
	}
	template <typename T = Il2CppString*> static T GetSignature(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x468C17C))(0, obj);
	}
	template <typename T = Il2CppString*> static T GetSignature_1(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x468C180))(0, args);
	}
	template <typename T = uintptr_t> static T ConvertFromJNIArray(uintptr_t array) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B46380))(0, array);
	}
	template <typename T = uintptr_t> static T GetMethodID_4(uintptr_t jclass, Il2CppString* methodName, Il2CppArray<uintptr_t>* args, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1E64F50))(0, jclass, methodName, args, isStatic);
	}
	template <typename T = uintptr_t> static T GetFieldID_3(uintptr_t jclass, Il2CppString* fieldName, bool isStatic) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1E64D68))(0, jclass, fieldName, isStatic);
	}
	template <typename T = Il2CppString*> static T GetSignature_2(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E7A8C4))(0, args);
	}

};

}
