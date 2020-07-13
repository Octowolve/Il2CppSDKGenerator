#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class DateTimeFormatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "DateTimeFormatInfo"));
	}

	template <typename T = Il2CppString*> static T& _RoundtripPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MSG_READONLY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MSG_ARRAYSIZE_MONTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& MSG_ARRAYSIZE_DAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& INVARIANT_ABBREVIATED_DAY_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& INVARIANT_DAY_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& INVARIANT_ABBREVIATED_MONTH_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& INVARIANT_MONTH_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& INVARIANT_SHORT_DAY_NAMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& theInvariantDateTimeFormatInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> T& m_isReadOnly() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& amDesignator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& pmDesignator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& dateSeparator() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& timeSeparator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& shortDatePattern() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& longDatePattern() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& shortTimePattern() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& longTimePattern() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& monthDayPattern() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& yearMonthPattern() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& fullDateTimePattern() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _RFC1123Pattern() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _SortableDateTimePattern() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _UniversalSortableDateTimePattern() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& firstDayOfWeek() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& calendar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& calendarWeekRule() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& abbreviatedDayNames() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dayNames() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& monthNames() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& abbreviatedMonthNames() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allShortDatePatterns() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allLongDatePatterns() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allShortTimePatterns() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& allLongTimePatterns() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& monthDayPatterns() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& yearMonthPatterns() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& shortDayNames() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& nDataItem() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_useUserOverride() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_isDefaultCalendar() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = int32_t> T& CultureID() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& bUseCalendarInfo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& generalShortTimePattern() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& generalLongTimePattern() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_eraNames() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_abbrevEraNames() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_abbrevEnglishEraNames() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_dateWords() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& optionalCalendars() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_superShortDayNames() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& genitiveMonthNames() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_genitiveAbbreviatedMonthNames() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& leapYearMonthNames() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& formatFlags() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& m_name() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& all_date_time_patterns() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> static T GetInstance(uintptr_t provider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD8708))(0, provider);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD8A60))(this);
	}
	template <typename T = uintptr_t> static T ReadOnly(uintptr_t dtfi) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD8A68))(0, dtfi);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD5150))(this);
	}
	template <typename T = uintptr_t> T GetFormat(uintptr_t formatType) {
		return ((T (*)(DateTimeFormatInfo*, uintptr_t))(Il2CppBase() + 0x3FD8BF4))(this, formatType);
	}
	template <typename T = Il2CppString*> T GetAbbreviatedMonthName(int32_t month) {
		return ((T (*)(DateTimeFormatInfo*, int32_t))(Il2CppBase() + 0x3FD8C20))(this, month);
	}
	template <typename T = Il2CppString*> T GetEraName(int32_t era) {
		return ((T (*)(DateTimeFormatInfo*, int32_t))(Il2CppBase() + 0x3FD8D00))(this, era);
	}
	template <typename T = Il2CppString*> T GetMonthName(int32_t month) {
		return ((T (*)(DateTimeFormatInfo*, int32_t))(Il2CppBase() + 0x3FD8EF0))(this, month);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AbbreviatedDayNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD8FD0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawAbbreviatedDayNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9070))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AbbreviatedMonthNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9078))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawAbbreviatedMonthNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9118))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_DayNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9120))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawDayNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD91C0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MonthNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD91C8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawMonthNames() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9268))(this);
	}
	template <typename T = Il2CppString*> T get_AMDesignator() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9270))(this);
	}
	template <typename T = Il2CppString*> T get_PMDesignator() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9278))(this);
	}
	template <typename T = Il2CppString*> T get_DateSeparator() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9280))(this);
	}
	template <typename T = Il2CppString*> T get_TimeSeparator() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9288))(this);
	}
	template <typename T = Il2CppString*> T get_LongDatePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9290))(this);
	}
	template <typename T = Il2CppString*> T get_ShortDatePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9298))(this);
	}
	template <typename T = Il2CppString*> T get_ShortTimePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD92A0))(this);
	}
	template <typename T = Il2CppString*> T get_LongTimePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD92A8))(this);
	}
	template <typename T = Il2CppString*> T get_MonthDayPattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD92B0))(this);
	}
	template <typename T = Il2CppString*> T get_YearMonthPattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD92B8))(this);
	}
	template <typename T = Il2CppString*> T get_FullDateTimePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD92C0))(this);
	}
	template <typename T = uintptr_t> static T get_CurrentInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD898C))(0);
	}
	template <typename T = uintptr_t> static T get_InvariantInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD64E0))(0);
	}
	template <typename T = uintptr_t> T get_Calendar() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9938))(this);
	}
	template <typename T = void> T set_Calendar(uintptr_t value) {
		return ((T (*)(DateTimeFormatInfo*, uintptr_t))(Il2CppBase() + 0x3FD5F9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RFC1123Pattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9940))(this);
	}
	template <typename T = Il2CppString*> T get_RoundtripPattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD9948))(this);
	}
	template <typename T = Il2CppString*> T get_SortableDateTimePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD99C0))(this);
	}
	template <typename T = Il2CppString*> T get_UniversalSortableDateTimePattern() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD99C8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllDateTimePatternsInternal() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD99D0))(this);
	}
	template <typename T = void> T FillAllDateTimePatterns() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD99F0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllRawDateTimePatterns(char format) {
		return ((T (*)(DateTimeFormatInfo*, char))(Il2CppBase() + 0x3FD9DA0))(this, format);
	}
	template <typename T = Il2CppString*> T GetDayName(uintptr_t dayofweek) {
		return ((T (*)(DateTimeFormatInfo*, uintptr_t))(Il2CppBase() + 0x3FDA70C))(this, dayofweek);
	}
	template <typename T = Il2CppString*> T GetAbbreviatedDayName(uintptr_t dayofweek) {
		return ((T (*)(DateTimeFormatInfo*, uintptr_t))(Il2CppBase() + 0x3FDA7E8))(this, dayofweek);
	}
	template <typename T = void> T FillInvariantPatterns() {
		return ((T (*)(DateTimeFormatInfo*))(Il2CppBase() + 0x3FD93A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T PopulateCombinedList(Il2CppArray<uintptr_t>* dates, Il2CppArray<uintptr_t>* times) {
		return ((T (*)(DateTimeFormatInfo*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3FDA4DC))(this, dates, times);
	}

};

}
