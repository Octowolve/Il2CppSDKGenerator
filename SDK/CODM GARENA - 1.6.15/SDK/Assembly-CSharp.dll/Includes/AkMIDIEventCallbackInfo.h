#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMIDIEventCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMIDIEventCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x490D468))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMIDIEventCallbackInfo*, uintptr_t))(Il2CppBase() + 0x490D4FC))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490D5B8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490D628))(this);
	}
	template <typename T = unsigned char> T get_byChan() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490D7B8))(this);
	}
	template <typename T = unsigned char> T get_byParam1() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490D864))(this);
	}
	template <typename T = unsigned char> T get_byParam2() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490D910))(this);
	}
	template <typename T = uintptr_t> T get_byType() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490D9BC))(this);
	}
	template <typename T = unsigned char> T get_byOnOffNote() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DA68))(this);
	}
	template <typename T = unsigned char> T get_byVelocity() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DB14))(this);
	}
	template <typename T = uintptr_t> T get_byCc() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DBC0))(this);
	}
	template <typename T = unsigned char> T get_byCcValue() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DC6C))(this);
	}
	template <typename T = unsigned char> T get_byValueLsb() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DD18))(this);
	}
	template <typename T = unsigned char> T get_byValueMsb() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DDC4))(this);
	}
	template <typename T = unsigned char> T get_byAftertouchNote() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DE70))(this);
	}
	template <typename T = unsigned char> T get_byNoteAftertouchValue() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DF1C))(this);
	}
	template <typename T = unsigned char> T get_byChanAftertouchValue() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490DFC8))(this);
	}
	template <typename T = unsigned char> T get_byProgramNum() {
		return ((T (*)(AkMIDIEventCallbackInfo*))(Il2CppBase() + 0x490E074))(this);
	}

};

}
