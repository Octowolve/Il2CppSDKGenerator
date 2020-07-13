#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GlobalJavaObjectRef
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GlobalJavaObjectRef"));
	}

	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_jobject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(GlobalJavaObjectRef*))(Il2CppBase() + 0x47721A8))(this);
	}
	template <typename T = uintptr_t> static T op_Implicit(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47722D0))(0, obj);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GlobalJavaObjectRef*))(Il2CppBase() + 0x477220C))(this);
	}

};

}
