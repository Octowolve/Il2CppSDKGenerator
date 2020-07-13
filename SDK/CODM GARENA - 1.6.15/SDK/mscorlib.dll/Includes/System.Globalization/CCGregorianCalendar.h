#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class CCGregorianCalendar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "CCGregorianCalendar"));
	}


	template <typename T = bool> static T is_leap_year(int32_t year) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD1418))(0, year);
	}
	template <typename T = int32_t> static T fixed_from_dmy(int32_t day, int32_t month, int32_t year) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3FD14A8))(0, day, month, year);
	}
	template <typename T = int32_t> static T year_from_fixed(int32_t date) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD1680))(0, date);
	}
	template <typename T = void> static T my_from_fixed(uintptr_t* month, uintptr_t* year, int32_t date) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*, int32_t))(Il2CppBase() + 0x3FD17E8))(0, month, year, date);
	}
	template <typename T = void> static T dmy_from_fixed(uintptr_t* day, uintptr_t* month, uintptr_t* year, int32_t date) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*, uintptr_t*, int32_t))(Il2CppBase() + 0x3FD1998))(0, day, month, year, date);
	}
	template <typename T = int32_t> static T month_from_fixed(int32_t date) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD19E8))(0, date);
	}
	template <typename T = int32_t> static T day_from_fixed(int32_t date) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD1A20))(0, date);
	}
	template <typename T = int32_t> static T GetDayOfMonth(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD1A6C))(0, time);
	}
	template <typename T = int32_t> static T GetMonth(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD1AB8))(0, time);
	}
	template <typename T = int32_t> static T GetYear(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD1B20))(0, time);
	}

};

}
