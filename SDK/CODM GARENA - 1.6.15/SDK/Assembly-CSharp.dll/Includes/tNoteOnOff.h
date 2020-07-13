#pragma once
#include <Il2Cpp/Il2Cpp.h>

class tNoteOnOff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "tNoteOnOff"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4909104))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(tNoteOnOff*, uintptr_t))(Il2CppBase() + 0x490C43C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(tNoteOnOff*))(Il2CppBase() + 0x490C468))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(tNoteOnOff*))(Il2CppBase() + 0x490C4D0))(this);
	}
	template <typename T = void> T set_byNote(unsigned char value) {
		return ((T (*)(tNoteOnOff*, unsigned char))(Il2CppBase() + 0x490C658))(this, value);
	}
	template <typename T = unsigned char> T get_byNote() {
		return ((T (*)(tNoteOnOff*))(Il2CppBase() + 0x490C70C))(this);
	}
	template <typename T = void> T set_byVelocity(unsigned char value) {
		return ((T (*)(tNoteOnOff*, unsigned char))(Il2CppBase() + 0x490C7B8))(this, value);
	}
	template <typename T = unsigned char> T get_byVelocity() {
		return ((T (*)(tNoteOnOff*))(Il2CppBase() + 0x490C86C))(this);
	}

};

}
