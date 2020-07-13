#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class DateTimeUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "DateTimeUtils"));
	}


	template <typename T = int32_t> static T CountRepeat(Il2CppString* fmt, int32_t p, char c) {
		return ((T (*)(void *, Il2CppString*, int32_t, char))(Il2CppBase() + 0x3664B70))(0, fmt, p, c);
	}
	template <typename T = void> static T ZeroPad(uintptr_t output, int32_t digits, int32_t len) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3667018))(0, output, digits, len);
	}
	template <typename T = int32_t> static T ParseQuotedString(Il2CppString* fmt, int32_t pos, uintptr_t output) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x36670EC))(0, fmt, pos, output);
	}
	template <typename T = Il2CppString*> static T GetStandardPattern(char format, uintptr_t dfi, uintptr_t* useutc, uintptr_t* use_invariant) {
		return ((T (*)(void *, char, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x365EEE4))(0, format, dfi, useutc, use_invariant);
	}
	template <typename T = Il2CppString*> static T GetStandardPattern_1(char format, uintptr_t dfi, uintptr_t* useutc, uintptr_t* use_invariant, bool date_time_offset) {
		return ((T (*)(void *, char, uintptr_t, uintptr_t*, uintptr_t*, bool))(Il2CppBase() + 0x3664714))(0, format, dfi, useutc, use_invariant, date_time_offset);
	}
	template <typename T = Il2CppString*> static T ToString(uintptr_t dt, Il2CppString* format, uintptr_t dfi) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3659250))(0, dt, format, dfi);
	}
	template <typename T = Il2CppString*> static T ToString_1(uintptr_t dt, void* utc_offset, Il2CppString* format, uintptr_t dfi) {
		return ((T (*)(void *, uintptr_t, void*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3665824))(0, dt, utc_offset, format, dfi);
	}

};

}
