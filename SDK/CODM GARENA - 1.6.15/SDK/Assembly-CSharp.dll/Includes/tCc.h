#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tCc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tCc"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4908DEC))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tCc*, uintptr_t))(Il2CppBase() + 0x490AF2C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tCc*))(Il2CppBase() + 0x490AF58))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tCc*))(Il2CppBase() + 0x490AFC0))(this);
	}
	template <typename T = void> T set_byCc(unsigned char value) {
		return ((T (*)(tCc*, unsigned char))(Il2CppBase() + 0x490B148))(this, value);
	}
	template <typename T = unsigned char> T get_byCc() {
		return ((T (*)(tCc*))(Il2CppBase() + 0x490B1FC))(this);
	}
	template <typename T = void> T set_byValue(unsigned char value) {
		return ((T (*)(tCc*, unsigned char))(Il2CppBase() + 0x490B2A8))(this, value);
	}
	template <typename T = unsigned char> T get_byValue() {
		return ((T (*)(tCc*))(Il2CppBase() + 0x490B35C))(this);
	}

};

}
