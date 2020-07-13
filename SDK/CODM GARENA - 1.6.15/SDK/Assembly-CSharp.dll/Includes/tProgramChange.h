#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tProgramChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tProgramChange"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4909D64))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tProgramChange*, uintptr_t))(Il2CppBase() + 0x490CF74))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tProgramChange*))(Il2CppBase() + 0x490CFA0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tProgramChange*))(Il2CppBase() + 0x490D008))(this);
	}
	template <typename T = void> T set_byProgramNum(unsigned char value) {
		return ((T (*)(tProgramChange*, unsigned char))(Il2CppBase() + 0x490D190))(this, value);
	}
	template <typename T = unsigned char> T get_byProgramNum() {
		return ((T (*)(tProgramChange*))(Il2CppBase() + 0x490D244))(this);
	}

};

}
