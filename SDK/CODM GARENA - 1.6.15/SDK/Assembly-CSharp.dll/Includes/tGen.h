#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tGen
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tGen"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4908AD4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tGen*, uintptr_t))(Il2CppBase() + 0x490B904))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tGen*))(Il2CppBase() + 0x490B930))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tGen*))(Il2CppBase() + 0x490B998))(this);
	}
	template <typename T = void> T set_byParam1(unsigned char value) {
		return ((T (*)(tGen*, unsigned char))(Il2CppBase() + 0x490BB20))(this, value);
	}
	template <typename T = unsigned char> T get_byParam1() {
		return ((T (*)(tGen*))(Il2CppBase() + 0x490BBD4))(this);
	}
	template <typename T = void> T set_byParam2(unsigned char value) {
		return ((T (*)(tGen*, unsigned char))(Il2CppBase() + 0x490BC80))(this, value);
	}
	template <typename T = unsigned char> T get_byParam2() {
		return ((T (*)(tGen*))(Il2CppBase() + 0x490BD34))(this);
	}

};

}
