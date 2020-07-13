#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkBankCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkBankCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A2A238))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkBankCallbackInfo*, uintptr_t))(Il2CppBase() + 0x4A2A2CC))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkBankCallbackInfo*))(Il2CppBase() + 0x4A2A2F8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkBankCallbackInfo*))(Il2CppBase() + 0x4A2A360))(this);
	}
	template <typename T = uint32_t> T get_bankID() {
		return ((T (*)(AkBankCallbackInfo*))(Il2CppBase() + 0x4A2A4E8))(this);
	}
	template <typename T = uintptr_t> T get_inMemoryBankPtr() {
		return ((T (*)(AkBankCallbackInfo*))(Il2CppBase() + 0x4A2A594))(this);
	}
	template <typename T = uintptr_t> T get_loadResult() {
		return ((T (*)(AkBankCallbackInfo*))(Il2CppBase() + 0x4A2A640))(this);
	}
	template <typename T = int32_t> T get_memPoolId() {
		return ((T (*)(AkBankCallbackInfo*))(Il2CppBase() + 0x4A2A6EC))(this);
	}

};

}
