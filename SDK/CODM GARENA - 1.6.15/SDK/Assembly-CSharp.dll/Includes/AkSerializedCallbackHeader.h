#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSerializedCallbackHeader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSerializedCallbackHeader"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2254EE0))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSerializedCallbackHeader*, uintptr_t))(Il2CppBase() + 0x2254F74))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSerializedCallbackHeader*))(Il2CppBase() + 0x2254FA0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSerializedCallbackHeader*))(Il2CppBase() + 0x2255008))(this);
	}
	template <typename T = uintptr_t> T get_pPackage() {
		return ((T (*)(AkSerializedCallbackHeader*))(Il2CppBase() + 0x2255268))(this);
	}
	template <typename T = uintptr_t> T get_pNext() {
		return ((T (*)(AkSerializedCallbackHeader*))(Il2CppBase() + 0x22553EC))(this);
	}
	template <typename T = uintptr_t> T get_eType() {
		return ((T (*)(AkSerializedCallbackHeader*))(Il2CppBase() + 0x22555F0))(this);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(AkSerializedCallbackHeader*))(Il2CppBase() + 0x2255774))(this);
	}

};

}
