#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tChanAftertouch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tChanAftertouch"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4909A4C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tChanAftertouch*, uintptr_t))(Il2CppBase() + 0x490B4C8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tChanAftertouch*))(Il2CppBase() + 0x490B4F4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tChanAftertouch*))(Il2CppBase() + 0x490B55C))(this);
	}
	template <typename T = void> T set_byValue(unsigned char value) {
		return ((T (*)(tChanAftertouch*, unsigned char))(Il2CppBase() + 0x490B6E4))(this, value);
	}
	template <typename T = unsigned char> T get_byValue() {
		return ((T (*)(tChanAftertouch*))(Il2CppBase() + 0x490B798))(this);
	}

};

}
