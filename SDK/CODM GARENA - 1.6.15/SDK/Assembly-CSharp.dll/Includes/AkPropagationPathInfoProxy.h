#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPropagationPathInfoProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPropagationPathInfoProxy"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x491B148))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPropagationPathInfoProxy*, uintptr_t))(Il2CppBase() + 0x491B1DC))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPropagationPathInfoProxy*))(Il2CppBase() + 0x491B2A8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPropagationPathInfoProxy*))(Il2CppBase() + 0x491B308))(this);
	}
	template <typename T = int32_t> static T GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x491B498))(0);
	}
	template <typename T = uintptr_t> T GetNodePoint(uint32_t idx) {
		return ((T (*)(AkPropagationPathInfoProxy*, uint32_t))(Il2CppBase() + 0x491B538))(this, idx);
	}

};

}
