#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMemSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMemSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4907F3C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMemSettings*, uintptr_t))(Il2CppBase() + 0x4907FD0))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMemSettings*))(Il2CppBase() + 0x4907FFC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMemSettings*))(Il2CppBase() + 0x4908064))(this);
	}
	template <typename T = void> T set_uMaxNumPools(uint32_t value) {
		return ((T (*)(AkMemSettings*, uint32_t))(Il2CppBase() + 0x49081EC))(this, value);
	}
	template <typename T = uint32_t> T get_uMaxNumPools() {
		return ((T (*)(AkMemSettings*))(Il2CppBase() + 0x49082A0))(this);
	}
	template <typename T = void> T set_uDebugFlags(uint32_t value) {
		return ((T (*)(AkMemSettings*, uint32_t))(Il2CppBase() + 0x490834C))(this, value);
	}
	template <typename T = uint32_t> T get_uDebugFlags() {
		return ((T (*)(AkMemSettings*))(Il2CppBase() + 0x4908400))(this);
	}

};

}
