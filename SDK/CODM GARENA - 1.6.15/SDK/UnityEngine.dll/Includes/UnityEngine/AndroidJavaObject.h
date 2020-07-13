#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJavaObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJavaObject"));
	}

	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> static T& enableDebugPrints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_jobject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_jclass() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& s_JavaLangClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppString*> T GetDebugName() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x4683FF8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x4684000))(this);
	}
	template <typename T = void> T Call(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684070))(this, methodName, args);
	}
	template <typename T = void> T CallStatic(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46841D4))(this, methodName, args);
	}
	template <typename T = uintptr_t> T Get(Il2CppString* fieldName) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x1B6E400))(this, fieldName);
	}
	template <typename T = void> T Set(Il2CppString* fieldName, uintptr_t val) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x282DBE0))(this, fieldName, val);
	}
	template <typename T = uintptr_t> T GetStatic(Il2CppString* fieldName) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x1B6E460))(this, fieldName);
	}
	template <typename T = void> T SetStatic(Il2CppString* fieldName, uintptr_t val) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x282DC10))(this, fieldName, val);
	}
	template <typename T = uintptr_t> T GetRawObject() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x467AE98))(this);
	}
	template <typename T = uintptr_t> T GetRawClass() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x467A5B8))(this);
	}
	template <typename T = uintptr_t> T Call_1(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B7BDB4))(this, methodName, args);
	}
	template <typename T = uintptr_t> T CallStatic_1(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B7BE74))(this, methodName, args);
	}
	template <typename T = void> T DebugPrint(Il2CppString* msg) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x46838A0))(this, msg);
	}
	template <typename T = void> T DebugPrint_1(Il2CppString* call, Il2CppString* methodName, Il2CppString* signature, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684358))(this, call, methodName, signature, args);
	}
	template <typename T = void> T _AndroidJavaObject(Il2CppString* className, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4683C0C))(this, className, args);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x468490C))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(AndroidJavaObject*, bool))(Il2CppBase() + 0x4684978))(this, disposing);
	}
	template <typename T = void> T _Dispose() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x4684038))(this);
	}
	template <typename T = void> T _Call(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684074))(this, methodName, args);
	}
	template <typename T = uintptr_t> T _Call_1(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B76B70))(this, methodName, args);
	}
	template <typename T = uintptr_t> T _Get(Il2CppString* fieldName) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x1B6BBC8))(this, fieldName);
	}
	template <typename T = void> T _Set(Il2CppString* fieldName, uintptr_t val) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x282C290))(this, fieldName, val);
	}
	template <typename T = void> T _CallStatic(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46841D8))(this, methodName, args);
	}
	template <typename T = uintptr_t> T _CallStatic_1(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B7AC4C))(this, methodName, args);
	}
	template <typename T = uintptr_t> T _GetStatic(Il2CppString* fieldName) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x1B6D678))(this, fieldName);
	}
	template <typename T = void> T _SetStatic(Il2CppString* fieldName, uintptr_t val) {
		return ((T (*)(AndroidJavaObject*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x282CF38))(this, fieldName, val);
	}
	template <typename T = uintptr_t> static T AndroidJavaObjectDeleteLocalRef(uintptr_t jobject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x467E930))(0, jobject);
	}
	template <typename T = uintptr_t> static T AndroidJavaClassDeleteLocalRef(uintptr_t jclass) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4684AA0))(0, jclass);
	}
	template <typename T = uintptr_t> T _GetRawObject() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x4684338))(this);
	}
	template <typename T = uintptr_t> T _GetRawClass() {
		return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x4684348))(this);
	}
	template <typename T = uintptr_t> static T FindClass(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46839A4))(0, name);
	}
	template <typename T = uintptr_t> static T get_JavaLangClass() {
		return ((T (*)(void *))(Il2CppBase() + 0x4684B74))(0);
	}

};

}
