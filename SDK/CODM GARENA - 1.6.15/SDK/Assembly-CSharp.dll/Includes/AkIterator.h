#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkIterator"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4905520))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkIterator*, uintptr_t))(Il2CppBase() + 0x49055B4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkIterator*))(Il2CppBase() + 0x49055E0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkIterator*))(Il2CppBase() + 0x4905648))(this);
	}
	template <typename T = void> T set_pItem(uintptr_t value) {
		return ((T (*)(AkIterator*, uintptr_t))(Il2CppBase() + 0x49057D0))(this, value);
	}
	template <typename T = uintptr_t> T get_pItem() {
		return ((T (*)(AkIterator*))(Il2CppBase() + 0x4905994))(this);
	}
	template <typename T = uintptr_t> T NextIter() {
		return ((T (*)(AkIterator*))(Il2CppBase() + 0x4905AE8))(this);
	}
	template <typename T = uintptr_t> T PrevIter() {
		return ((T (*)(AkIterator*))(Il2CppBase() + 0x4905BD4))(this);
	}
	template <typename T = uintptr_t> T GetItem() {
		return ((T (*)(AkIterator*))(Il2CppBase() + 0x4905CC0))(this);
	}
	template <typename T = bool> T IsEqualTo(uintptr_t in_rOp) {
		return ((T (*)(AkIterator*, uintptr_t))(Il2CppBase() + 0x4905DAC))(this, in_rOp);
	}
	template <typename T = bool> T IsDifferentFrom(uintptr_t in_rOp) {
		return ((T (*)(AkIterator*, uintptr_t))(Il2CppBase() + 0x4905EDC))(this, in_rOp);
	}

};

}
