#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSourceSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSourceSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2266D88))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSourceSettings*, uintptr_t))(Il2CppBase() + 0x22A6C04))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSourceSettings*))(Il2CppBase() + 0x22A6C30))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSourceSettings*))(Il2CppBase() + 0x22A6C98))(this);
	}
	template <typename T = void> T set_sourceID(uint32_t value) {
		return ((T (*)(AkSourceSettings*, uint32_t))(Il2CppBase() + 0x22A6E18))(this, value);
	}
	template <typename T = uint32_t> T get_sourceID() {
		return ((T (*)(AkSourceSettings*))(Il2CppBase() + 0x22A6EC4))(this);
	}
	template <typename T = void> T set_pMediaMemory(uintptr_t value) {
		return ((T (*)(AkSourceSettings*, uintptr_t))(Il2CppBase() + 0x22A6F68))(this, value);
	}
	template <typename T = uintptr_t> T get_pMediaMemory() {
		return ((T (*)(AkSourceSettings*))(Il2CppBase() + 0x22A7014))(this);
	}
	template <typename T = void> T set_uMediaSize(uint32_t value) {
		return ((T (*)(AkSourceSettings*, uint32_t))(Il2CppBase() + 0x22A70B8))(this, value);
	}
	template <typename T = uint32_t> T get_uMediaSize() {
		return ((T (*)(AkSourceSettings*))(Il2CppBase() + 0x22A7164))(this);
	}

};

}
