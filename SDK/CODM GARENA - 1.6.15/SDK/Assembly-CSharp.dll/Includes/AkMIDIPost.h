#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMIDIPost
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMIDIPost"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x490E2A0))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMIDIPost*, uintptr_t))(Il2CppBase() + 0x490E334))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMIDIPost*))(Il2CppBase() + 0x490E400))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMIDIPost*))(Il2CppBase() + 0x490E460))(this);
	}
	template <typename T = void> T set_uOffset(uint32_t value) {
		return ((T (*)(AkMIDIPost*, uint32_t))(Il2CppBase() + 0x490E5F0))(this, value);
	}
	template <typename T = uint32_t> T get_uOffset() {
		return ((T (*)(AkMIDIPost*))(Il2CppBase() + 0x490E6A4))(this);
	}
	template <typename T = uintptr_t> T PostOnEvent(uint32_t in_eventID, uintptr_t in_gameObjectID, uint32_t in_uNumPosts) {
		return ((T (*)(AkMIDIPost*, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x490E750))(this, in_eventID, in_gameObjectID, in_uNumPosts);
	}
	template <typename T = void> T Clone(uintptr_t other) {
		return ((T (*)(AkMIDIPost*, uintptr_t))(Il2CppBase() + 0x490E880))(this, other);
	}
	template <typename T = int32_t> static T GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x490E9B0))(0);
	}

};

}
