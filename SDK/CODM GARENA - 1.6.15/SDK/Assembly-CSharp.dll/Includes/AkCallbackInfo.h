#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A2E4A4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkCallbackInfo*, uintptr_t))(Il2CppBase() + 0x4A2E538))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkCallbackInfo*))(Il2CppBase() + 0x4A2E564))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkCallbackInfo*))(Il2CppBase() + 0x4A2E5CC))(this);
	}
	template <typename T = uintptr_t> T get_pCookie() {
		return ((T (*)(AkCallbackInfo*))(Il2CppBase() + 0x4A2E754))(this);
	}
	template <typename T = uint64_t> T get_gameObjID() {
		return ((T (*)(AkCallbackInfo*))(Il2CppBase() + 0x4A2E800))(this);
	}

};

}
