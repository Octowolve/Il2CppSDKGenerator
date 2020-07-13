#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class DateTimeParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "DateTimeParser"));
	}

	template <typename T = int32_t> T& Year() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Month() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Day() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Hour() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Minute() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Second() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Fraction() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ZoneHour() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ZoneMinute() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Zone() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _end() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& Power10() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& Lzyyyy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& Lzyyyy_() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& Lzyyyy_MM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& Lzyyyy_MM_() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& Lzyyyy_MM_dd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& Lzyyyy_MM_ddT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& LzHH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& LzHH_() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& LzHH_mm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& LzHH_mm_() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& LzHH_mm_ss() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& Lz_() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& Lz_zz() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T Parse(Il2CppArray<uintptr_t>* text, int32_t startIndex, int32_t length) {
		return ((T (*)(DateTimeParser*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DE8FFC))(this, text, startIndex, length);
	}
	template <typename T = bool> T ParseDate(int32_t start) {
		return ((T (*)(DateTimeParser*, int32_t))(Il2CppBase() + 0x4DE9298))(this, start);
	}
	template <typename T = bool> T ParseTimeAndZoneAndWhitespace(int32_t start) {
		return ((T (*)(DateTimeParser*, int32_t))(Il2CppBase() + 0x4DE9988))(this, start);
	}
	template <typename T = bool> T ParseTime(uintptr_t start) {
		return ((T (*)(DateTimeParser*, uintptr_t))(Il2CppBase() + 0x4DE9990))(this, start);
	}
	template <typename T = bool> T ParseZone(int32_t start) {
		return ((T (*)(DateTimeParser*, int32_t))(Il2CppBase() + 0x4DE9998))(this, start);
	}
	template <typename T = bool> T Parse4Digit(int32_t start, uintptr_t* num) {
		return ((T (*)(DateTimeParser*, int32_t, uintptr_t*))(Il2CppBase() + 0x4DE99A0))(this, start, num);
	}
	template <typename T = bool> T Parse2Digit(int32_t start, uintptr_t* num) {
		return ((T (*)(DateTimeParser*, int32_t, uintptr_t*))(Il2CppBase() + 0x4DE99A8))(this, start, num);
	}
	template <typename T = bool> T ParseChar(int32_t start, char ch) {
		return ((T (*)(DateTimeParser*, int32_t, char))(Il2CppBase() + 0x4DE99B0))(this, start, ch);
	}

};

}
