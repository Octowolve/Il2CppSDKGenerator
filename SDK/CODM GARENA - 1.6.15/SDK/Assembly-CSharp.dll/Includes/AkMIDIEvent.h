#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMIDIEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMIDIEvent"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4908594))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x4908628))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x4908654))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x49086BC))(this);
	}
	template <typename T = void> T set_byChan(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x4908844))(this, value);
	}
	template <typename T = unsigned char> T get_byChan() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x49088F8))(this);
	}
	template <typename T = void> T set_Gen(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x49089A4))(this, value);
	}
	template <typename T = uintptr_t> T get_Gen() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x4908B68))(this);
	}
	template <typename T = void> T set_Cc(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x4908CBC))(this, value);
	}
	template <typename T = uintptr_t> T get_Cc() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x4908E80))(this);
	}
	template <typename T = void> T set_NoteOnOff(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x4908FD4))(this, value);
	}
	template <typename T = uintptr_t> T get_NoteOnOff() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x4909198))(this);
	}
	template <typename T = void> T set_PitchBend(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x49092EC))(this, value);
	}
	template <typename T = uintptr_t> T get_PitchBend() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x49094B0))(this);
	}
	template <typename T = void> T set_NoteAftertouch(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x4909604))(this, value);
	}
	template <typename T = uintptr_t> T get_NoteAftertouch() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x49097C8))(this);
	}
	template <typename T = void> T set_ChanAftertouch(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x490991C))(this, value);
	}
	template <typename T = uintptr_t> T get_ChanAftertouch() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x4909AE0))(this);
	}
	template <typename T = void> T set_ProgramChange(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x4909C34))(this, value);
	}
	template <typename T = uintptr_t> T get_ProgramChange() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x4909DF8))(this);
	}
	template <typename T = void> T set_byType(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x4909F4C))(this, value);
	}
	template <typename T = uintptr_t> T get_byType() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A000))(this);
	}
	template <typename T = void> T set_byOnOffNote(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490A0AC))(this, value);
	}
	template <typename T = unsigned char> T get_byOnOffNote() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A160))(this);
	}
	template <typename T = void> T set_byVelocity(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490A20C))(this, value);
	}
	template <typename T = unsigned char> T get_byVelocity() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A2C0))(this);
	}
	template <typename T = void> T set_byCc(uintptr_t value) {
		return ((T (*)(AkMIDIEvent*, uintptr_t))(Il2CppBase() + 0x490A36C))(this, value);
	}
	template <typename T = uintptr_t> T get_byCc() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A420))(this);
	}
	template <typename T = void> T set_byCcValue(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490A4CC))(this, value);
	}
	template <typename T = unsigned char> T get_byCcValue() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A580))(this);
	}
	template <typename T = void> T set_byValueLsb(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490A62C))(this, value);
	}
	template <typename T = unsigned char> T get_byValueLsb() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A6E0))(this);
	}
	template <typename T = void> T set_byValueMsb(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490A78C))(this, value);
	}
	template <typename T = unsigned char> T get_byValueMsb() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A840))(this);
	}
	template <typename T = void> T set_byAftertouchNote(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490A8EC))(this, value);
	}
	template <typename T = unsigned char> T get_byAftertouchNote() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490A9A0))(this);
	}
	template <typename T = void> T set_byNoteAftertouchValue(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490AA4C))(this, value);
	}
	template <typename T = unsigned char> T get_byNoteAftertouchValue() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490AB00))(this);
	}
	template <typename T = void> T set_byChanAftertouchValue(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490ABAC))(this, value);
	}
	template <typename T = unsigned char> T get_byChanAftertouchValue() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490AC60))(this);
	}
	template <typename T = void> T set_byProgramNum(unsigned char value) {
		return ((T (*)(AkMIDIEvent*, unsigned char))(Il2CppBase() + 0x490AD0C))(this, value);
	}
	template <typename T = unsigned char> T get_byProgramNum() {
		return ((T (*)(AkMIDIEvent*))(Il2CppBase() + 0x490ADC0))(this);
	}

};

}
