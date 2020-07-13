#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tNoteAftertouch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tNoteAftertouch"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4909734))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tNoteAftertouch*, uintptr_t))(Il2CppBase() + 0x490BEA0))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tNoteAftertouch*))(Il2CppBase() + 0x490BECC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tNoteAftertouch*))(Il2CppBase() + 0x490BF34))(this);
	}
	template <typename T = void> T set_byNote(unsigned char value) {
		return ((T (*)(tNoteAftertouch*, unsigned char))(Il2CppBase() + 0x490C0BC))(this, value);
	}
	template <typename T = unsigned char> T get_byNote() {
		return ((T (*)(tNoteAftertouch*))(Il2CppBase() + 0x490C170))(this);
	}
	template <typename T = void> T set_byValue(unsigned char value) {
		return ((T (*)(tNoteAftertouch*, unsigned char))(Il2CppBase() + 0x490C21C))(this, value);
	}
	template <typename T = unsigned char> T get_byValue() {
		return ((T (*)(tNoteAftertouch*))(Il2CppBase() + 0x490C2D0))(this);
	}

};

}
