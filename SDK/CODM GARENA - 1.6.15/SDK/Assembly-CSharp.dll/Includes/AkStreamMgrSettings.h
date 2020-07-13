#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkStreamMgrSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkStreamMgrSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22783AC))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkStreamMgrSettings*, uintptr_t))(Il2CppBase() + 0x22A9468))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkStreamMgrSettings*))(Il2CppBase() + 0x22A9494))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkStreamMgrSettings*))(Il2CppBase() + 0x22A94FC))(this);
	}
	template <typename T = void> T set_uMemorySize(uint32_t value) {
		return ((T (*)(AkStreamMgrSettings*, uint32_t))(Il2CppBase() + 0x227F07C))(this, value);
	}
	template <typename T = uint32_t> T get_uMemorySize() {
		return ((T (*)(AkStreamMgrSettings*))(Il2CppBase() + 0x22A967C))(this);
	}

};

}
