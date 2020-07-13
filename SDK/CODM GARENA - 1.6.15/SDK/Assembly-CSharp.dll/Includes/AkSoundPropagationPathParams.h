#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundPropagationPathParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundPropagationPathParams"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x227B854))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkSoundPropagationPathParams*, uintptr_t))(Il2CppBase() + 0x22A6328))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSoundPropagationPathParams*))(Il2CppBase() + 0x22A6354))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkSoundPropagationPathParams*))(Il2CppBase() + 0x22A63BC))(this);
	}
	template <typename T = void> T set_listenerPos(uintptr_t value) {
		return ((T (*)(AkSoundPropagationPathParams*, uintptr_t))(Il2CppBase() + 0x22A653C))(this, value);
	}
	template <typename T = uintptr_t> T get_listenerPos() {
		return ((T (*)(AkSoundPropagationPathParams*))(Il2CppBase() + 0x22A6664))(this);
	}
	template <typename T = void> T set_emitterPos(uintptr_t value) {
		return ((T (*)(AkSoundPropagationPathParams*, uintptr_t))(Il2CppBase() + 0x22A6788))(this, value);
	}
	template <typename T = uintptr_t> T get_emitterPos() {
		return ((T (*)(AkSoundPropagationPathParams*))(Il2CppBase() + 0x22A68B0))(this);
	}
	template <typename T = void> T set_numValidPaths(uint32_t value) {
		return ((T (*)(AkSoundPropagationPathParams*, uint32_t))(Il2CppBase() + 0x22A69D4))(this, value);
	}
	template <typename T = uint32_t> T get_numValidPaths() {
		return ((T (*)(AkSoundPropagationPathParams*))(Il2CppBase() + 0x22A6A80))(this);
	}

};

}
