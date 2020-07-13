#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJavaProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJavaProxy"));
	}

	template <typename T = uintptr_t> T& javaInterface() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& proxyObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& s_JavaLangSystemClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_HashCodeMethodID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T Invoke(Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AndroidJavaProxy*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4684E40))(this, methodName, args);
	}
	template <typename T = uintptr_t> T Invoke_1(Il2CppString* methodName, Il2CppArray<uintptr_t>* javaArgs) {
		return ((T (*)(AndroidJavaProxy*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4685888))(this, methodName, javaArgs);
	}
	template <typename T = Il2CppString*> T toString() {
		return ((T (*)(AndroidJavaProxy*))(Il2CppBase() + 0x46859E8))(this);
	}
	template <typename T = uintptr_t> T GetProxy() {
		return ((T (*)(AndroidJavaProxy*))(Il2CppBase() + 0x467C258))(this);
	}

};

}
