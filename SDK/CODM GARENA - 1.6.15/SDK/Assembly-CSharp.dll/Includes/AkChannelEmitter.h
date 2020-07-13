#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkChannelEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkChannelEmitter"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48F7EE4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkChannelEmitter*, uintptr_t))(Il2CppBase() + 0x48F7F78))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkChannelEmitter*))(Il2CppBase() + 0x48F7FA4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkChannelEmitter*))(Il2CppBase() + 0x48F800C))(this);
	}
	template <typename T = void> T set_position(uintptr_t value) {
		return ((T (*)(AkChannelEmitter*, uintptr_t))(Il2CppBase() + 0x48F8194))(this, value);
	}
	template <typename T = uintptr_t> T get_position() {
		return ((T (*)(AkChannelEmitter*))(Il2CppBase() + 0x48F825C))(this);
	}
	template <typename T = void> T set_uInputChannels(uint32_t value) {
		return ((T (*)(AkChannelEmitter*, uint32_t))(Il2CppBase() + 0x48F8384))(this, value);
	}
	template <typename T = uint32_t> T get_uInputChannels() {
		return ((T (*)(AkChannelEmitter*))(Il2CppBase() + 0x48F8438))(this);
	}

};

}
